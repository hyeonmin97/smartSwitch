#include <Servo.h>

#define UP 5
#define DOWN 4

//UP(gpio5) - D1
//DOWN(gpio4) - D2
Servo up;
Servo down;

void setup() {
  Serial.begin(9600);
 up.attach(UP);
 down.attach(DOWN);
 up.write(50);
 down.write(180);
 delay(2000);

  
}

void loop() {
  while(Serial.available()>0){
    char a = Serial.read();

    if(a == 'a')
    {
      Serial.println('a');
      down.write(50);
      delay(50);
      up.write(180);
      delay(500);
      
    }
    else if(a=='b'){
      up.write(50);
      delay(50);
      down.write(180);
      delay(500);
    }



    
  }
}
