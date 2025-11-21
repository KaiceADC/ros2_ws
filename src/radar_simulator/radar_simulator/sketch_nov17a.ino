// Delphi 2.5 Radar - Testing Correct Byte Parsing
#include <SPI.h>
#define CAN_2515
#include "mcp2515_can.h"

const int SPI_CS_PIN = 9;
mcp2515_can CAN(SPI_CS_PIN);

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  Serial.println("\n=== Delphi 2.5 Radar - Testing Parsing ===");
  
  if (CAN_OK != CAN.begin(CAN_500KBPS)) {
    Serial.println("CAN FAILED!");
    while(1);
  }
  
  Serial.println("CAN OK - Output Format: id,range,velocity,angle,rcs");
  Serial.println("---");
}

void loop() {
  unsigned char len = 0;
  unsigned char buf[8];

  if (CAN_MSGAVAIL == CAN.checkReceive()) {
    CAN.readMsgBuf(&len, buf);
    unsigned long canId = CAN.getCanId();

    if ((canId >= 0x4E0 && canId <= 0x4E2) && len >= 5) {
      int object_id = buf[0];
      float range_m = buf[1] * 0.0625;
      int8_t velocity_raw = (int8_t)buf[2];
      float velocity_ms = velocity_raw * 0.25;
      int8_t angle_raw = (int8_t)buf[3];
      float angle_deg = angle_raw * 0.1;
      float rcs_db = -10.0;

      Serial.print(object_id);
      Serial.print(",");
      Serial.print(range_m, 2);
      Serial.print(",");
      Serial.print(velocity_ms, 2);
      Serial.print(",");
      Serial.print(angle_deg, 2);
      Serial.print(",");
      Serial.println(rcs_db, 1);
    }
  }
}

void parseDelphi(unsigned char *buf) {
  // Extract object ID from byte 0
  int object_id = buf[0];
  
  // TEST 1: Try buf[1] as range with 0.0625m scaling
  float range_m = buf[1] * 0.0625;
  
  // TEST 2: Try buf[2] as velocity (signed)
  int8_t velocity_raw = (int8_t)buf[2];
  float velocity_ms = velocity_raw * 0.25;
  
  // TEST 3: Try buf[3] as angle (signed)
  int8_t angle_raw = (int8_t)buf[3];
  float angle_deg = angle_raw * 0.1;
  
  // Placeholder RCS
  float rcs_db = -10.0;
  
  // Output CSV format
  Serial.print(object_id);
  Serial.print(",");
  Serial.print(range_m, 2);
  Serial.print(",");
  Serial.print(velocity_ms, 2);
  Serial.print(",");
  Serial.print(angle_deg, 2);
  Serial.print(",");
  Serial.println(rcs_db, 1);
}
