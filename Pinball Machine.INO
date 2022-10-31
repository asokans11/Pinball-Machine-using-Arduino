#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define melodyPin 6
//Mario main theme melody
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
//Mario main them tempo
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

//

//Underworld melody
int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

#include <Servo.h>
int servoPin = 8;
Servo myservo;
int buttonPin = 13;
int counter = 1;
int buttonState = 1;
int presslength_ms = 0;
int val = 0;
int mode = 0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int pinLED_1 = A0;
int pinLED_2 = A1;
int pinLED_3 = A2;
int waitingTime = 200;
int contrast = 60;
int i = 0;
int potValue1 = 0;
int potValue2 = 0;
int potPin = A4;
const int buzzer = 6;
int servoState = 0;
int potScore = 0;



void setup()
{
  pinMode ( buttonPin, INPUT_PULLUP);
  pinMode ( servoPin, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode (potPin, INPUT);
  myservo.attach(9);
  analogWrite(7, contrast);
  lcd.begin(16, 2);

  Serial.begin(9600);
}

void loop()
{
  mode = gameMode ();
  switch (mode)
  {
    case 1:
      mode = gameMode ();
      blinkLED();
      mode = gameMode ();

      lcdstarted();
      if (i > 3)
      {
        break;
      }
      mode = gameMode ();
      sing(1);
      mode = gameMode ();
      Serial.println (" Welcome To Pinball");
      break;
    case 2:
      mode = gameMode ();
      playing();
      mode = gameMode ();
      score();
      mode = gameMode ();
      servo();
      mode = gameMode ();
      Serial.println ("Play Game");
      mode = gameMode ();
      lcdScore();
      mode = gameMode ();
      //lcd.clear();
      break;
    case 3:
      lcd.clear();
      mode = gameMode ();
      Serial.println (" Game over");
      lcd.print("GAME OVER");
      delay(1000);
      lcd.clear();
      sing(2);
      break;
  }
}



int blinkLED()
{

  mode = gameMode ();
  for (i = 0 ; i < 3; i++)
  {
    digitalWrite(A0, HIGH);
    digitalWrite(pinLED_2, HIGH);
    digitalWrite(pinLED_3, HIGH);
    delay(waitingTime);
    digitalWrite(A0, LOW);
    digitalWrite(pinLED_2, LOW);
    digitalWrite(pinLED_3, LOW);
    delay(waitingTime);
    if (i > 3)
    {
      break;
    }
  }
  return i;
}

void lcdstarted()
{
  mode = gameMode ();
  lcd.print("  WELCOME TO");
  lcd.setCursor(0, 1);
  mode = gameMode ();
  lcd.print("    PINBALL    ");
  delay(300);
  lcd.clear();
  mode = gameMode ();
  lcd.print("  Press Start  ");
  delay(300);
  mode = gameMode ();
  lcd.clear();
}
int gameMode()
{
  if (digitalRead(buttonPin) == LOW && buttonState > 5)
  {
    delay(100);
    presslength_ms = presslength_ms + 100;
    val = val + 1;
    //Serial.print("ms= ");
    Serial.println(presslength_ms);
  } else if (digitalRead(buttonPin) == LOW && buttonState < 5 )
  {
    presslength_ms = 0;
  }

  if (digitalRead(buttonPin) == LOW)
  {
    buttonState = buttonState + 1;
    delay(300);
    //Serial.println ("buttonState");
    //Serial.println (buttonState);
    if (buttonState == 1)
    {
      counter = counter + 1;
      delay(300);
      Serial.println ("counter");
      Serial.println (counter);
    }
    else if (buttonState == 2)
    {
      counter = counter + 1;
      delay(300);
      Serial.println ("counter");
      Serial.println (counter);
    }
    else if (buttonState == 5)
    {
      counter = counter + 1;
      delay(300);
      Serial.println ("counter");
      Serial.println (counter);
    }
    else if (presslength_ms >= 500 && buttonState >= 5 && counter == 3 && digitalRead(buttonPin) == HIGH)
    {
      counter = 1;
      buttonState = 1;
      presslength_ms = 0;
      val = 0;
      delay(100);
    }
  }
  return counter;
  return buttonState;
}
int playing()
{
  gameMode();
  if (buttonState == 2)
  {
    gameMode();
    
    lcd.setCursor(0, 0);
    lcd.print("          Ball");
    lcd.setCursor(0, 1);
    lcd.print("            1");
    lcdScore();
    delay(300);

    digitalWrite(pinLED_2, HIGH);
    digitalWrite(pinLED_3, HIGH);
    for (i = 0 ; i < 3; i++)
    {
      gameMode();
      digitalWrite(A0, HIGH);
      delay(waitingTime);
      digitalWrite(A0, LOW);
    }
  }
  if (buttonState == 3)
  {
    gameMode();
    lcdScore();
    lcd.setCursor(0, 0);
    lcd.print("          Ball");
    lcd.setCursor(0, 1);
    lcd.print("            2");
    lcdScore();
    delay(300);
    digitalWrite(pinLED_1, LOW);
    digitalWrite(pinLED_3, HIGH);
    for (i = 0 ; i < 3; i++)
    {
      gameMode();
      digitalWrite(pinLED_2, HIGH);
      delay(waitingTime);
      digitalWrite(pinLED_2, LOW);
    }
  }
  if (buttonState == 4)
  {
    gameMode();
    lcdScore();
    lcd.setCursor(0, 0);
    lcd.print("          Ball");
    lcd.setCursor(0, 1);
    lcd.print("            3");
    lcdScore();
    delay(300);
    digitalWrite(pinLED_1, LOW);
    digitalWrite(pinLED_2, LOW);
    for (i = 0 ; i < 3; i++)
    {
      gameMode();
      digitalWrite(pinLED_3, HIGH);
      delay(waitingTime);
      digitalWrite(pinLED_3, LOW);
    }

  }
}
int score()
{
  gameMode();
  potValue1 = analogRead(potPin);
  Serial.println(potValue1);
  lcd.setCursor(0, 0);
  lcd.print("Score:");
  lcd.setCursor(0, 1);
  lcd.print(potScore);
  //delay(10);
  //  if (potValue1 != potValue2)
  //  {
  //    gameMode();
  //    tone(buzzer, 1000);
  //    delay(200);
  //    potValue2 = analogRead(potPin);
  //    Serial.println(potValue1);
  //
  //  }
  //    if (potValue1 = potValue2)
  //    {
  //
  //      gameMode();
  //      noTone(buzzer);
  //      delay(200);
  //
  //    }
  if (potValue1 < 200)
  {
    if (potValue1 != potValue2)
    {
      gameMode();
      
      tone(buzzer, 1000);
      delay(100);
      potValue2 = analogRead(potPin);
      Serial.println(potValue1);

    }
    if (potValue1 = potValue2)
    {

      gameMode();
      
      noTone(buzzer);
      delay(100);


    }
    potScore = potScore + 2;


    //    gameMode();
    //    noTone(buzzer);
    //    delay(200);

  }
  if (potValue1 > 200 && potValue1 <= 600 )
  {
    if (potValue1 != potValue2)
    {
      gameMode();
      
      tone(buzzer, 1000);
      delay(100);
      potValue2 = analogRead(potPin);
      Serial.println(potValue1);

    }
    if (potValue1 = potValue2)
    {

      gameMode();
      
      noTone(buzzer);
      delay(100);


    }
    potScore = potScore + 5;
  }
  if (potValue1 > 600 && potValue1 <= 800)
  {
    gameMode();
    
    noTone(buzzer);
    delay(100);

  }
  if (potValue1 > 800)
  {
    if (potValue1 != potValue2)
    {
      gameMode();
      
      tone(buzzer, 1000);
      delay(100);
      potValue2 = analogRead(potPin);
      Serial.println(potValue1);


    }
    if (potValue1 = potValue2)
    {

      gameMode();
      noTone(buzzer);
      delay(100);


    }
    potScore = potScore + 10;
  }
  lcdScore();
}
void lcdScore()
{
  lcd.setCursor(0, 0);
  lcd.print("Score:");
  lcd.setCursor(0, 1);
  lcd.print(potScore);
  //delay(10);
}
void servo()
{
  gameMode();
  servoState = digitalRead(servoPin);
  if (servoState == LOW)
  {
    myservo.write(180);
  }
  else
  {
    myservo.write(0);
  }
  delay(100);
}
int song = 0;

void sing(int s) {
  // iterate over the notes of the melody:
  gameMode();
  song = s;
  if (song == 2) {
    Serial.println(" 'Underworld Theme'");
    lcd.print("    PINBALL    ");
    delay(300);
    lcd.clear();
    int size = sizeof(underworld_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      gameMode();
      if (counter != 3)
      {
        break;
      }


      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / underworld_tempo[thisNote];

      buzz(melodyPin, underworld_melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);
    }

  } else if (song == 1) {

    Serial.println(" 'Mario Theme'");

    int size = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
      lcd.print ("PRESS START");
      delay(50);
      lcd.clear();
      gameMode();
      if (counter != 1) {
        break;
      }
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempo[thisNote];

      buzz(melodyPin, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);

    }
  }
}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);

}