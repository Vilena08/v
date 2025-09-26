/********************
* Author:Saibuu V.M *
* Date 25.09.2025   *
* Option 15         *
********************/

#include <iostream>
#include <cmath> 

double calculate_Pco2(double T) {
    return pow(10, (-8920.0 / T + 7.54));
}

int main() {
    int mintC = 600;
    int maxtC = 1100;  

    while (mintC <= maxtC) {
        double T = mintC + 273; 
        double P = calculate_Pco2(T);
        std::cout << "T: " << mintC << " °C, C: " << P << std::endl;
        mintC += 100; 
    }

    return 0;
}