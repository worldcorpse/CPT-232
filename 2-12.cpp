#include <iostream>

using namespace std;

int main() {
    int seconds;

    cout << "Please enter the amount of seconds - ";
    cin >> seconds;

    int s1 = seconds % 60;
    //seconds

    int s2 = seconds / 60;
    //minutes

    int s3 = s2 % 60;
    //extra minutes

    int s4 = s2 / 60;
    //hours

    cout << "The elapsed time of "<< seconds <<" seconds, which comes out to "<<s4<<":"<<s3<<":"<<s1;
    return 0;
}
