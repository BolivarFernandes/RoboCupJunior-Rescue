/*
This is a code for a Rescue Robot.


 This robot can follow a black line over a light white surface,avoid an obstacle,follow green patches and detect and do pick 'n thow applications with aluminium victims.
 
 It is a/an :
 1.Line follower
 2.Obstacle Avoider
 3.Aluminium Victim detector


 It has many applications in real life :
  1.Inductrial Transporter (This can be with the help of a camera in the hardware and image processing with Matlab in software,for precise recognition and differenciation of objects and obstacles.
  2.Autonomous Robot for Rescue Operations
  and many more...
 
It was made through the month of December 2016.
*/


int leftSensor = 13;
int rightSensor = 12;
int leftMotorf = A0;
int leftMotorb = A1;
int rightMotorf = A2;
int rightMotorb = A3;
int leftValue;
int rightValue;
int trigPin = 11;
int echoPin = 10;


void setup() {
 
  // put your setup code here, to run once:


//This part of the loop is for line following.


pinMode(leftMotorf, OUTPUT);
pinMode(leftMotorb, OUTPUT);
pinMode(rightMotorf, OUTPUT);
pinMode(rightMotorb, OUTPUT);
pinMode(leftSensor, INPUT);
pinMode(rightSensor,INPUT);


pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);


}


void loop() {


leftValue = digitalRead(leftSensor);
rightValue = digitalRead(rightSensor);


if
(leftValue == HIGH && rightValue == HIGH)  // Both the sensors are on white        
{
  //Move forward
  analogWrite(leftMotorf, 140);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 140);
  analogWrite(rightMotorb, 0);
}


else if
(leftValue == LOW && rightValue == HIGH)  // leftsensor is on black and rightsensor is on white          
{
  //Turn Left
  analogWrite(leftMotorf, 0);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 140);
  analogWrite(rightMotorb, 0);
}


else if
(leftValue == HIGH && rightValue == LOW)  // leftsensor is on white and rightsensor is on black    
{
  //Turn Right
  analogWrite(leftMotorf, 140);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 0);
  analogWrite(rightMotorb, 0);
}


else if
(leftValue == LOW && rightValue == LOW)  // Both the sensors are on black
{
  //Move Forward
  analogWrite(leftMotorf, 140);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 140);
  analogWrite(rightMotorb, 0);
}
//This part of the code is for the Obstacle Avoidence task.


int duration;
int distance;


digitalWrite(trigPin,HIGH);
delay(1);
digitalWrite(trigPin,LOW);


duration = pulseIn(echoPin,HIGH);
distance = (duration/2) / 29.2;


if (distance = 20) //If an obstacle is detected at a distacle of 20 cm.
{
  //Avoid the obstacle
 
  //Turn right
  analogWrite(leftMotorf, 140);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 0);
  analogWrite(rightMotorb, 0);
  delay(2500);
 
  //Move Foreward
  analogWrite(leftMotorf, 140);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 140);
  analogWrite(rightMotorb, 0);
  delay(2500);
 
  //Turn Left
  analogWrite(leftMotorf, 0);
  analogWrite(leftMotorb, 0);
  analogWrite(rightMotorf, 140);
  analogWrite(rightMotorb, 0);
  delay(2500);
 
}  


}





