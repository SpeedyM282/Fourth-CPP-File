/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 13.12.2020
Purpose: Find G.C.D for two integers using recursion
{The greatest common divisor (GCD),of two numbersis
the largest number that divides them both.
For instance, the greatest common factor of 20 and 15 is 5,
since 5 divides both 20 and 15 and no larger number has this property.}
*/

#include<iostream>
using namespace std;
/*Declaring function 'gcd'*/
int gcd(int n1, int n2);

int main()
{
	int n1, n2;
	cout << "Enter any two natural numbers: ";
	cin >> n1 >> n2;
	cout << "G.C.D. of " << n1 << " and " <<  n2 << " = " << gcd(n1, n2) << endl;
	system("pause");
	return 0;
}
/*Defining function 'gcd'*/
int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1 % n2); // To calculate G.C.D. when 'n2' is not equal to 0
    else 
       return n1; // To output 'n1' when 'n2' is equal to 0
}






