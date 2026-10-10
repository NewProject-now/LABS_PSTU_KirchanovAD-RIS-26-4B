#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // float and double
    float a = 100, b = 0.0001;
    // pow(x, y) - число x в степень y;
    cout << ( pow((a + b), 4) - ( pow(a, 2) * ( pow((a + 2 * b), 2 ) + 2 * b * b) ) ) / ( pow(b, 3) * ( 4 * a + b ) ) << endl; // вычисление числителя с формулой (a + b) ^ 2 / вычисление знаменятеля;
    // Можно сократить 1 и ответ математический не равен машинному
    return 0;
}