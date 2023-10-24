#include <Servo.h>
#include <LiquidCrystal.h>

// creating servo & LCD objects
Servo servo;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  servo.attach(9);
  lcd.begin(16, 2);
  pinMode(13, OUTPUT);

  // initial printing on LCD
  lcd.print("github.com/");
  lcd.setCursor(0, 1);
  lcd.print("sooraj.dmg");
  delay(1000);
  lcd.clear();
  lcd.print("Servo degree:");
}

void loop()
{
  for (int i = 0; i <= 68; i++)
  {
    // rotating the servo to the value of i
    servo.write(i);
    lcd.setCursor(0, 1);

    // printing the servo degree on LCD
    lcd.print(servo.read());

    // Turn on LED when servo rotates more than 68 degree
    if (servo.read() > 68)
    {
      digitalWrite(13, HIGH);
    }
    delay(200);
  }
  // clear LCD & start again
  lcd.clear();
  lcd.print("Servo degree:");
}