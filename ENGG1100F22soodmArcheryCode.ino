// initializing pins

#define enA 8
#define in1A 9
#define in2A 10


void setup() {

  Serial.begin(9600);

  // setting pin modes

  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);

  // turning motor on

  digitalWrite(enA, HIGH);

}

  // code which will loop

void loop() {

  // delay to ensure the starter has enough time to put the wheelchair in position

  delay(5000);

  // motor spins forward for 2.5s

  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);

  delay(2500);

  // motor stops for 100s to ensure it does not start again before the power is cut

  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);

  delay(100000);

}
