#include <SoftwareSerial.h>

SoftwareSerial PuertoVirtual(2,3);

void setup() {
  PuertoVirtual.begin(9600);
  PuertoVirtual.println("RAMS Programacion");
}

void loop() {
  
}
