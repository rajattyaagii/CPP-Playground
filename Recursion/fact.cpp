// Recursive Program to find Factorial of a Number
#include<iostream>

using namespace std;

int fact(int n)
{
	//Base Case
	if(n==0 || n==1)
		return 1;
	
	//Reursive Case
	return n*fact(n-1);
}

int main()
{
	int n;
	cin>>n; //enter the no.
	cout<<fact(n);
	
	return 0;
}
























