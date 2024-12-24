/********************************************************************************
 * File: FindPrimes.ino
 * Author: NoFoxTuGiv
 * Created: 12/24/2024
 * 
 * Description:
 *   This Arduino sketch searches for prime numbers within a 30-second duration.
 *   It initializes the serial communication, begins the prime search, and provides
 *   real-time progress updates by printing dots every second. After the duration
 *   elapses, it outputs the total number of prime numbers found.
 * 
 ********************************************************************************/
// Include the Arduino library for VSCode and PlatformIO (optional)
#include <Arduino.h>

bool isPrime(unsigned long num);

const unsigned long duration = 30000;
unsigned long startTime, count = 0, lastDotTime = 0, dotCount = 0;

void setup() {
  Serial.begin(9600);
  startTime = millis();
  unsigned long num = 2;
  Serial.println("Finding primes...");
  while (millis() - startTime < duration) {
    if (millis() - lastDotTime >= 1000) {
      Serial.print(".");
      dotCount++;
      lastDotTime = millis();
      if (dotCount % 15 == 0) {
        Serial.println();
      }
    }
    if (isPrime(num)) {
      count++;
    }
    num++;
  }
  Serial.println("Number of primes found: ");
  Serial.print(count);
}

void loop() {
}

bool isPrime(unsigned long num) {
  if (num <= 1) return false;
  for (unsigned long i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}