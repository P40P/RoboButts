//  The first part is the same of the keyboard control 
#include <Servo.h> 
 Servo ruotaad; 
Servo ruotadd;
Servo ruotaas;
Servo ruotads;
// Braccio
Servo base;
Servo pinza;
Servo gomito;
Servo scapola;


void setup() {
  pinMode(14, OUTPUT); 
  digitalWrite(14, HIGH);
  // put your setup code here, to run once:
ruotaad.attach (8);
ruotadd.attach (9);
ruotaas.attach (10);
ruotads.attach (11);

// Posizione base
base.write(180);
scapola.write(15);
gomito.write(0);
pinza.write(0);
base.attach(12);
pinza.attach(7);
gomito.attach(6);
scapola.attach(13);
}

void loop() {

delay(3000);
gomito.write(60); // Move the servo manually
delay(1000);
pos_scapola();
delay(1000);
pinza.write(110);
delay(1000);
scapola.write(0);
delay(1000);
base.write(0);
delay(1000);
gomito.write(0);
delay(1000);
pinza.write(0);
delay(1000);
pos_setup();
/* Sigaretta per terra 
delay(1000);
gomito.write(40);
delay(3000);
scapola.write(60);
delay(1000);*/


Braccio
 delay(1000);
gomito.write(40);
delay(3000);
scapola.write(60);
delay(1000);

 for (int i = 90; i < 180; i++) {
    ruotaad.write(i);
    ruotadd.write(i);
    
  }
ruotaas.write(10);
ruotads.write(10);



}
void pos_setup(){
  
 base.write(180);
scapola.write(15);
gomito.write(0);
pinza.write(0);
}
void pos_scapola(){
  scapola.write(20);
  delay(100);
  scapola.write(25);
  delay(100);
  scapola.write(30);
  delay(100);
  scapola.write(35);
  delay(100);
  scapola.write(40);
  delay(100);
  scapola.write(45);
  delay(100);
  scapola.write(50);
  delay(100);
  scapola.write(55);
  delay(100);
  scapola.write(60);
  delay(100);
  scapola.write(65);
  delay(100);
    scapola.write(70);
  delay(100);
  scapola.write(75);
  delay(100);
  scapola.write(80);
  delay(100);
  scapola.write(85);
  delay(100);
  scapola.write(90);
  delay(100);
  scapola.write(95);
  delay(100);
}
