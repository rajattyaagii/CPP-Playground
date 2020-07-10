// Program to Find Sum of Array through Recursion
#include<iostream>
using namespace std;

int arraySum(int *arr, int n) {
	
	int sum = 0;
	
	//Base Case
	if(n==0) {
		
		sum = sum+arr[n];
		return sum;
	}
	
	//Recursive Case
	
	sum = sum + arr[0] + arraySum(arr+1,n-1);
	return sum;
	
}



int main() {
	
	int arr[] = {1,4,2,9,3,5};
	int n = sizeof(arr)/sizeof(int);
	
	cout<<arraySum(arr,n);
	return 0;
}
