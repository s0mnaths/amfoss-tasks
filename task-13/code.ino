int const trigPin = 10;
int const echoPin = 9;
int const LedPin = 2;
int const motorPin = 3;

void setup()
{
	pinMode(trigPin, OUTPUT); 
	pinMode(echoPin, INPUT);
	pinMode(LedPin, OUTPUT);
	pinMode(motorPin, OUTPUT);
}

void loop()
{
  	digitalWrite(motorPin, HIGH);
	int duration, distance;
	digitalWrite(trigPin, HIGH);
	delay(1);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = (duration/2) / 29.1;
	
	
  	if (distance <= 100 && distance > 0) {
		digitalWrite(LedPin, HIGH);
		digitalWrite(motorPin, LOW);
	} 
    else if( distance > 100) {
		digitalWrite(LedPin, LOW);
		digitalWrite(motorPin, HIGH);
	}
	
  	delay(1000);
}
