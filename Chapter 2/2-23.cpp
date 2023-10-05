#include <iostream>

using namespace std;

int main() {
    double es;
    double pes;
    double ss;

    cout << "Enter the buying price of each share: ";
    cin >> es;

    cout << "Enter the selling price of each share: ";
    cin >> pes;

    cout << "Enter the number of shares sold: ";
    cin >> ss;
    
    double char1 = (1.5 *(es/100));
    double char12 = char1 + es;
    double inv = char12 * ss;
    
    cout << "Total amount invested: $"<<inv<<"\n"; 

    double char2 = (1.5 *(pes/100));
    double char22 = pes - char2;
    double rece = char22 * ss;

    cout << "Total amount received: $"<<rece<<"\n"; 

    double char3 = char1 + char2;
    double char31 = char3 * ss;

    cout << "Total service charges: $"<<char31<<"\n";

    double char4 = char12 - char22;
    double char41 = (char4 * ss)*-1;

    cout << "Amount gained or lost: $"<<char41<<"\n";

    return 0;
}
