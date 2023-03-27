#include <Servo.h> // Librería para controlar el servomotor
Servo servo; // variable que tomará el valor de la posición del servomotor
void setup() {
servo.attach(4); // Se coloca el servo en el pin 2
Serial.begin(9600);
}
void loop() {
int val= analogRead(A0); // se agrega variable que tomará el valor que le mandara el joystick a través de la entrada analógica A0
//Serial.println(val);
val=map(val,0,1023,0,180); // Conversión de valores
servo.write(val); // se manda la señal al servo
Serial.println(val);
delay(15); // espera en milisegundos para que detecte la señal

}