int setpin=LOW, ledpin=13
void setup() {
 pinMode(ledpin,INPUT);
}

void loop() {
  setpin=HIGH;
 digitalWrite(ledpin,setpin);
delay(1000);
setpin=LOW;
digitalWrite(ledpin,setpin);
delay(1000);
}
