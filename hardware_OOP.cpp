#include <iostream>
#include <string>

using std::string;

class Device {
    // pure virtual functions defined here
};

class GPIO_pin : Device  {
private:
    int Pin_number;
    float Voltage_level;
    string Input;
    string Output;
public:
    // define getter and setter methods

    // getter and setter for pin number
    int get_pin_number() {
        return Pin_number;
    }
    void set_pin_number(int i) {
        Pin_number = i;
    }

    // getter and setter for voltage level
    float get_voltage_level() {
        return Voltage_level;
    }
    void set_voltage_level(float f) {
        Voltage_level = f;
    }

    // getter and setter for input
    string get_input() {
        return Input;
    }
    void set_input(string s) {
        Input = s;
    }

    // getter and setter for output
    string get_output() {
        return Output;
    }
    void set_output(string s) {
        Output = s;
    }

    // override the default constructor
    GPIO_pin (int pin_number, float voltage_level, string input, string output) {
        Pin_number = pin_number;
        Voltage_level = voltage_level;
        Input = input;
        Output = output;
    }

};


int main() {
    GPIO_pin I2C = GPIO_pin(5, 3.3, "Master", "Slave");
    
}