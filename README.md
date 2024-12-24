# Prime Number Finder Arduino Sketch

## Description

This Arduino sketch searches for prime numbers within a **30-second** duration. It initializes serial communication, begins the prime search, and provides real-time progress updates by printing dots every second. After the duration elapses, it outputs the total number of prime numbers found.

## Features

- **Real-Time Feedback:** Displays progress by printing a dot every second.
- **Prime Calculation:** Efficiently checks for prime numbers.
- **Configurable Duration:** Easily adjust the search duration as needed.

## Requirements

- **Hardware:**

  - Arduino board or compatible microcontroller (e.g., Uno, Mega, Nano)
  - USB cable for connecting the Arduino to your computer

- **Software:**
  - [Arduino IDE](https://www.arduino.cc/en/software/) installed on your computer

## Installation

1. **Clone or Download the Repository:**

   - Clone the repository using Git:
     ```bash
     git clone https://github.com/nofoxtugiv/PrimeNumberFinder.git
     ```
   - Or download the ZIP file and extract it to your desired location.

2. **Open the Sketch:**

   - Launch the Arduino IDE.
   - Go to `File` > `Open` and navigate to the downloaded folder.
   - Select the `FindPrimes.ino` file to open the sketch.

3. **Connect Your Arduino:**

   - Connect your Arduino board to your computer using the USB cable.

4. **Select the Correct Board and Port:**

   - In the Arduino IDE, go to `Tools` > `Board` and select your Arduino model.
   - Then go to `Tools` > `Port` and select the appropriate COM port.

5. **Upload the Sketch:**
   - Click the **Upload** button (right arrow icon) in the Arduino IDE.
   - Wait for the sketch to compile and upload to your Arduino board.

## Usage

1. **Open Serial Monitor:**

   - After uploading, open the Serial Monitor by clicking on the magnifying glass icon in the top-right corner of the Arduino IDE or by navigating to `Tools` > `Serial Monitor`.

2. **Set the Baud Rate:**

   - Ensure the baud rate is set to **9600** to match the `Serial.begin(9600);` setting in the sketch.

3. **View the Output:**
   - The Serial Monitor will display "Finding primes..." followed by a dot every second to indicate progress.
   - After 30 seconds, it will display the total number of prime numbers found during the duration.

## Customization

- **Adjust Duration:**

  - To change the search duration, modify the `duration` variable in the sketch:
    ```cpp
    const unsigned long duration = 30000; // Duration in milliseconds (e.g., 30000ms = 30 seconds)
    ```

- **Change Baud Rate:**
  - If you prefer a different baud rate, update the `Serial.begin(9600);` line accordingly and ensure the Serial Monitor matches the new rate.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Author

- **NoFoxTuGiv**
- [Your GitHub Profile](https://github.com/nofoxtugiv)
