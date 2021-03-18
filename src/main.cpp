#include <M5Atom.h>
#include "grove_two_rgb_led_matrix.h"

const CRGB READY_COLOR(0xf0, 0x00, 0x00); // Green
const CRGB ERROR_COLOR(0x00, 0xf0, 0x00); // Red

GroveTwoRGBLedMatrixClass matrix;
uint8_t emoji = 0;

void setup()
{
    M5.begin(true, false, true); // need to disable I2C
    Wire.begin();
    delay(1000);
    uint16_t vid = matrix.getDeviceVID();
    if (vid != 0x2886)
    {
        Serial.println("Can't detect LED matrix");
        M5.dis.drawpix(0, ERROR_COLOR);
        while (1)
            ;
    }
    M5.dis.drawpix(0, READY_COLOR);
}

void loop()
{
    M5.update();
    if (M5.Btn.wasReleased()) {
        matrix.displayEmoji(emoji, 5000, true);
        emoji = (emoji + 1) % 35;
    }
    delay(100);
}