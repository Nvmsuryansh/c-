#include <iostream>
using namespace std;

int main() {
    int year;
    cout<< "Enter a year :\n";
    cin>> year;
    if (((year%400)==0)||((year%4)==0)&&((year%100)!=0))
    cout<< year << " is a leap year\n";
    else
    cout<< "Given year is not a leap year";

    return 0;

}