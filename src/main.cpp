/**
 * VÍ DỤ 1-04: ĐỌC TÍN HIỆU TỪ NÚT NHẤN (BUTTON INPUT)
 */
#include <Arduino.h>

const int BUTTON_PIN = 4;
int lastState = HIGH;

void setup() {
    Serial.begin(115200);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
    int currentState = digitalRead(BUTTON_PIN);

    if (currentState != lastState) {
        Serial.println(currentState == LOW ? "[BUTTON] Pressed" : "[BUTTON] Released");
        lastState = currentState;
        delay(50); // Debounce
    }
}
