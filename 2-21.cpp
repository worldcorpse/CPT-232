#include <iostream>

using namespace std;

const double K = 6.67E-8;

int main() {
    double m1 = 0;
    double m2 = 0;
    
    double dist = 0;
    double force = 0;

    cout << "Please Enter Mass 1's Weight In Grams ";
    cin >> m1;
    cout << endl;

    cout << "Please Enter Mass 2's Weight In Grams ";
    cin >> m2;
    cout << endl;

    cout << "Please Enter The Distance In Centimeters ";
    cin >> dist;
    cout << endl;

    force = K * ((m1 * m2) / (dist * dist) );
    
   
    cout << "The final force comes back as "<<force;

    return 0;
}
