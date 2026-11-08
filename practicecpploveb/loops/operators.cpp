#include <iostream>
using namespace std;

int main () {
    //unirary operators
    // works with single variable
//increment and decrement and post and pre
  int i=5;
    cout<<i++<<endl; //post inc
    cout<<i--<<endl;//post dec
    cout<<++i<<endl;//pre inc
    cout<<--i<<endl;;//pre dec
  //binary operator
    int j=5, k=6;

  //Arthmetic
  cout<<k+j<<endl;
  cout<<k-j<<endl;
  cout<<k*j<<endl;
  cout<<k/j<<endl;
  cout<<k%j<<endl;

  //relational
//use brackets for relational function
  cout<<( k>j) <<endl;
  cout<< (k<j) <<endl;
  cout<< (k>=j) <<endl;
  cout<< (k<=j) <<endl;
  cout<< (k==j) <<endl;
  cout<< (k!=j) <<endl;

//logical
//answer to logical operators comes in true or false form
//true is denoted by 1 and false is denoted by 0 
bool a,b;
a=(k==j)&&(k>j);
b=(k==j)||(k>j);
  cout<<a<<endl;
  cout<<b<<endl;
  

    
 return 0;   

}