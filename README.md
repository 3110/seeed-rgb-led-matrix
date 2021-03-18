# Groove - RGB LED Matrix w/DriverをM5Atom Liteで動かすサンプル

## 概要

[Groove - RGB LED Matrix w/Driver](https://wiki.seeedstudio.com/Grove-RGB_LED_Matrix_w-Driver/)（Seed Technology社）を[M5Atom Lite](https://m5stack-store.myshopify.com/collections/m5-atom/products/atom-lite-esp32-development-kit)（M5Stack社）で動かすサンプルプログラムです。[絵文字を表示するサンプル](https://github.com/Seeed-Studio/Seeed_RGB_LED_Matrix/tree/master/examples/rgb_display_emoji)をベースにして，M5Atom Liteのボタンを押すごとに表示する絵文字をかえます。

プログラムを起動すると，RGB LED Matrixとの接続を確認します。問題がなければM5AtomのLEDが緑色に，エラーなら赤色に点灯します。

## コンパイル

[PlatformIO環境](https://platformio.org/)に対応しています。

```
$ git clone https://github.com/3110/seeed-rgb-led-matrix.git
$ cd seeed-rgb-led-matrix
$ platformio run --target=upload
```

## 参考

- [Groove - RGB LED Matrix w/Driver商品ページ](https://wiki.seeedstudio.com/Grove-RGB_LED_Matrix_w-Driver/)（Seeed Technology社）
- [RGB LED Matrix用Arduinoライブラリ](https://github.com/Seeed-Studio/Seeed_RGB_LED_Matrix)（GitHub）
- [M5Atom Lite 商品ページ](https://m5stack-store.myshopify.com/collections/m5-atom/products/atom-lite-esp32-development-kit)（M5Stack社）
- [M5Atom用Arduinoライブラリ](https://github.com/m5stack/M5Atom/)（GitHub）