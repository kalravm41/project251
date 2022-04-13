#include<WiFi.h>

//  wifi credentials
const char ssid[] = "archanabhatt";
const char password[] = "10Archana#68";

const int potpin = 34;

void setup()
{
  Serial.begin(115200);

  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{

  analogValue = analogRead(4);
  
  Serial.print("Potentiometer Value: ");
  Serial.println(analogValue");

}
