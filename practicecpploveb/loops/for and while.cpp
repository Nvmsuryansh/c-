#include <iostream>
using namespace std;

int main () {
    for (int i=1; i<=10; i=i+1)
        { cout<<i<<endl;}

    int i=1;
    while (i<=10) {
        cout<<i<<endl;
        i=i+1;
    }

    for (int i=1; i<=10; i=i+1)
    {cout<<i<<endl;
        if (i==5)
        {break;}
    }

    for (int i=1; i<=10; i=i+1)
    { if (i==5)
        {continue;}
        cout<<i<<endl;
        
    }

        return 0;
    }