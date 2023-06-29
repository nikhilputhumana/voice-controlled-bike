# VOICE CONTROLLED BIKE

This aim of this project is to make the working of a bike or scooter keyless and control the bike/ scooter using voice commands through your phone. The bike is connected to the mobile phone with the help of bluetooth and it can perform the functions like:
* Starting the bike
* Sounding the horn when we need to locate the bike from a crowded parking area
* Turning on ignition
* Turning off the bike

## Components Used

The hardware components used are:
* Arduino UNO
* HC05 Bluetooth Module
* LM2596 DC to DC Buck Converter
* Relays
* Power Supply (in this case the battery of the vehicle)


## How to install?

Program the arduino with the [arduino code](./arduino%20code/main.ino) that is provided here and connect the hardware according to the [circuit diagram](./circuit_diagram/Circuit-diagram.png) given.

Install the app in your android phone using the apk provided 📱


## Usage of App

Follow the below steps to control the vehicle using the app.

1. Install the app and allow permissions for Audio🎙️ and nearby devices🗺️
2. Pair the module with the android device using the password assigned to the module.
3. Click on connect button and select the bluetooth device🛵
4. Control the vehicle using voice commands or buttons that appear and voila 🚀


## License

[MIT](https://choosealicense.com/licenses/mit/)