/*
*A recursive cpp program to print the combination of given numbers
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int factorial (int n);

//main function
int main()
{
	int n1,n2,n3;
	cout<<"Enter a Upper value and Lower value : ";
	cin>>n1>>n2;
	cout<<n1<<"C"<<n2<<" is : ";
	n3=n1-n2;
	n1=factorial(n1);
	n3=factorial(n3);
	n2=factorial(n2);
	cout<<n1/(n2*n3)<<endl;
	system("pause");
	return 0;
}

//Function to calculate factorial
int factorial(int n)
{
	if(n==1)
		return 1;
	if(n>1)
		return n*factorial(n-1);
}
