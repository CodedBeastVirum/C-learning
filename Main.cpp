#include <iostream>
using namespace std;

int main() {
    //remember \n can be replace with <<endl
    cout << "Hello World! \n";
    cout << "I am programmer UWU" <<endl;
    
    /* return 0 = success
    return 1 = fail*/

    int mynumber = 15;
    cout << "The number is " + to_string(mynumber);

    const int x = 5, y = 10, z = 54;
    cout << "\n" << x+y*z << "\n please enter a number: ";

    int input;
    cin >> input;

    cout << "\n the number you put in was " << input;
    return 0;
}