#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cout<<"enter value of a\n";
    cin>>a;
    cout<<"enter value of b\n";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
    

}