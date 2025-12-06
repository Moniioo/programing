using namespace std;
#include <iostream>

int main()
{
    //Control structures
    // equality ==
    // = assignment

    //LOGICAL OPERAITORS
    // && AND
    // || OR
    // ! NOT
    // if else
    // switch case
    // for loop
    // while loop
    // do while loop
    // break
    // % continue

    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (cin.fail()) {
        cout <<" Bad input!" << endl;
    }

     else if (grade > 100 || grade < 0) {
        cout << "Enter a valid number" << endl;
    } else if (grade >= 90) {
        cout << "A" << endl;
    } else if (grade >= 80) {
        cout << "B" << endl;
    } else if (grade >= 70) {
        cout << "C" << endl;
    } else if (grade >=60) {
        cout <<"D" << endl;
    } else if (grade >= 50) {
        cout << "E" <<endl;
    } else if (grade < 50) {
        cout << "F" << endl;
    } else {
        cout << "Invalid grade" << endl;
    }
}
    
   
    