

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int waterval =0;
  int humval =0;
  for (int i=0;i<10;i++){
    waterval += analogRead(A0);
    humval += analogRead(A1);
    waterval = waterval/10;
    humval = humval/10;
    delay(100);    
  }
  Serial.print("The water level reading is:");
  Serial.println(waterval);
  Serial.print("The humidity level reading is:");
  Serial.println(humval);
  return waterval;
  return humval;
  delay(3000);
  
}
