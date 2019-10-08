// Recursive Program to find nth fibbonaci no.

#include<iostream>

int fib(int n)
{
	//Base Case
	if(n==0 || n==1)
		return n;
		
	// Recursive Case
	return fib(n-1) + fib(n-2);	

}

using namespace std;

int main() {
    
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}
