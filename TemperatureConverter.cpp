#include <iostream>
using namespace std;

// Function prototypes
double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);
void convertTemperature();

int main() {
    char choice;
    do {
        convertTemperature();
        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

void convertTemperature() {
    char conversionChoice;
    double temperature, convertedTemperature;

    cout << "Temperature Conversion Menu:" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> conversionChoice;

    if (conversionChoice == '1') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << convertedTemperature << "°C" << endl;
    } else if (conversionChoice == '2') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << convertedTemperature << "°F" << endl;
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }
}
