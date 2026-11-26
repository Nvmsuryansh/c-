#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    
    cin>>n;
    int rev=0;
    
     for (int i=n; i>=0;i=i/10){
        int a=i%10;
        
        rev=rev*10+a;
     }
     cout<<rev;
    return 0;
}
