#pragma once

#define SATELLITE_IMAGE_WIDTH 16
#define SATELLITE_IMAGE_HEIGHT 15
const uint8_t SATELLITE_IMAGE[] PROGMEM = {0x00, 0x08, 0x00, 0x1C, 0x00, 0x0E, 0x20, 0x07, 0x70, 0x02,
                                           0xF8, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC8, 0x01, 0x9C, 0x54,
                                           0x0E, 0x52, 0x07, 0x48, 0x02, 0x26, 0x00, 0x10, 0x00, 0x0E};

const uint8_t imgSatellite[] PROGMEM = {0x70, 0x71, 0x22, 0xFA, 0xFA, 0x22, 0x71, 0x70};
const uint8_t imgUSB[] PROGMEM = {0x60, 0x60, 0x30, 0x18, 0x18, 0x18, 0x24, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x24, 0x24, 0x24, 0x3C};
const uint8_t imgPower[] PROGMEM = {0x40, 0x40, 0x40, 0x58, 0x48, 0x08, 0x08, 0x08,
                                    0x1C, 0x22, 0x22, 0x41, 0x7F, 0x22, 0x22, 0x22};
const uint8_t imgUser[] PROGMEM = {0x3C, 0x42, 0x99, 0xA5, 0xA5, 0x99, 0x42, 0x3C};
const uint8_t imgPositionEmpty[] PROGMEM = {0x20, 0x30, 0x28, 0x24, 0x42, 0xFF};
const uint8_t imgPositionSolid[] PROGMEM = {0x20, 0x30, 0x38, 0x3C, 0x7E, 0xFF};

#ifdef T_WATCH_S3
const uint8_t bluetoothConnectedIcon[36] PROGMEM = {0xfe, 0x01, 0xff, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0xe3, 0x1f,
                                                    0xf3, 0x3f, 0x33, 0x30, 0x33, 0x33, 0x33, 0x33, 0x03, 0x33, 0xff, 0x33,
                                                    0xfe, 0x31, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0xf0, 0x3f, 0xe0, 0x1f};
#endif

#if (defined(USE_EINK) || defined(ILI9341_DRIVER) || defined(ST7701_CS) || defined(ST7735_CS) || defined(ST7789_CS) ||           \
     defined(HX8357_CS) || ARCH_PORTDUINO) &&                                                                                    \
    !defined(DISPLAY_FORCE_SMALL_FONTS)
const uint8_t imgQuestionL1[] PROGMEM = {0xff, 0x01, 0x01, 0x32, 0x7b, 0x49, 0x49, 0x6f, 0x26, 0x01, 0x01, 0xff};
const uint8_t imgQuestionL2[] PROGMEM = {0x0f, 0x08, 0x08, 0x08, 0x06, 0x0f, 0x0f, 0x06, 0x08, 0x08, 0x08, 0x0f};
const uint8_t imgInfoL1[] PROGMEM = {0xff, 0x01, 0x01, 0x01, 0x1e, 0x7f, 0x1e, 0x01, 0x01, 0x01, 0x01, 0xff};
const uint8_t imgInfoL2[] PROGMEM = {0x0f, 0x08, 0x08, 0x08, 0x06, 0x0f, 0x0f, 0x06, 0x08, 0x08, 0x08, 0x0f};
const uint8_t imgSFL1[] PROGMEM = {0xb6, 0x8f, 0x19, 0x11, 0x31, 0xe3, 0xc2, 0x01,
                                   0x01, 0xf9, 0xf9, 0x89, 0x89, 0x89, 0x09, 0xeb};
const uint8_t imgSFL2[] PROGMEM = {0x0e, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08,
                                   0x00, 0x0f, 0x0f, 0x00, 0x08, 0x08, 0x08, 0x0f};
#else
const uint8_t imgInfo[] PROGMEM = {0xff, 0x81, 0x00, 0xfb, 0xfb, 0x00, 0x81, 0xff};
const uint8_t imgQuestion[] PROGMEM = {0xbf, 0x41, 0xc0, 0x8b, 0xdb, 0x70, 0xa1, 0xdf};
const uint8_t imgSF[] PROGMEM = {0xd2, 0xb7, 0xad, 0xbb, 0x92, 0x01, 0xfd, 0xfd, 0x15, 0x85, 0xf5};
#endif

