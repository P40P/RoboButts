#include <Servo.h>
Servo ruotaad;
Servo ruotadd;
Servo ruotaas;
Servo ruotads;


void setup() {
  // put your setup code here, to run once:
ruotaad.attach (8);
ruotadd.attach (9);
ruotaas.attach (10);
ruotads.attach (11);
}

void loop() {
 
  for (int i = 90; i < 180; i++) {
    ruotaad.write(i);
    ruotadd.write(i);
    
  }
ruotaas.write(10);
ruotads.write(10);
}
