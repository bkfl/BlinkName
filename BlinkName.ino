/* Deakin OnTrack Task 2.1P
 * Author:          Brenton Fleming
 * Student ID:      217603898
 * Modified:        17/03/2018
 * 
 * Description:     Simple application to blink my first name in morse code using the onboard LED.
 *
 * Sources:         Forked from Particle Photon Example "Blink an LED"
 *                  Morse code patterns based on https://morsecode.scphillips.com/morse2.html
 */

// Proprocessor directives
#define LED D7

void setup() {
    // Set pin modes
    pinMode(LED, OUTPUT);
}

void loop() {
    // Morse code B (-...)
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(300);
    
    // Morse code R (.-.)
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(300);
    
    // Morse code E (.)
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(300);
    
    // Morse code N (-.)
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(300);
    
    // Morse code T (-)
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(300);
    
    // Morse code O (---)
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(300);
    
    // Morse code N (-.)
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(100);
    
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(700);
}