#ifndef EXCLUDE_EMOJI
#define thumbs_height 25
#define thumbs_width 25
static unsigned char thumbup[] PROGMEM = {
    0x00, 0x1C, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x80, 0x09, 0x00, 0x00,
    0xC0, 0x08, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0x20, 0x04, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00,
    0x0C, 0xCE, 0x7F, 0x00, 0x04, 0x20, 0x80, 0x00, 0x02, 0x20, 0x80, 0x00, 0x02, 0x60, 0xC0, 0x00, 0x01, 0xF8, 0xFF, 0x01,
    0x01, 0x08, 0x00, 0x01, 0x01, 0x08, 0x00, 0x01, 0x01, 0xF8, 0xFF, 0x00, 0x01, 0x10, 0x80, 0x00, 0x01, 0x18, 0x80, 0x00,
    0x02, 0x30, 0xC0, 0x00, 0x06, 0xE0, 0x3F, 0x00, 0x0C, 0x20, 0x30, 0x00, 0x38, 0x20, 0x10, 0x00, 0xE0, 0xCF, 0x1F, 0x00,
};

static unsigned char thumbdown[] PROGMEM = {
    0xE0, 0xCF, 0x1F, 0x00, 0x38, 0x20, 0x10, 0x00, 0x0C, 0x20, 0x30, 0x00, 0x06, 0xE0, 0x3F, 0x00, 0x02, 0x30, 0xC0, 0x00,
    0x01, 0x18, 0x80, 0x00, 0x01, 0x10, 0x80, 0x00, 0x01, 0xF8, 0xFF, 0x00, 0x01, 0x08, 0x00, 0x01, 0x01, 0x08, 0x00, 0x01,
    0x01, 0xF8, 0xFF, 0x01, 0x02, 0x60, 0xC0, 0x00, 0x02, 0x20, 0x80, 0x00, 0x04, 0x20, 0x80, 0x00, 0x0C, 0xCE, 0x7F, 0x00,
    0x18, 0x02, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x20, 0x04, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00, 0xC0, 0x08, 0x00, 0x00,
    0x80, 0x09, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00,
};

