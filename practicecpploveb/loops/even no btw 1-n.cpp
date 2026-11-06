#include <iostream>
using namespace std;

int main() {
    int t;
    cout<<"Enter a value\n";
    cin>>t;

    for (int n=1;n<=t;n=n+1) {
        if (n%2==0) 
         (cout<<n<<" ");
        
    }
    return 0;
}