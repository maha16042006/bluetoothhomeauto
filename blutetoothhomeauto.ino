// Bluetooth Home Automation Simulation (Light & Fan)
// Controlled via Serial Monitor

char data = 0;  // Variable to store incoming data

void setup() {
  Serial.begin(9600);      // Start serial communication
  pinMode(8, OUTPUT);      // Light (Green LED)
  pinMode(9, OUTPUT);      // Fan (Red LED)

  Serial.println("System Ready. Enter 1/0 for Light, 3/2 for Fan:");
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();  // Read incoming character

    if (data == '1') {
      digitalWrite(8, HIGH);    // Light ON
      Serial.println("Light turned ON");
    }
    else if (data == '0') {
      digitalWrite(8, LOW);     // Light OFF
      Serial.println("Light turned OFF");
    }
    else if (data == '3') {
      digitalWrite(9, HIGH);    // Fan ON
      Serial.println("Fan turned ON");
    }
    else if (data == '2') {
      digitalWrite(9, LOW);     // Fan OFF
      Serial.println("Fan turned OFF");
    }
    else {
      Serial.println("Invalid input. Use 1/0 for Light, 3/2 for Fan.");
    }
  }
}
