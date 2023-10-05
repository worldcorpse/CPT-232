#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double mass;
    double density;
    double fvol;

    cout << "Enter the mass in grams: ";
    cin >> mass;

    cout << "Enter the density in grams per cm3: ";
    cin >> density;
    
    cout << fixed << showpoint << setprecision(2);
    
    fvol = mass / density;

    cout << "Final volume: "<<fvol;


    return 0;
}
