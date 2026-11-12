#include <iostream>
using namespace std;

int sum(int a, int b){
   
    int totalsum= a+b;
    return totalsum;
}

int multiply(int a, int b) {
    int multiplication = a * b;
    return multiplication;
}



int main(){
    int a,b;
     cin>> a>> b;
    
   int c= sum(a,b);

   int d,f;
   cin>>d>>f;

   int g=multiply(d,f);

   cout<<c<<endl<<g;

   return 0;
}