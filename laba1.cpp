/********************
* Author:Saibuu V.M *
* Date 25.09.2025   *
* Option 15         *
********************/

#include <iostream>
#include <cmath>

int main() {
    // Объявление переменных
    int mintC = 600;
    int maxtC = 1100;

    double T, P; // объявление переменных

    // Цикл с предусловием 
    int tempC = mintC;
    while (tempC <= maxtC) {
        T = tempC + 273; // только расчет
        P = pow(10, (-8920.0 / T + 7.54)); // расчёт
        std::cout << "Temperature: " << tempC << " °C, Pco₂: " << P  << std::endl;
        tempC += 100; 
    }

    // Цикл с постусловием 
    int tempC2 = mintC;
    do {
        T = tempC2 + 273; 
        P = pow(10, (-8920.0 / T + 7.54)); 
        std::cout << "[do-while] Temperature: " << tempC2 << " °C, Pco₂: " << P << " atm" << std::endl;
        tempC2 += 100; 
    } while (tempC2 <= maxtC);

    return 0;
}
