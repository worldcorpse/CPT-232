#include <iostream>

using namespace std;

int main() {
    double rate;
    double w1;
    double w2;
    double w3;
    double w4;
    double w5;
    
    
    cout << "Enter the per hour pay rate: ";
    cin >> rate;

    cout << "Enter the number of hours worked for week 1: ";
    cin >> w1;

    cout << "Enter the number of hours worked for week 2: ";
    cin >> w2;

    cout << "Enter the number of hours worked for week 3: ";
    cin >> w3;

    cout << "Enter the number of hours worked for week 4: ";
    cin >> w4;

    cout << "Enter the number of hours worked for week 5: ";
    cin >> w5;

    double tb = rate * (w1 + w2 + w3 + w4 + w5);
    cout << "Total Income before tax: $ "<<tb<<"\n";

    double rr = ((tb / 100) * 14);
    double ntb = tb - rr;
    cout << "Net Income: $ "<<ntb<<"\n";

    double rr2 = ((ntb / 100) * 10);
    cout << "Money spent on clothes and other accessories: $ "<<rr2<<"\n";

    double rr3 = ((ntb / 100) * 1);
    cout << "Money spent on school supplies: $ "<<rr3<<"\n";

    double remain = (ntb - rr2) - rr3;
    double rr4 = ((remain / 100) * 25);
    cout << "Money spent on saving bonds: $ "<<rr4<<"\n";

    double rr5 = rr4 * .5;
    cout << "Money spent by parents to buy additional saving bonds: $ "<<rr5<<"\n";

    return 0;
}
