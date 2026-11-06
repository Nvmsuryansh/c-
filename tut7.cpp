#include <iostream>
using namespace std;

int c = 45; //global variable

int main() {
int a, b;
cout << "Enter the value of a and b: ";
cin >> a >> b;
int c= a+b; //Local variable
cout << "The value of c is :" << c << "\n";
cout << "The value of global c is " << ::c << "\n";

    return 0;
}