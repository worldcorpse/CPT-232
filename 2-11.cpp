#include <iostream>

using namespace std;                                   
 
int main()
{
    double gal;
    double mpg;

    cout << "Please enter the amount of gallons your tank holds - ";
    cin >> gal;

    cout << "Please enter miles per gallon - ";
    cin >> mpg;

    double result = gal * mpg;

    cout << "Your automobile can go " << result << " miles until your tank is empty";


    return 0;
}
