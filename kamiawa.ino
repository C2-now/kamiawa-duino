// スピーカーをつなぐピン
const int speaker_pin = 13;
// 超音波の周波数
const int kamiawa_frequency = 30000;
// 神泡時間（エンペラーバブルタイム）
const int kamiawa_time = 10;

void setup() {
  // 13番ピンから30kHzの音を10s
  tone(speaker_pin, kamiawa_frequency, kamiawa_time * 1000);
}

void loop() {
}
