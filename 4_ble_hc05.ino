#include <SoftwareSerial.h>

// 创建SoftwareSerial对象，参数为RX和TX引脚
SoftwareSerial BTSerial(3, 4);  // RX, TX

const int ledPin = 9;  // LED连接的引脚（支持PWM）
int brightness = 255;    // 初始亮度为0

void setup() {
  // 初始化软串口
  BTSerial.begin(9600);
  // 初始化LED引脚
  pinMode(ledPin, OUTPUT);
  // 初始化串口监视器
  Serial.begin(9600);
  Serial.println("蓝牙LED亮度控制已启动, 等待指令...");
}

void loop() {
  // 检查是否有蓝牙数据可读
  if (BTSerial.available()) {
    String input = BTSerial.readString();  // 读取蓝牙模块发送的数据
    brightness = input.toInt();  // 转换为整数
    brightness = constrain(brightness, 0, 255);  // 限制亮度范围在0到255之间
    
    // 调节LED亮度
    analogWrite(ledPin, brightness);
    
    // 在串口监视器上输出当前亮度值
    Serial.print("接收到的亮度值：");
    Serial.println(brightness);
  }
}
