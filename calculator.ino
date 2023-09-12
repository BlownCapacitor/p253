#include <ezButton.h>
#define switch 23 // toggle between multplication tables and prime factorization

const int tens = 12; // select tens place number (0-9)
const int units = 27; // select units place number (0-9)
const int enter = 14; // calculate

int countTens = 0;
int countUnits = 0;
int count = 0;
ezButton tensbutton(tens);
ezButton unitsbutton(units);
ezButton enterbutton(enter);


void setup()
{
  Serial.begin(115200);
  tensbutton.setDebounceTime(50);
  unitsbutton.setDebounceTime(50);
  enterbutton.setDebounceTime(50);
  pinMode(switch, INPUT_PULLUP);
}

void loop()
{
  tensbutton.loop();
  unitsbutton.loop();
  enterbutton.loop();
  
  if (tensbutton.isPressed())
  {
    countTens++;
    if(countTens > 9){
      countTens = 0;
    }
    Serial.print("Number : ");
    Serial.print(countTens);
    Serial.println(countUnits);
    
  }

  else if (unitsbutton.isPressed())
  {
    countUnits++;
     if(countUnits > 9){
      countUnits = 0;
    }
    Serial.print("Number : ");
    Serial.print(countTens);
    Serial.println(countUnits);
 
  }
  else if(enterbutton.isPressed()){
        count = (countTens*10)+countUnits;

    if(digitalRead(switch) == HIGH){
    for (int i = 1; i <= 20; i++)
    {
      Serial.print(count);
      Serial.print('*');
      Serial.print(i);
      Serial.print('\t');
      Serial.print('=');
      Serial.print('\t');
      Serial.println(count*i);
    }
    }
    else{
      int factor = count;
      Serial.print("Prime factors of ");
      Serial.println(count);
      while(factor > 2){
      while(factor % 2 == 0){
          factor = factor/2;
           Serial.println("2");
        }
      while(factor % 3 == 0){
          factor = factor/3;
           Serial.println("3");
      }
       while(factor % 5 == 0){
          factor = factor/5;
           Serial.println("5");
      }
       while(factor % 7 == 0){
          factor = factor/7;
           Serial.println("7");
      }
       while(factor % 11 == 0){
          factor = factor/11;
           Serial.println("11");
      }
       while(factor % 13 == 0){
          factor = factor/13;
           Serial.println("13");
      }
        while(factor % 17 == 0){
          factor = factor/17;
           Serial.println("17");
      }
        while(factor % 19 == 0){
          factor = factor/19;
           Serial.println("19");
      }
        while(factor % 23 == 0){
          factor = factor/23;
           Serial.println("23");
      }
    
      
              while(factor % 29 == 0){
          factor = factor/29;
           Serial.println("29");
      }
    
            while(factor % 31 == 0){
          factor = factor/31;
           Serial.println("31");
      }
    
            while(factor % 37 == 0){
          factor = factor/37;
           Serial.println("37");
      }

              while(factor % 41 == 0){
          factor = factor/41;
           Serial.println("41");
      }
    
              while(factor % 43 == 0){
          factor = factor/43;
           Serial.println("43");
      }
            while(factor % 47 == 0){
          factor = factor/47;
           Serial.println("47");
      }
    
              while(factor % 53 == 0){
          factor = factor/53;
           Serial.println("53");
      }
    
              while(factor % 59 == 0){
          factor = factor/59;
           Serial.println("59");
      }
      
              while(factor % 61 == 0){
          factor = factor/61;
           Serial.println("61");
      }
    
      
              while(factor % 67 == 0){
          factor = factor/67;
           Serial.println("67");
      }

              while(factor % 71 == 0){
          factor = factor/71;
           Serial.println("71");
      }

              while(factor % 73 == 0){
          factor = factor/73;
           Serial.println("73");
      }
    
            while(factor % 79 == 0){
          factor = factor/79;
           Serial.println("79");
      }
    
            while(factor % 83 == 0){
          factor = factor/83;
           Serial.println("83");
      }
    
            while(factor % 89 == 0){
          factor = factor/89;;
           Serial.println("89");
      }
    
              while(factor % 97 == 0){
          factor = factor/97;
           Serial.println("97");
      }
    
      }
      Serial.println("Done.");
    }
  }
 
}
