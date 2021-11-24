int hb0 =A0;
int hb1 =A1;
int hb2 =A2;

void setup() {
  Serial.begin(115200);

}

void loop() {
  
 unsigned char hbvalue[32];

  for(int i=0;i<11;i++){
   hbvalue[3*i] = analogRead(hb0);
   hbvalue[3*i+1] = analogRead(hb1);
   hbvalue[3*i+2] = analogRead(hb2);
  }

 

  for (int i=0; i<32; i++)
{
  Serial.print(hbvalue[i],DEC);
  Serial.print(",");
 
}
 
  Serial.print("\n");
  delay(1000);
}