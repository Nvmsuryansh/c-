#include <iostream>
using namespace std;

float SIP (int r, int p, int t){
    float totalAmount= p*(1+r*t);
    return totalAmount;
}

int main() {
    int p;
    cout<<"Enter Principle Amount"<<endl;
    cin>>p;
    int r;
    cout<<"Enter Rate of intrest"<<endl;
    cin>>r;
    int t;
    cout<<"Enter time period"<<endl;
    cin>>t;

    float answer=SIP(r,p,t);
    cout<<"total amount to return is "<<answer<<endl;
}