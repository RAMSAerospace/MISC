//Slave

#include <SPI.h>

volatile boolean Received;
volatile byte SlaveReceived;
volatile byte SlaveSend;
int led=7;

void setup() {
  Serial.begin(115200);
  pinMode(led,OUTPUT);
  pinMode(MISO,OUTPUT);
  SPCR |=_BV(SPE);
  SPI.attachInterrupt();
}

void loop() {
  if(Received){
    if(SlaveReceived==1){
      digitalWrite(led,HIGH);
      Serial.print("LED Encendido");
    }
    else{
      digitalWrite(led,LOW);
      Serial.print("LED Apagado");
    }
  }
}

ISR(SPI_STC_Vect){
  SlaveReceived=SPDR;
  Received=true;
}
