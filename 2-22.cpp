#include <iostream>

using namespace std;

int main() {
    double capacity;

    cout << "How many pounds can a rice bag hold - ";
    cin >> capacity;

    double result = 2205/capacity;
    
    cout << "It would take "<<result<<" bags to hold one metric ton of rice";
    return 0;
}
