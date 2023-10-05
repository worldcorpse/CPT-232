#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    string fName1;
    string fName2;
    string fName3;
    string lName1;
    string lName2;
    string lName3;
    string inputedfile;

    double pay1;
    double payinc1;
    double pay2;
    double payinc2;
    double pay3;
    double payinc3;
    
    cout << "Enter the desired file name: ";
    cin >> inputedfile;

    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");

    outFile << fixed << showpoint << setprecision(2);
    inFile >> lName1 >> fName1 >> pay1 >> payinc1;
    inFile >> lName2 >> fName2 >> pay2 >> payinc2;
    inFile >> lName3 >> fName3 >> pay3 >> payinc3;

    double newpay1 = ((pay1 / 100) * payinc1) + pay1;
    double newpay2 = ((pay2 / 100) * payinc2) + pay2;
    double newpay3 = ((pay3 / 100) * payinc3) + pay3;
    
    outFile <<fName1<<" "<<lName1<<" "<<newpay1<<endl;
    outFile <<fName2<<" "<<lName2<<" "<<newpay2<<endl;
    outFile <<fName3<<" "<<lName3<<" "<<newpay3<<endl;

    inFile.close();

    inFile.open(inputedfile);

    string fName4;
    string fName5;
    string fName6;
    string lName4;
    string lName5;
    string lName6;

    double pay4;
    double payinc4;
    double pay5;
    double payinc5;
    double pay6;
    double payinc6;
    
    outFile << fixed << showpoint << setprecision(2);
    inFile >> lName4 >> fName4 >> pay4 >> payinc4;
    inFile >> lName5 >> fName5 >> pay5 >> payinc5;
    inFile >> lName6 >> fName6 >> pay6 >> payinc6;

    double newpay4 = ((pay4 / 100) * payinc4) + pay4;
    double newpay5 = ((pay5 / 100) * payinc5) + pay5;
    double newpay6 = ((pay6 / 100) * payinc6) + pay6;
    
    outFile <<fName4<<" "<<lName4<<" "<<newpay4<<endl;
    outFile <<fName5<<" "<<lName5<<" "<<newpay5<<endl;
    outFile <<fName6<<" "<<lName6<<" "<<newpay6<<endl;

    outFile.close();

    return 0;
}
