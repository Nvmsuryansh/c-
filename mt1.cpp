#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "enter a value of no ";
    cin >> no;

    (no >= 0) 
        ? (no > 0) 
            ? (no % 2 == 0) ? cout << "given no is positive even numer" : cout << "given no is positive odd number"
            : cout << "given no is equal to 0" 
        : (no % 2 == 0) ? cout << "given no is negative even number" : cout << "given no is negative odd number";

    return 0;
}