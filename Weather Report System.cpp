#include <iostream>
using namespace std;

int main() {
    int choice;
    float temperature, humidity, rainfall;

    cout << "===== Weather Report System =====" << endl;
    cout << "1. Enter Weather Data" << endl;
    cout << "2. Display Weather Report" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nEnter Temperature (°C): ";
            cin >> temperature;

            cout << "Enter Humidity (%): ";
            cin >> humidity;

            cout << "Enter Rainfall (mm): ";
            cin >> rainfall;

            cout << "\nWeather data saved successfully!" << endl;
            break;

        case 2:
            cout << "\n----- Weather Report -----" << endl;
            cout << "Temperature: " << temperature << " °C" << endl;
            cout << "Humidity: " << humidity << " %" << endl;
            cout << "Rainfall: " << rainfall << " mm" << endl;
            break;

        case 3:
            cout << "\nExiting Weather Report System..." << endl;
            break;

        default:
            cout << "\nInvalid choice! Please try again." << endl;
    }

    return 0;
}
