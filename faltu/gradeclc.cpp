#include<iostream>
using namespace std;

int main() {
	int marks;
	
	cout<< "Enter your marks(out of 100) \n";
	cin>>marks;
	
	if (marks>=95)
	{cout<<" Your grades are A+";}
	else if (marks>=90)
	{cout<<"Your grades are A";}
	else if (marks>=75)
	{cout<<"Your grades are B";}
	else
	{cout<<"Your grades are D";}
	
	return 0;
}
