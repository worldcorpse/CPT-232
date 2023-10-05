#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    string fName;
    string lName;
    string dpt;

    double gross;
    double bonus;
    double tax;
    
    double dist;
    double tim;
       
    int sold;
    double cost;

    inFile.open("inData.txt");
    outFile.open("outData.txt");
       
    outFile << fixed << showpoint << setprecision(2);

    inFile >> fName >> lName >> dpt;
    inFile >> gross >> bonus >> tax;

    outFile << "Name: " << fName << " " << lName << ", " << "Department: " <<
 dpt << endl;
    outFile << "Monthly Gross Salary: $" << gross << ", " << "Monthly Bonus: "<<
 bonus << "%, " << "Taxes: " << tax << "%" << endl;
    outFile << "Paycheck: $" << gross * (1 + bonus / 100) * (1 - tax / 100) << endl;
    outFile << endl;

    inFile >> dist >> tim;
    outFile << "Distance Traveled: " << dist << " miles, " << "Traveling Time: " <<
 tim << " hours" << endl;
    outFile << "Average Speed: " << dist / tim << " miles per hour" << endl;
    outFile << endl;

    inFile >> sold >> cost;
    outFile << "Number of Coffee Cups Sold: " << sold << ", " << "Cost: $" <<
 cost << " per cup" << endl;
    outFile << "Sales Amount = $" << sold * cost;



    inFile.close();
    outFile.close();

    return 0;
}
