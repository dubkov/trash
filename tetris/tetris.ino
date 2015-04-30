//just ideas

#include <SPI.h>

#define SS_PIN 10
#define MOSI_PIN 11
#define SCK_PIN 13

class Matrix{
  byte digit[10] = {NULL};
  void init();
};


void setup(){
pinMode(SS_PIN, OUTPUT);
SPI.begin();

}

void loop(){
drawLine();
}
void drawLine() {
	for(int i=0; i<8; i++){
	digitalWrite(SS_PIN, LOW);
	SPI.transfer(0xFF -(1<<i));
	SPI.transfer(0xFF);
	digitalWrite(SS_PIN, HIGH);
	delay(125);
}

}
