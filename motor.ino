const int mosfetGatePin = 1;  // FETのゲートに接続されたピン番号 gpio 1

void setup() {
  pinMode(mosfetGatePin, OUTPUT);//：指定されたピンを出力用に設定
  Serial.begin(9600);  // シリアル通信を開始. Arduinoのシリアル通信を使用して、デバッグメッセージやデータをPCに送信する際に使用
}

void loop() {
  Serial.println("モーターを回転させます");  // シリアルポートを通じてデバッグメッセージを送信、
  digitalWrite(mosfetGatePin, HIGH);  // MOSFETをオンにしてモーターを回転.：指定されたピンにHIGH（1）の電圧を出力し、MOSFETがオンになり、モーターが回転
  delay(3000);  // 3秒待機.指定されたミリ秒数だけ処理を一時停止
  
  Serial.println("モーターを停止させます");  // デバッグメッセージを送信
  digitalWrite(mosfetGatePin, LOW);  // MOSFETをオフにしてモーターを停止.指定されたピンにLOW（0）の電圧を出力し、MOSFETがオフになり、モーターが停止
  delay(10000);  // 10秒待機.指定されたミリ秒数だけ処理を一時停止
}

