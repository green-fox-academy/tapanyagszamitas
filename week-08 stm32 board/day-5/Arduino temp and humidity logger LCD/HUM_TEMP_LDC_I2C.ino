//Humidity and temperature sensor
//Connect humidity and temperature sensor from left to right:
//pins left (s) : arduino A0 pin
//middle pin : arduino 5V
//right pin: arduino GND

//16char 2row LCD panel via I2C driver
//scl pin: arduino A5
//sda pin: arduino A4
//vcc pin: arduino 5V
//gnd pin: arduino GND

#include <dht.h> // Temperature and humidity sensor h file init
#define dht_dpin A0 // Temperature and humidity sensor pin
dht DHT;

#include <Wire.h> // LCD h file init
#include <LCD.h> // LCD h file init
#include <LiquidCrystal_I2C.h> // LCD I2C h file init

#define I2C_ADDR    0x3F // <<----- Add your address here.  Find it from I2C Scanner
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

int n = 1;

LiquidCrystal_I2C  lcd(I2C_ADDR, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, D6_pin, D7_pin);



void setup() {
  Serial.begin(9600);
  delay(300);//Let system settle
  Serial.println("Humidity and temperature\n\n");
  delay(1000);//Wait rest of 1000ms recommended delay before
  //accessing sensor

  lcd.begin (16, 2); //  <<----- My LCD was 16x2
  // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home (); // go home
  lcd.print("Hello USER");
}//end "setup()"

void loop() {
  //This is the "heart" of the program.
  DHT.read11(dht_dpin);

  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C  ");
  delay(1000);//Don't try to access too frequently... in theory
  //should be once per two seconds, fastest,
  //but seems to work after 0.8 second.

  lcd.setCursor (0, 0);       // go to start of 2nd line
  lcd.print ("Temp     ");
  lcd.print(DHT.temperature);
  lcd.setCursor(0, 6);
  lcd.print("Humidity ");
  lcd.print(DHT.humidity);
  delay(1000);
  lcd.setBacklight(HIGH);     // Backlight on





}// end loop()

