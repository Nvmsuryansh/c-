#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int index=0; index<5; index++) {
        cout<<"Enter the value of arr["<<index<<"] \n";
        cin>>arr[index];
    }

    for (int index=0; index<5; index++) {
        cout<<arr[index]<<endl;
    }
return 0;    
}