#define question_height 25
#define question_width 25
static unsigned char question[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x80, 0xFF, 0x01, 0x00, 0xC0, 0xFF, 0x07, 0x00, 0xE0, 0xFF, 0x07, 0x00,
    0xE0, 0xC3, 0x0F, 0x00, 0xF0, 0x81, 0x0F, 0x00, 0xF0, 0x01, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x80, 0x0F, 0x00,
    0x00, 0xC0, 0x0F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0x7C, 0x00, 0x00,
    0x00, 0x3C, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3E, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define bang_height 30
#define bang_width 30
static unsigned char bang[] PROGMEM = {
    0xFF, 0x0F, 0xFC, 0x3F, 0xFF, 0x0F, 0xFC, 0x3F, 0xFF, 0x0F, 0xFC, 0x3F, 0xFF, 0x07, 0xF8, 0x3F, 0xFF, 0x07, 0xF8, 0x3F,
    0xFE, 0x07, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x1F,
    0xFE, 0x03, 0xF0, 0x1F, 0xFE, 0x03, 0xF0, 0x1F, 0xFC, 0x03, 0xF0, 0x0F, 0xFC, 0x03, 0xF0, 0x0F, 0xFC, 0x03, 0xF0, 0x0F,
    0xFC, 0x03, 0xF0, 0x0F, 0xFC, 0x03, 0xF0, 0x0F, 0xFC, 0x03, 0xF0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xC0, 0x03, 0xFC, 0x03, 0xF0, 0x0F, 0xFE, 0x03, 0xF0, 0x1F,
    0xFE, 0x07, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x1F, 0xFC, 0x03, 0xF0, 0x0F, 0xF8, 0x01, 0xE0, 0x07,
};

#define haha_height 30
#define haha_width 30
static unsigned char haha[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00,
    0x00, 0xFC, 0x0F, 0x00, 0x00, 0x1F, 0x3E, 0x00, 0x80, 0x03, 0x70, 0x00, 0xC0, 0x01, 0xE0, 0x00, 0xC0, 0x00, 0xC2, 0x00,
    0x60, 0x00, 0x03, 0x00, 0x60, 0x00, 0xC1, 0x1F, 0x60, 0x80, 0x8F, 0x31, 0x30, 0x0E, 0x80, 0x31, 0x30, 0x10, 0x30, 0x1F,
    0x30, 0x08, 0x58, 0x00, 0x30, 0x04, 0x6C, 0x03, 0x60, 0x00, 0xF3, 0x01, 0x60, 0xC0, 0xFC, 0x01, 0x80, 0x38, 0xBF, 0x01,
    0xE0, 0xC5, 0xDF, 0x00, 0xB0, 0xF9, 0xEF, 0x00, 0x30, 0xF1, 0x73, 0x00, 0xB0, 0x1D, 0x3E, 0x00, 0xF0, 0xFD, 0x0F, 0x00,
    0xE0, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define wave_icon_height 30
#define wave_icon_width 30
static unsigned char wave_icon[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xC0, 0x00,
    0x00, 0x0C, 0x9C, 0x01, 0x80, 0x17, 0x20, 0x01, 0x80, 0x26, 0x46, 0x02, 0x80, 0x44, 0x88, 0x02, 0xC0, 0x89, 0x8A, 0x02,
    0x40, 0x93, 0x8B, 0x02, 0x40, 0x26, 0x13, 0x00, 0x80, 0x44, 0x16, 0x00, 0xC0, 0x89, 0x24, 0x00, 0x40, 0x93, 0x60, 0x00,
    0x40, 0x26, 0x40, 0x00, 0x80, 0x0C, 0x80, 0x00, 0x00, 0x09, 0x80, 0x00, 0x00, 0x02, 0x80, 0x00, 0x40, 0x06, 0x80, 0x00,
    0x50, 0x0C, 0x80, 0x00, 0x50, 0x08, 0x40, 0x00, 0x90, 0x10, 0x20, 0x00, 0xB0, 0x21, 0x10, 0x00, 0x20, 0x47, 0x18, 0x00,
    0x40, 0x80, 0x0F, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define cowboy_height 30
#define cowboy_width 30
static unsigned char cowboy[] PROGMEM = {
    0x00, 0xF0, 0x03, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x3C, 0xFE, 0x1F, 0x0F,
    0xFE, 0xFE, 0xDF, 0x1F, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F,
    0x3E, 0xC0, 0x00, 0x1F, 0x1E, 0x00, 0x00, 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x08, 0x0E, 0x1C, 0x04, 0x00, 0x0E, 0x1C, 0x00,
    0x04, 0x0E, 0x1C, 0x08, 0x04, 0x0E, 0x1C, 0x08, 0x04, 0x04, 0x08, 0x08, 0x04, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x08,
    0x8C, 0x07, 0x70, 0x0C, 0x88, 0xFC, 0x4F, 0x04, 0x88, 0x01, 0x40, 0x04, 0x90, 0xFF, 0x7F, 0x02, 0x30, 0x03, 0x30, 0x03,
    0x60, 0x0E, 0x9C, 0x01, 0xC0, 0xF8, 0xC7, 0x00, 0x80, 0x01, 0x60, 0x00, 0x00, 0x0E, 0x1C, 0x00, 0x00, 0xF8, 0x07, 0x00,
};

#define deadmau5_height 30
#define deadmau5_width 60
static unsigned char deadmau5[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x07, 0x00,
    0x00, 0xFC, 0x03, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x80, 0xFF, 0x0F, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xE0, 0xFF, 0x3F, 0x00,
    0xE0, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x07,
    0xFC, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0xFC, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0xFE, 0xFF, 0xFF, 0x00,
    0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xE0, 0xFF, 0x3F, 0xFC,
    0x0F, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x1F, 0xF8, 0x0F, 0xFC, 0x3F, 0x00, 0x80, 0xFF, 0x0F, 0xF8, 0x1F, 0xFC, 0x1F, 0x00,
    0x00, 0xFF, 0x0F, 0xFC, 0x3F, 0xFC, 0x0F, 0x00, 0x00, 0xF8, 0x1F, 0xFF, 0xFF, 0xFE, 0x01, 0x00, 0x00, 0x00, 0xFC, 0xFF,
    0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x07, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define sun_width 30
#define sun_height 30
static unsigned char sun[] PROGMEM = {
    0x00, 0xC0, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x30, 0xC0, 0x00, 0x03,
    0x70, 0x00, 0x80, 0x03, 0xF0, 0x00, 0xC0, 0x03, 0xF0, 0xF8, 0xC7, 0x03, 0xE0, 0xFC, 0xCF, 0x01, 0x00, 0xFE, 0x1F, 0x00,
    0x00, 0xFF, 0x3F, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x8E, 0xFF, 0x7F, 0x1C, 0x9F, 0xFF, 0x7F, 0x3E,
    0x9F, 0xFF, 0x7F, 0x3E, 0x8E, 0xFF, 0x7F, 0x1C, 0x80, 0xFF, 0x7F, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x3F, 0x00,
    0x00, 0xFE, 0x1F, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xC0, 0xF9, 0xE7, 0x00, 0xE0, 0x01, 0xE0, 0x01, 0xF0, 0x01, 0xE0, 0x03,
    0xF0, 0xC0, 0xC0, 0x03, 0x00, 0xE0, 0x01, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0xC0, 0x00, 0x00,
};

#define rain_width 30
#define rain_height 30
static unsigned char rain[] PROGMEM = {
    0xC0, 0x0F, 0xC0, 0x00, 0x40, 0x00, 0x80, 0x00, 0x20, 0x00, 0x80, 0x00, 0x20, 0x00, 0x80, 0x03, 0x38, 0x00,
    0x00, 0x0E, 0x0C, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x20,
    0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20, 0x03, 0x00, 0x00, 0x30, 0x02, 0x00,
    0x00, 0x10, 0x06, 0x00, 0x00, 0x08, 0xFC, 0xFF, 0xFF, 0x07, 0xF0, 0xFF, 0xFF, 0x01, 0x80, 0x00, 0x01, 0x00,
    0xC0, 0xC0, 0x81, 0x03, 0xA0, 0x60, 0xC1, 0x03, 0x90, 0x20, 0x41, 0x01, 0xF0, 0xE0, 0xC0, 0x01, 0x60, 0x4C,
    0x98, 0x00, 0x00, 0x0E, 0x1C, 0x00, 0x00, 0x0B, 0x12, 0x00, 0x00, 0x09, 0x1A, 0x00, 0x00, 0x06, 0x0E, 0x00,
};

#define cloud_height 30
#define cloud_width 30
static unsigned char cloud[] PROGMEM = {
    0x00, 0x80, 0x07, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0x70, 0x30, 0x00, 0x00, 0x10, 0x60, 0x00, 0x80, 0x1F, 0x40, 0x00,
    0xC0, 0x0F, 0xC0, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x60, 0x00, 0x80, 0x00, 0x20, 0x00, 0x80, 0x00, 0x20, 0x00, 0x80, 0x01,
    0x20, 0x00, 0x00, 0x07, 0x38, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x10,
    0x02, 0x00, 0x00, 0x30, 0x03, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20,
    0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x30, 0x03, 0x00, 0x00, 0x10,
    0x02, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x0C, 0xFC, 0xFF, 0xFF, 0x07, 0xF0, 0xFF, 0xFF, 0x03,
};

#define fog_height 25
#define fog_width 25
static unsigned char fog[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x3C, 0x00, 0xFE, 0x01, 0xFF, 0x00, 0x87, 0xC7, 0xC3, 0x01, 0x03, 0xFE, 0x80, 0x01,
    0x00, 0x38, 0x00, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0xFF, 0x83, 0xFF, 0x01, 0x03, 0xFF, 0x81, 0x01, 0x00, 0x7C, 0x00, 0x00,
    0xF8, 0x00, 0x3E, 0x00, 0xFE, 0x01, 0xFF, 0x00, 0x87, 0xC7, 0xC3, 0x01, 0x03, 0xFE, 0x80, 0x01, 0x00, 0x38, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define devil_height 30
#define devil_width 30
static unsigned char devil[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x10, 0x03, 0xC0, 0x01, 0x38, 0x07, 0x7C, 0x0F, 0x38, 0x1F, 0x03, 0x30, 0x1E,
    0xFE, 0x01, 0xE0, 0x1F, 0x7E, 0x00, 0x80, 0x1F, 0x3C, 0x00, 0x00, 0x0F, 0x1C, 0x00, 0x00, 0x0E, 0x18, 0x00, 0x00, 0x06,
    0x08, 0x00, 0x00, 0x04, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x0E, 0x1C, 0x0C,
    0x0C, 0x18, 0x06, 0x0C, 0x0C, 0x1C, 0x06, 0x0C, 0x0C, 0x1C, 0x0E, 0x0C, 0x0C, 0x1C, 0x0E, 0x0C, 0x0C, 0x0C, 0x06, 0x0C,
    0x08, 0x00, 0x00, 0x06, 0x18, 0x02, 0x10, 0x06, 0x10, 0x0C, 0x0C, 0x03, 0x30, 0xF8, 0x07, 0x03, 0x60, 0xE0, 0x80, 0x01,
    0xC0, 0x00, 0xC0, 0x00, 0x80, 0x01, 0x70, 0x00, 0x00, 0x06, 0x1C, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#define heart_height 30
#define heart_width 30
static unsigned char heart[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0xF0, 0x00, 0xF8, 0x0F, 0xFC, 0x07, 0xFC, 0x1F, 0x06, 0x0E, 0xFE, 0x3F, 0x03, 0x18,
    0xFE, 0xFF, 0x7F, 0x10, 0xFF, 0xFF, 0xFF, 0x31, 0xFF, 0xFF, 0xFF, 0x33, 0xFF, 0xFF, 0xFF, 0x37, 0xFF, 0xFF, 0xFF, 0x37,
    0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0x1F, 0xFE, 0xFF, 0xFF, 0x1F,
    0xFC, 0xFF, 0xFF, 0x0F, 0xFC, 0xFF, 0xFF, 0x0F, 0xF8, 0xFF, 0xFF, 0x07, 0xF0, 0xFF, 0xFF, 0x03, 0xF0, 0xFF, 0xFF, 0x03,
    0xE0, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0xFE, 0x1F, 0x00,
    0x00, 0xFC, 0x0F, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00,
};

#define poo_width 30
#define poo_height 30
static unsigned char poo[] PROGMEM = {
    0x00, 0x1C, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x8C, 0x07, 0x00, 0x00, 0x0C, 0x06, 0x00,
    0x00, 0x24, 0x0C, 0x00, 0x00, 0x34, 0x08, 0x00, 0x00, 0x1F, 0x08, 0x00, 0xC0, 0x0F, 0x08, 0x00, 0xC0, 0x00, 0x3C, 0x00,
    0x60, 0x00, 0x7C, 0x00, 0x60, 0x00, 0xC6, 0x00, 0x20, 0x00, 0xCB, 0x00, 0xA0, 0xC7, 0xFF, 0x00, 0xE0, 0x7F, 0xF7, 0x00,
    0xF0, 0x18, 0xE3, 0x03, 0x78, 0x18, 0x41, 0x03, 0x6C, 0x9B, 0x5D, 0x06, 0x64, 0x9B, 0x5D, 0x04, 0x44, 0x1A, 0x41, 0x04,
    0x4C, 0xD8, 0x63, 0x06, 0xF8, 0xFC, 0x36, 0x06, 0xFE, 0x0F, 0x9C, 0x1F, 0x07, 0x03, 0xC0, 0x30, 0x03, 0x00, 0x78, 0x20,
    0x01, 0x00, 0x1F, 0x20, 0x03, 0xE0, 0x03, 0x20, 0x07, 0x7E, 0x04, 0x30, 0xFE, 0x0F, 0xFC, 0x1F, 0xF0, 0x00, 0xF0, 0x0F,
};
#endif

#include "img/icon.xbm"
