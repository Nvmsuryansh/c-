#include <iostream>
using namespace std;

int main () {
    //typecasting

    //implicit type casting:-it is automatically done by compiler
    
    //float to int
    int num1=3;
    float num2=2.7;
    float num3=4.6;

    float sum=num1+num2+num3;
    cout<<sum<<endl;

    int sum2=num1+num2+num3;//sum of number happens in float to retain
    //maximum deatils than float in stored in form of int
    cout<<sum2<<endl;
   
    //char to int
    char a='A'; //conversion of A to it ascii value = 65
    int c= a+1;
    char d=a+1;//first a is converted to int so 65+1=66 
    //66 is converted to char=B
    cout<<c<<endl<<d<<endl;
    
    //int to char
    int y=97;
    char z=y;
    cout<<z<<endl;
    //ascii value assigned to 97 is a so output is a

    //Explicit typecasting:-Done manually

    //done using casting operator ():-paranthesis

    //manual conversion of float to int
    float sum3 = num1+(int)num2+(int)num3; //all number converted to int soans is int
    cout<<sum3<<endl;

    //double to int
    double pi= 3.14159265359;
    int intpi= (int)pi;
    cout<<intpi<<endl;

    //float to char
    float g=65.5555;
    char h=(char)g;
    cout<<h<<endl;

    //mic
    int s=3.4445; //compiler only saves the int part so implicit casting takess place here
    cout<<(float)s<<endl;

    //division
    int num4=17.0;
    float div=num4/num1; //int divided by int gives int as answer
    float div2=num4/(float)num1;//int divided by float or vise versa givs float answer
    cout<<div<<endl<<div2<<endl;








return 0;
}