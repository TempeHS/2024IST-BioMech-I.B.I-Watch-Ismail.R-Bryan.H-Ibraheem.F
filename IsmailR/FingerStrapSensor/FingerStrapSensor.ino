  
  #include <Wire.h>
void setup() {
    Serial.begin(9600);
    Serial.println("heart rate sensor:");
    Wire.begin();
}
void loop() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    while(Wire.available()) {          // slave may send less than requested
        unsigned char c = Wire.read();   // receive heart rate value (a byte)
        Serial.println(c, DEC);         // print heart rate value
    }
    delay(500);
}

#define SDA_PORT PORTD
#define SDA_PIN 3
#define SCL_PORT PORTD
#define SCL_PIN 2
#include <SoftI2CMaster.h>
#include <SoftWire.h>
SoftWire Wire = SoftWire();

void setup() {
    Serial.begin(9600);
    Serial.println("heart rate sensor:");
    Wire.begin();
}
void loop() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    while(Wire.available()) {          // slave may send less than requested
        unsigned char c = Wire.read();   // receive heart rate value (a byte)
        Serial.println(c, DEC);         // print heart rate value
    }
    delay(500);
}

#include "mbed.h"

I2C i2c(I2C_SDA, I2C_SCL);
const int addr = 0xA0;

int main() {
    char heart_rate;
    while (1) {
        i2c.read(addr, &heart_rate, 1);
        printf("heart rate: = %d\r\n", heart_rate);
    }
}
