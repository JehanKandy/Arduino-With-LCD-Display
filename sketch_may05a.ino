#include <LiquidCrystal.h>
LiquidCrystal lcd (1 ,2, 4, 5, 6, 7);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(3,0);
  lcd.println("WELCOME");
  delay(500);

  lcd.setCursor(4,1);
  lcd.println("ARDUINO");
  delay(1000);

  lcd.clear();
  delay(1000);

  lcd.setCursor(1,0);
  lcd.println("Make By ");
  delay(200);

  lcd.clear();
  delay(100);
    
  lcd.setCursor(1,0);
  lcd.println("Jehan ");

  delay(100);

  lcd.setCursor(1,1);
  lcd.println("Weerasuriya ");

  lcd.clear();
  delay(1000);

}
int val=2;
void loop() {
      String text = "LCD Tutorial";
      lcd.setCursor(2,1);
      lcd.print(text);

      lcd.setCursor(5,3);
      lcd.print(val);

      val++;
      delay(100);
      
          lcd.clear();
          delay(1000);
        
      for (int i = 0; i <= 13; i++){
        lcd.setCursor(i,0);
        lcd.println("==>");
        delay(500);
      }    
          lcd.clear();
          delay(1000);
        
   }
 

