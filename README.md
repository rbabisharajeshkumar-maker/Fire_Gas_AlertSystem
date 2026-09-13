# Fire & Gas Alert System

An Arduino-based safety system that monitors for gas leaks and fire, giving real-time alerts via an LCD display, buzzer, and LED.

## Components Used
- Arduino (Uno/Nano)
- MQ Gas Sensor (analog)
- Flame Sensor (digital)
- 16x2 LCD with I2C module
- Buzzer
- LED

## How It Works
- The gas sensor continuously reads air quality on an analog pin; if the value crosses a threshold (400), a gas leak alert is triggered.
- A flame sensor checks for fire on a digital pin; if flame is detected, a fire alert is triggered.
- Alerts activate a buzzer and LED, and the status ("Gas Leak Alert", "FIRE DETECTED!!!", or "STATUS: SAFE") is shown live on a 16x2 I2C LCD.
- Status is also logged to Serial for debugging.

## Protocols/Concepts Used
- I2C communication (LCD via LiquidCrystal_I2C library)
- Analog sensor reading (gas sensor)
- Digital sensor reading (flame sensor)
- Digital output control (buzzer, LED)

## Code
See `fire_gas_alert.ino` for the full sketch.

# Fire & Gas Alert System

An Arduino-based safety system that monitors for gas leaks and fire, giving real-time alerts via an LCD display, buzzer, and LED.

## Components Used
- Arduino (Uno/Nano)
- MQ Gas Sensor (analog)
- Flame Sensor (digital)
- 16x2 LCD with I2C module
- Buzzer
- LED

## How It Works
- The gas sensor continuously reads air quality on an analog pin; if the value crosses a threshold (400), a gas leak alert is triggered.
- A flame sensor checks for fire on a digital pin; if flame is detected, a fire alert is triggered.
- Alerts activate a buzzer and LED, and the status ("Gas Leak Alert", "FIRE DETECTED!!!", or "STATUS: SAFE") is shown live on a 16x2 I2C LCD.
- Status is also logged to Serial for debugging.

## Protocols/Concepts Used
- I2C communication (LCD via LiquidCrystal_I2C library)
- Analog sensor reading (gas sensor)
- Digital sensor reading (flame sensor)
- Digital output control (buzzer, LED)

## Code
See `fire_gas_alert.ino` for the full sketch.
