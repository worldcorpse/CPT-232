#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double weight;
    double kg = 2.20;

    cout << "Enter your weight(in pounds): ";
    cin >> weight;

    double nweight = weight * kg;
    
    cout << fixed << showpoint << setprecision(2);

    cout <<"Your weight in kilograms is: "<<nweight;
    
    return 0;
}
