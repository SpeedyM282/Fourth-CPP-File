/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 13.12.2020
Purpose: Find sum of natural numbers using recursion
{Hint: Find sum 1+2+3+4+5+6……….+n 
Using recursion.
Ask Input n form user.}
*/

#include<iostream>
using namespace std;
/*Declaring function 'sum'*/
int sum(int);

int main(){
	int n;
	cout << "Please enter any natural number: ";
	cin >> n;
	cout << "Sum of numbers from " << 1 << " to " << n << " = " << sum(n) << endl;
	system("pause");
	return 0;
}
/*Defining function 'sum'*/
int sum(int n){
	if(n==1)
		return 1; // To output '1' when inputted number is '1'
	else
		return (n+(sum(n-1))); // To calculate the sum of natural numbers
}










