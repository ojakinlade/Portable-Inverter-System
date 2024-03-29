#include <PZEM004Tv30.h>

const int pzem004tTxPin = 2;
const int pzem004tRxPin = 3;
PZEM004Tv30 pzem(pzem004tTxPin,pzem004tRxPin);

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
   float voltage = pzem.voltage();
   if(voltage != NAN)
   {
     Serial.print("Voltage: ");
     Serial.print(voltage);
     Serial.println("V");
   } 
   else 
   {
     Serial.println("Error reading voltage");
   }

   float current = pzem.current();
   if(current != NAN)
   {
     Serial.print("Current: ");
     Serial.print(current);
     Serial.println("A");
   } 
   else 
   {
     Serial.println("Error reading current");
   }

   float power = pzem.power();
   if(power != NAN)
   {
     Serial.print("Power: ");
     Serial.print(power);
     Serial.println("W");
   } 
   else 
   {
     Serial.println("Error reading power");
   }

   float energy = pzem.energy();
   if(energy != NAN)
   {
     Serial.print("Energy: ");
     Serial.print(energy,3);
     Serial.println("kWh");
   } 
   else 
   {
     Serial.println("Error reading energy");
   }

   float frequency = pzem.frequency();
   if(frequency != NAN)
   {
     Serial.print("Frequency: ");
     Serial.print(frequency, 1);
     Serial.println("Hz");
   } 
   else 
   {
     Serial.println("Error reading frequency");
   }

   float pf = pzem.pf();
   if(pf != NAN)
   {
     Serial.print("PF: ");
     Serial.println(pf);
   } 
   else 
   {
     Serial.println("Error reading power factor");
   }

   Serial.println();
   delay(2000);
}
