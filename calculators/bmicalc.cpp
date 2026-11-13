#include<iostream>
#include<cmath>
using namespace std;
 int main(){
 	float height,weight;
 	float bmi;
 	
 	cout<<"Enter your Height (in meters)\n";
 	cin>>height;
 	cout<<"enter your weight (in kgs)\n";
 	cin>>weight;
 	
 	bmi=weight/(pow(height, 2));
 	cout<< "Your BMI is "<<bmi<<endl;
 	
 	if (bmi<18.5)
 	{cout<<"You are underweight\n";
	 }
	 else if(bmi>=18.5&& bmi<24.9)
	 {cout<<"Your weight is Normal\n";
	 }
	 else if(bmi>=24.9&&bmi<29.9)
	 {cout<<"You are overweight\n";}
	 else
	 {cout<<"You are obese\n";
	 }
 	  return 0;

 }
