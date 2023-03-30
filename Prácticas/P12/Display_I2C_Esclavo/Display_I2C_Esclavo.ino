#include <TinyGPS.h>

TinyGPS gps;  //Creates a new instance of the TinyGPS object


void setup()
{
  Serial.begin(9600);  
  Serial.print("Simple TinyGPS library v. "); Serial.println(TinyGPS::library_version());
  Serial.println("Testing GPS");
  Serial.println("Designed by: www.TheEngineeringProjects.com");
  Serial.println();
}

void loop()
{
  bool newData = false;
  unsigned long chars;
  unsigned short sentences, failed;

  // For one second we parse GPS data and report some key values
}
