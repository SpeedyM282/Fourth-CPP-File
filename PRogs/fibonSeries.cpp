/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 13.12.2020
Purpose: Display Fibonacci Series Using Recursion.
{Write a recursive function to Display Fibonacci Series upto 'n' terms.
Ask Input n form user.}
*/

#include<iostream>
using namespace std;
/*Declaring function 'fibon'*/
int fibon(int);

int main(){
	int x , i=0;
	cout << "Enter the number of terms of series: ";
	cin >> x;
	cout << "Fibonnaci series: ";
/*To output fibonacci series by calling function 'fibon'*/	
	while(i<x){
    	cout << " " << fibon(i);
    	i++;
	}
	cout << endl;
	system("pause");
	return 0;
}
/*Defining function 'fibon'*/
int fibon(int x){
   if((x==1)||(x==0)){
      return x; // To output 'x' when 'x' is 1 or 0
   }else{
      return (fibon(x-1)+fibon(x-2)); // To calculate number of fibonacci series
   }
}







