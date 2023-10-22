# 設定

## Arduino IDEのボードの追加

Arduino 2.x系を前提に解説していきます。

Arduino IDEを起動し、メニューから`[Arduino IDE]>[Preference]`を選択します。

![](./img/arduino001.png)

![](./img/arduino002.png)

esp32のボードが追加できるように下記パッケージをコピー&ペーストします。

    https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

![](./img/arduino003.png)

Arduino IDEのメニューから`[Tool]>[Board]>[Board manager]`を選択します。

![](./img/arduino004.png)

`esp32 by Espressif system`を選択します。

![](./img/arduino005.png)

Boardの設定をおこないます。

![](./img/arduino006.png)


`T-Display S3`とUSB Type-Cとデバイスの接続ポートを選択します。

![](./img/arduino007.png)


## Arduinoライブラリの追加

[https://github.com/Xinyuan-LilyGO/T-Display-S3](https://github.com/Xinyuan-LilyGO/T-Display-S3)より、パッケージをDownloadしてきます。

![](./img/arduino101.png)

パッケージの解凍し、libフォルダのライブラリ一式を、`C:\Users\YourName\Documents\Arduino\libraries` にコピーします。

![](./img/arduino102.png)


