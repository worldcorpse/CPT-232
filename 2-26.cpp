#include <iostream>

using namespace std;

int main() {
    double wD;
    double lD;
    //Door width and length respectively
    
    double wW1;
    double lW1;
    //Window 1 width and length respectively
    
    double wW2;
    double lW2;
    //Window 2 width and length respectively

    double wB;
    double lB;
    //Bookshelf width and length respectively
    
    double wR;
    double lR;
    double hR;
    //Room dimensions, width, length, and height respectively

    cout << "What is the width of the door: ";
    cin >> wD;

    cout << "What is the length of the door: ";
    cin >> lD;

    cout << "What is the width of the Window 1: ";
    cin >> wW1;

    cout << "What is the length of the Window 1: ";
    cin >> lW1;

    cout << "What is the width of the Window 2: ";
    cin >> wW2;

    cout << "What is the length of the Window 2: ";
    cin >> lW2;

    cout << "What is the width of the Bookshelf: ";
    cin >> wB;

    cout << "What is the length of the Bookshelf: ";
    cin >> lB;

    cout << "What is the width of the Room: ";
    cin >> wR;

    cout << "What is the length of the Room: ";
    cin >> lR;

    cout << "What is the height of the Room: ";
    cin >> hR;

    double Dd = wD * lD;
    //door calc
    
    double W1 = lW1 * wW1;
    double W2 = lW2 * wW2;
    //both windows calc

    double Bb = lB * wB;
    //bookshelf calc

    double RW1 = (lR * hR) * 2;
    //wall 1 calc
    double RW2 = (wR * hR) * 2;
    //wall 2 calc
    double RR = (RW1 + RW2) - (Dd + W1 + W2 + Bb);
    //entire wall space without windows etc calc
    double RR2 = RR / 120;
    //amt of paint for wallspace aft calc
    
    cout << RR2;





    return 0;
}
