//Include the library code:
#include <LiquidCrystal.h>

//Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(23, 25, 27, 29, 31, 33); //(rs, enable, d4, d5, d6, d7) 

uint32_t cnt;

void setup()
{
//Set up the LCD's number of columns and rows:
lcd.begin(16, 2);
lcd.clear();

//Print a message to the LCD.
lcd.print("Hello World!");

}
void loop()
{
  //Move cursor to second line, first position
  lcd.setCursor(0,1);
  //Print Current Time
  lcd.print(cnt);
  //Wait 1 second
  delay(1000);
  //Increment the time
  cnt++;
}
