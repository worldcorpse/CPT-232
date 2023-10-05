#include <iostream>

using namespace std;

int main() {
    int quarters;
    int dimes;
    int nickels;

    cout << "Please enter the amount of quarters - ";
    cin >> quarters;

    cout << "Please enter the amount of dimes - ";
    cin >> dimes;

    cout << "Please enter the amount of nickels - ";
    cin >> nickels;

    quarters = quarters * 25;
    dimes = dimes * 10;
    nickels = nickels * 5;

    int total = quarters + dimes + nickels;

    cout << "The total amount of money is " << total << " in pennies";
   
    return 0;
}
