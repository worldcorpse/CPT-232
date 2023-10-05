#include <iostream>
#include <string>

using namespace std;


int main()
{
//variable declaration
  string name;
  double studyHours;

//executable statements
  cout << "Please enter your name - ";
  cin >> name;

  cout << "Please enter the number of study hours - ";
  cin >> studyHours;

  cout << "Hello, " << name << "! On Saturday, you need to study " << studyHours;
  cout << " hours for the exam. ";

  return 0;

//return statement
}
