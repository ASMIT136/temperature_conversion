#include <iostream>
using namespace std;

void convertFromCelsius() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    double fahrenheit = (celsius * 9 / 5) + 32;
    double kelvin = celsius + 273.15;
    
    cout << celsius << " degree C is " << fahrenheit << " degree F" << endl;
    cout << celsius << " degree C is " << kelvin << " K." << endl;
}

void convertFromFahrenheit() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    double celsius = (fahrenheit - 32) * 5 / 9;
    double kelvin = celsius + 273.15;
    
    cout << fahrenheit << " degree F is " << celsius << " degree C." << endl;
    cout << fahrenheit << " degree F is " << kelvin << " K." << endl;
}

void convertFromKelvin() {
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    
    double celsius = kelvin - 273.15;
    double fahrenheit = (celsius * 9 / 5) + 32;
    
    cout << kelvin << " K is " << celsius << " degree C." << endl;
    cout << kelvin << " K is " << fahrenheit << " degree F." << endl;
}

int main() {
    int choice;

    while (true) {
        cout << "\nTemperature Conversion Menu:\n";
        cout << "1. Convert from Celsius\n";
        cout << "2. Convert from Fahrenheit\n";
        cout << "3. Convert from Kelvin\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            convertFromCelsius();
        } else if (choice == 2) {
            convertFromFahrenheit();
        } else if (choice == 3) {
            convertFromKelvin();
        } else if (choice == 4) {
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}

