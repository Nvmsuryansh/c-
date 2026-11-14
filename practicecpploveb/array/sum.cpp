#include <iostream>
using namespace std;

int main () {
   int arr [5]={10,20,30,40,50};
   int sum=0;

   for (int index=0; index<5; index++){
    sum=sum+arr[index];
   }
   cout<<sum;

}