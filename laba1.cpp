/********************
* Author:Saibuu V.M *
* Date 25.09.2025   *
* Option 15         *
********************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int mintC = 0;
    int maxtC = 0;
    int step = 0;

    cout << "Enter the minimum temperature in degrees Celsius: ";
    cin >> mintC;
    cout << "Enter the maximum temperature in degrees Celsius: ";
    cin >> maxtC;
    cout << "Enter temperature change step: ";
    cin >> step;

    if (mintC > maxtC || step <= 0) {
        cout << "Incorrect input data." << endl;
        return 1;
    }

    int currentC;

    // Loop with precondition
    currentC = mintC;
    while (currentC <= maxtC) {
        // Declare variables for calculations
        double T, Pco2;

        // Calculations
        T = currentC + 273;
        Pco2 = pow(10, (-8920.0 / T + 7.54));

        cout << "Precondition loop: " << currentC << " °C, Pco₂: "
             << fixed << setprecision(6) << Pco2 << " atm" << endl;

        currentC += step;
    }

    // Loop with postcondition
    currentC = mintC;
    do {
        double T, Pco2;

        T = currentC + 273;
        Pco2 = pow(10, (-8920.0 / T + 7.54));

        cout << "Postcondition loop: " << currentC << " °C, Pco₂: "
             << fixed << setprecision(6) << Pco2 << " atm" << endl;

        currentC += step;
    } while (currentC <= maxtC);

    return 0;
}
