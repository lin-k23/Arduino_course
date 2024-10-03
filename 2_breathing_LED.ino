// 定义LED连接的引脚
const int ledPin = 9;  // 使用PWM的引脚

// 定义亮度和变化量
int brightness = 0;    // LED的当前亮度
int fadeAmount = 3;    // 每次循环改变的亮度量

void setup() {
  Serial.begin(9600);
  // 初始化 LED 引脚为输出
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 设置LED的亮度
  analogWrite(ledPin, brightness);

  // 改变亮度
  brightness = brightness + fadeAmount;

  // 当亮度到达极限时反转亮度变化方向
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;  // 反转变化方向
  }
  Serial.println(brightness);
  // 控制呼吸的速度
  delay(30);  // 调整这个值来改变呼吸的速度
}
