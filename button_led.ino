int bPin=4;
int button=12;
int buttonRead;
int dt =200;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(bPin,OUTPUT);
pinMode(button,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(button);
Serial.println(buttonRead);
delay(dt);


if(buttonRead==0){
  digitalWrite(bPin,HIGH);
}

if(buttonRead==1){
  digitalWrite(bPin,LOW);
}
}
