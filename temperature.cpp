#include <iostream>
using namespace std;

void convertFromCelsius(double temp) {
    double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
    double kelvin = temp + 273.15;

    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Kelvin: " << kelvin << "K" << endl;
}

void convertFromFahrenheit(double temp) {
    double celsius = (temp - 32.0) * 5.0 / 9.0;
    double kelvin = celsius + 273.15;

    cout << "Celsius: " << celsius << "°C" << endl;
    cout << "Kelvin: " << kelvin << "K" << endl;
}

void convertFromKelvin(double temp) {
    double celsius = temp - 273.15;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Celsius: " << celsius << "°C" << endl;
    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
}

int main() {
    double temp;
    int choice;

    cout << "Enter temperature value: ";
    cin >> temp;

    cout << "Enter the scale of the temperature:" << endl;
    cout << "1. Celsius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cout << "Choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Converting from Celsius..." << endl;
            convertFromCelsius(temp);
            break;
        case 2:
            cout << "Converting from Fahrenheit..." << endl;
            convertFromFahrenheit(temp);
            break;
        case 3:
            cout << "Converting from Kelvin..." << endl;
            convertFromKelvin(temp);
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
