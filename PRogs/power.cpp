/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 13.12.2020
Purpose: Calculate the x^y using tail recursion.
{Hint: Write recursive function to calculate x to the power y)
*/

#include<iostream>
using namespace std;
/*Function 'pow' to calculate value of 'x' to the power of 'y'*/
int pow(int x, int y){
	if(y==0)
		return 1; // To output 1 when the power is 0
	else
		return (x*(pow(x,y-1))); // Value of 'x' to the power of 'y'
}

int main(){
	int x, y;
	cout << "Please enter 'x' and 'y': ";
	cin >> x >> y;
	cout << x << "^" << y << " = " << pow(x, y) << endl;
	system("pause");
	return 0;
}



