#pragma once

/* LCDの設定 */
// ピクセルクロックが低すぎるまたは高すぎると、画面がモザイク状になる可能性があります
#define EXAMPLE_LCD_PIXEL_CLOCK_HZ   (16 * 1000 * 1000) // LCDのピクセルクロックの周波数
// 横方向と縦方向のピクセル数
#define EXAMPLE_LCD_H_RES            320  // 横方向の解像度
#define EXAMPLE_LCD_V_RES            170  // 縦方向の解像度
#define LVGL_LCD_BUF_SIZE            (EXAMPLE_LCD_H_RES * EXAMPLE_LCD_V_RES) // LVGL用のLCDバッファサイズ
#define EXAMPLE_PSRAM_DATA_ALIGNMENT 64   // PSRAMデータのアラインメント

/* ESP32S3のピン設定 */
#define PIN_LCD_BL                   38  // LCDのバックライトピン

// LCDデータピン
#define PIN_LCD_D0                   39
#define PIN_LCD_D1                   40
#define PIN_LCD_D2                   41
#define PIN_LCD_D3                   42
#define PIN_LCD_D4                   45
#define PIN_LCD_D5                   46
#define PIN_LCD_D6                   47
#define PIN_LCD_D7                   48

#define PIN_POWER_ON                 15  // 電源オンピン

// LCD制御ピン
#define PIN_LCD_RES                  5   // リセットピン
#define PIN_LCD_CS                   6   // チップ選択ピン
#define PIN_LCD_DC                   7   // データ/コマンド選択ピン
#define PIN_LCD_WR                   8   // 書き込みピン
#define PIN_LCD_RD                   9   // 読み取りピン

// ボタンピン
#define PIN_BUTTON_1                 0
#define PIN_BUTTON_2                 14
#define PIN_BAT_VOLT                 4   // バッテリー電圧ピン

// I2Cピン
#define PIN_IIC_SCL                  17  // I2Cクロックピン
#define PIN_IIC_SDA                  18  // I2Cデータピン

// タッチスクリーンピン
#define PIN_TOUCH_INT                16  // タッチの割り込みピン
#define PIN_TOUCH_RES                21  // タッチのリセットピン

/* 外部拡張 */
// SDカードピン
#define PIN_SD_CMD                   13  // コマンドピン
#define PIN_SD_CLK                   11  // クロックピン
#define PIN_SD_D0                    12  // データピン0
