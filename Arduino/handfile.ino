const int finger1;
const int finger2;
const int finger3;
const int finger4;
const int finger5;

float fingerVal1 = 0;
float fingerVal2 = 0;
float fingerVal3 = 0;
float fingerVal4 = 0;
float fingerVal5 = 0;
int val = 0;

void setup(){
  pinMode(finger1,INPUT);
  pinMode(finger2,INPUT);
  pinMode(finger3,INPUT);
  pinMode(finger4,INPUT);
  pinMode(finger5,INPUT);
  Serial.begin(9600);
}

void loop(){
  fingerVal1 = analogRead(finger1);
  fingerVal2 = analogRead(finger2);
  fingerVal3 = analogRead(finger3);
  fingerVal4 = analogRead(finger4);
  fingerVal5 = analogRead(finger5);

  
}

void analogToDigital(float analog){
  if(analog > 5/600 && analog < 5/500){
    
  }else if(analog < 5/400 && analog > 5/500){
  
  }else if(analog < 5/300 && analog > 5/400){
  }else if(analog < 5/200 && analog > 5/300){
  }else if(analog < 5/100 && analog > 5/200){
  }
  
}

