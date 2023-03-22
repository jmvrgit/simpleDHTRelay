# DHT11 Temperature and Humidity Control System

This code controls a DHT11 sensor and a relay switch. The DHT11 sensor reads the temperature in Celsius and displays it on a 16x2 Liquid Crystal Display (LCD). If the temperature exceeds a certain threshold, the relay switch will turn on or off depending on the current state. The threshold value is set to 30 degrees Celsius in the code.
# Hardware Requirements

    Arduino board
    DHT11 temperature and humidity sensor
    Relay switch
    16x2 Liquid Crystal Display (LCD)

# Libraries Used

    DHT
    Wire
    LiquidCrystal_I2C

# Setup

    Connect the DHT11 sensor to pin 2 on the Arduino board.
    Connect the relay switch to pin 3 on the Arduino board.
    Connect the Liquid Crystal Display (LCD) to the I2C pins on the Arduino board.
    Upload the code to the Arduino board.

# Usage
Once the code is uploaded to the Arduino board, the temperature will be displayed on the LCD. If the temperature exceeds the threshold value, the relay switch will turn on or off depending on the current state.

The threshold value can be adjusted by changing the value of threshold_high in the code. The delay between temperature readings can be adjusted by changing the value in the delay() function in the loop() function.

This was coded initially just to let the air flow on an arcade cabinet, the only fan I had was too loud so I had to just tame it with the stuff I had in hand.