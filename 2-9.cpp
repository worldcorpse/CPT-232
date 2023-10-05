#include <iostream>

using namespace std;

int main() {
    double test1;
    double test2;
    double test3;
    double test4;
    double test5;

    cout << "Please enter test score 1 - "; 
    cin >> test1;

    cout << "Please enter test score 2 - "; 
    cin >> test2;
    
    cout << "Please enter test score 3 - ";
    cin >> test3;
    
    cout << "Please enter test score 4 - "; 
    cin >> test4;
    
    cout << "Please enter test score 5 - "; 
    cin >> test5;

    double result = test1 + test2 + test3 + test4 + test5;
    double avg = result/5;

    cout << "Your average test score is: " << avg;
    
    return 0;
}
