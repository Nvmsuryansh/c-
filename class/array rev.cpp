#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int index=0; index<5 ; index++){
        cout<<"enter a value \n";
        cin>>arr[index]; 
    }


    for (int i=0; i<5;i++){
        for(int j=4;j>=0;j--){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    for (int k=0; k<5; k++){
        cout<<arr[k]<<" ";
      
    }
    return 0;


}