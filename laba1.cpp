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

  double T, Pco2;  // Declaration of variables outside the loop

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

  currentC = mintC;
  while (currentC <= maxtC) {
    
    T = currentC + 273;
    Pco2 = pow(10.0, (-8920.0 / T + 7.54));

    cout << "T: " << currentC << " °C, Pco₂: "
         << fixed << setprecision(6) << Pco2 <<  endl;

    currentC += step;
  }

  currentC = mintC;
  do {
    T = currentC + 273;
    Pco2 = pow(10.0, (-8920.0 / T + 7.54));  // 10, -> 10.0

    cout << "T: " << currentC << " °C, Pco₂: "
         << fixed << setprecision(6) << Pco2 <<  endl;

    currentC += step;
  } while (currentC <= maxtC);

  return 0;
}
