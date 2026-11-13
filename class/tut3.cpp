#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    cout << "Enter the value of first number: ";
    cin>> num1;
    cout << "Enter the value of second number: ";
    cin>> num2;
    //AIRTHEMETIC OPERATORS
    cout<< "The value of num1 + num 2 is :" << num1 + num2 << "\n";
    cout<< "The value of num1 - num 2 is :" <<  num1 - num2 << "\n";
    cout <<"The vlaue of num1 * num2 is :" << num1*num2 << "\n";
     cout <<" The value of num1/num2 is :" << num1/num2 << "\n";
     cout << "The value of num1%num2 is :" << num1%num2 << "\n";
     cout << "The value of num1++ is :" << num1++ << "\n";
    cout << "The value of num1-- is :" <<num1-- << "\n";
    cout << "THE value of ++num1 is :" << ++num1 << "\n";
    cout << "The value of --num1 is :" << --num1 << "\n";
cout << "\n";

    //COMPARISON OPERATORS
    cout << "This is comparison operators in c++\n";
    cout << "The value of num1==num2 is :" << (num1==num2) << "\n";
    cout << "The value of num1!=num2 is :" << (num1!=num2) << "\n";
    cout <<"The value of num1>=num2 is :" << (num1>=num2) << "\n";
    cout << "The value of num1<=num2 is :" << (num1<=num2) << "\n";
    cout << " The value of num1>num2 is :" << (num1> num2) << "\n";
    cout << "The value of num1<num2 is :" << (num1<num2) << "\n";

    //LOGICAL OPERATORS
    cout << "The logical operators in c++";
    cout << "The value of logical AND operator (num1<num2 && num1==num2) is :" << ((num1<num2)&&(num1==num2)) << "\n";
    cout << "The value of logical OR operator (num1<num2 || num1==num2) is :" << ((num1<num2)||(num1==num2)) << "\n";
    cout << "The value of logical NOT operator (!(num1<num2 && num1==num2)) is :" << (!(num1<num2 && num1==num2)) << "\n";
    


    return 0;
}