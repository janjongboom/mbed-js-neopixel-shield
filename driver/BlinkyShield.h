#ifndef BLINKYSHIELD_H
#define BLINKYSHIELD_H

#include "PixelArray.h"
#include "WS2812.h"

#define STRIPLEN 40

class BlinkyShield
{
public:
    BlinkyShield();
    ~BlinkyShield();
    void WipeColor(uint32_t, uint8_t);
    void Red(uint8_t, uint8_t);
    void Green(uint8_t, uint8_t);
    void Blue(uint8_t, uint8_t);
    void SetPixel(uint8_t, uint32_t);
    void Flush();
    void Off();

    static uint8_t NormalizeLedPixel(uint8_t pixel) {
        if (pixel == 0) return 7 + 0;
        if (pixel == 1) return 7 + 8;
        if (pixel == 2) return 7 + 16;
        if (pixel == 3) return 7 + 24;
        if (pixel == 4) return 7 + 32;
        if (pixel == 5) return 6 + 0;
        if (pixel == 6) return 6 + 8;
        if (pixel == 7) return 6 + 16;
        if (pixel == 8) return 6 + 24;
        if (pixel == 9) return 6 + 32;
        if (pixel == 10) return 5 + 0;
        if (pixel == 11) return 5 + 8;
        if (pixel == 12) return 5 + 16;
        if (pixel == 13) return 5 + 24;
        if (pixel == 14) return 5 + 32;
        if (pixel == 15) return 4 + 0;
        if (pixel == 16) return 4 + 8;
        if (pixel == 17) return 4 + 16;
        if (pixel == 18) return 4 + 24;
        if (pixel == 19) return 4 + 32;
        if (pixel == 20) return 3 + 0;
        if (pixel == 21) return 3 + 8;
        if (pixel == 22) return 3 + 16;
        if (pixel == 23) return 3 + 24;
        if (pixel == 24) return 3 + 32;
        if (pixel == 25) return 2 + 0;
        if (pixel == 26) return 2 + 8;
        if (pixel == 27) return 2 + 16;
        if (pixel == 28) return 2 + 24;
        if (pixel == 29) return 2 + 32;
        if (pixel == 30) return 1 + 0;
        if (pixel == 31) return 1 + 8;
        if (pixel == 32) return 1 + 16;
        if (pixel == 33) return 1 + 24;
        if (pixel == 34) return 1 + 32;
        if (pixel == 35) return 0 + 0;
        if (pixel == 36) return 0 + 8;
        if (pixel == 37) return 0 + 16;
        if (pixel == 38) return 0 + 24;
        if (pixel == 39) return 0 + 32;

        return 40;
    }

private:
    PixelArray* _px;
    WS2812* _shield;
};
#endif
