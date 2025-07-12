const int flexSensor1 = A0;
const int flexSensor2 = A1;
const int flexSensor3 = A2;
const int flexSensor4 = A3;
const int flexSensor5 = A4;

int closedFistThresholds[5] = {700, 700, 700, 700, 700};
int openHandThresholds[5] = {500, 500, 500, 500, 500};

void setup() {
  Serial.begin(9600);
  Serial.println("Interactive Glove Initialized...");
}

void readFlexSensors(int *readings) {
  readings[0] = analogRead(flexSensor1);
  readings[1] = analogRead(flexSensor2);
  readings[2] = analogRead(flexSensor3);
  readings[3] = analogRead(flexSensor4);
  readings[4] = analogRead(flexSensor5);
}

String classifyGesture(int *sensorVals) {
    int bentCount = 0;
    for (int i = 0; i < 5; i++) {
      if (sensorVals[i] > closedFistThresholds[i]) {
        bentCount++;
      }
    }
  
    if (bentCount >= 4) return "Closed Fist";
    if (bentCount <= 1) return "Open Hand";
    if (sensorVals[0] > closedFistThresholds[0] && sensorVals[4] < openHandThresholds[4])
      return "Thumbs Up";
    if (bentCount == 2 || bentCount == 3) return "Partial Bend / Neutral";
  
    return "Unrecognized Gesture";
  }
  

void loop() {
  int sensorReadings[5];
  readFlexSensors(sensorReadings);

  Serial.print("Flex Values: ");
  for (int i = 0; i < 5; i++) {
    Serial.print(sensorReadings[i]);
    Serial.print(" ");
  }

  String gesture = classifyGesture(sensorReadings);
  Serial.print(" -> Gesture: ");
  Serial.println(gesture);

  delay(500);
}
