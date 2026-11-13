#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int  main () {
    int n,N,rev=0,a;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    N=n;
    while (n!=0)
    {a=n%10;
    rev=rev*10+a;
    //lets consider number to be 123
    //start with rev=0 after first iteration rev*10=0 so rev=a where a=n%10=3
    // now after second iteration n=12 so a=n%10=2 and rev=rev*10+a ie 1*10+4
    // after thrid iteration n=1 and a=1 rev=14*10+1
n=n/10;
}
if (rev==N)
{cout<<"yes the reversed no is equal to the input number which is equal to "<<rev;}
else
{cout<<"no the reversed no is "<<rev <<" which is not equal to "<<N;}
return 0;
}