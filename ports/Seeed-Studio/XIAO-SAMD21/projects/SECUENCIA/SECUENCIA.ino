// This Arduino code was automatically generated by Aixt Project
// Device = SAMD21
// Board = Seeed Studio XIAO SAMD21
// Backend = arduino

#define time__sleep_ms(TIME)  delay(TIME)
#define pin__output OUTPUT
#define pin__input INPUT
#define pin__high(PIN_NAME)		digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)		digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)		digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)		pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)		digitalWrite(PIN_NAME, VALUE)

void main__init();

void time__init();

void pin__init();

void main__init() {
	time__init();
	pin__init();
	
}

void time__init() {
}

void pin__init() {
}

void setup() {
	main__init();
	pin__setup(3, pin__output);
	pin__setup(4, pin__output);
	pin__setup(5, pin__output);
}

void loop() {
	pin__high(3);
	time__sleep_ms(250);
	pin__high(4);
	time__sleep_ms(250);
	pin__high(5);
	time__sleep_ms(250);
	pin__low(3);
	time__sleep_ms(250);
	pin__low(4);
	time__sleep_ms(250);
	pin__low(5);
	time__sleep_ms(250);
}
