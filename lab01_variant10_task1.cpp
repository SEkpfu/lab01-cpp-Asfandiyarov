#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double S,V;
    cout << "S = ";
    cin >> S;
    V = sqrt(pow(S,3) / (36 * M_PI));
    cout << "---------RESULT---------\n";
    cout << "V = " << V;
    return 0;
}