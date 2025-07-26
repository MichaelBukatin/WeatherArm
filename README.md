# WeatherArm

[Watch the demo video](https://drive.google.com/file/d/1zs9C_S0b5g_-WS9UpzbC0L-Om8n-tyCt/view?usp=sharing)

This is a personal **Arduino UNO** learning project that uses a **joystick module**, **DHT11 sensor**, and a **servo motor**.

The project was created to explore analog and digital inputs, serial communication, and sensor integration. It is not meant to solve a real-world problem, but rather to **practice and improve Arduino skills**.

## 🔧 Components Used

- Arduino UNO
- Joystick module
- DHT11 temperature & humidity sensor
- Servo motor (SG90)
- 220Ω resistors (for LEDs)
- 3 LEDs (Red, Green, Blue)
- Breadboard + jumper wires
- USB cable

## 📚 Features

- X-axis of the joystick rotates the servo in one direction  
- Y-axis rotates the servo in the opposite direction  
- Pressing the joystick button:
  - Turns on a blue LED  
  - Displays temperature and humidity in the Serial Monitor from the DHT11 sensor
- LEDs indicate joystick movement:
  - Red = X-axis movement
  - Green = Y-axis movement
  - Blue = button press

## 🧠 What I Learned

- Reading analog values from joystick
- Using push-buttons (SW pin)
- Controlling a servo with `Servo.h`
- Reading data from DHT11 sensor
- Displaying data on Serial Monitor
- Using `if` statements for interaction logic
- Working with breadboard connections and debugging

## 💡 Future Ideas

- Display values on an OLED screen  
- Add buzzer or sound feedback  
- Expand project with LCD and menu navigation using the joystick  
- Move to ESP32 and use Wi-Fi for remote monitoring

---

✅ *This project was created for educational purposes and helped me gain hands-on experience with Arduino.*


