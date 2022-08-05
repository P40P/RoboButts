#include<Servo.h> // Include teh servo library
Servo pinza;  //Declaring all the servos 
Servo gomito; 
Servo scapola;
Servo base;
 Servo ruotaad;
Servo ruotadd;
Servo ruotaas;
Servo ruotads;
int abase=0;     // Creating variables for the arm's motion
int ascapola = 0;
int agomito = 0;


int val; 

void setup() {

Serial.begin(9600); //Initialize teh serial monitor
pinza.attach(7); // Attach the servos 
scapola.write(15); // Declaring the initial position
scapola.attach(13);
gomito.write(0);
gomito.attach(6);
base.write(180);
base.attach(12);
ruotadd.attach (8);
ruotaad.attach (9);
ruotads.attach (10);
ruotaas.attach (11);

}

void loop() {
// Checking if the serial comunnication is available 
if (Serial.available()) 

{

val = Serial.read(); // Reading the input
if (val == 'j') 

{ 
pinza.write(90); // close the pliers
}

if (val == 'u') //if value input is equals to a

{
pinza.write(0); // open the pliers

delay(15);
}
if (val == 'y') 

{

agomito+=5;       // Move the robot arm
gomito.write(agomito);

delay(15);

}
if (val == 'h') 

{

agomito-=5;
gomito.write(agomito);

delay(15);

}
if (val == 'g') 

{

ascapola-=5;
scapola.write(ascapola);

delay(15);

}
if (val == 't') 

{

ascapola+=5;
scapola.write(ascapola);

delay(15);

}
if (val == 'r') 

{

abase+=5;
base.write(abase);

delay(15);

}
if (val == 'f') 

{

abase-=5;
base.write(abase);

delay(15);

}
if (val == 'w') 

{
ruotadd.attach (8);
ruotaad.attach (9);
ruotads.attach (10);
ruotaas.attach (11);
for (int i = 90; i < 180; i++) {
    ruotaas.write(i);
    ruotads.write(i);

    
  }
ruotaad.write(10);
ruotadd.write(10);
delay(300);
ruotads.detach ();
ruotaas.detach ();
ruotadd.detach ();
ruotaad.detach ();

}
if (val == 's') 

{
ruotadd.attach (8);
ruotaad.attach (9);
ruotads.attach (10);
ruotaas.attach (11);
for (int i = 90; i < 180; i++) { // This for is to reverse the motion of the 360 servos
    ruotaad.write(i);
    ruotadd.write(i);
    
  }
ruotaas.write(10);
ruotads.write(10);
delay(300);
ruotadd.detach (); //Stopping the 360 servos 
ruotaad.detach ();
ruotads.detach ();
ruotaas.detach ();
}
if (val == 'd') 

{
ruotadd.attach (8);
ruotaad.attach (9);
ruotads.attach (10);
ruotaas.attach (11);
for (int i = 90; i < 180; i++) {
    ruotaad.write(i);
    ruotadd.write(i);
    ruotaas.write(i);
    ruotads.write(i);
    
  }
delay(300);
ruotadd.detach ();
ruotaad.detach ();
ruotads.detach ();
ruotaas.detach ();
}
if (val == 'a') 

{
ruotadd.attach (8);
ruotaad.attach (9);
ruotads.attach (10);
ruotaas.attach (11);
ruotaas.write(10);
ruotads.write(10);
ruotadd.write(100);
ruotadd.write(100);
    
delay(300);
ruotadd.detach ();
ruotaad.detach ();
ruotads.detach ();
ruotaas.detach ();
}
}
}
