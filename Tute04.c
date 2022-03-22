/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <iostream>
using namespace std;

int minimum(int x, int y);
int maximum(int x, int y);
int multiply(int x, int y);

int main() 
{
	int n1, n2;
	
	cout<<"Enter a value for no 1 : ";
	cin>>n1;
	
	cout<<"Enter a value for no 2 : ";
	cin>>n2;
	
	cout<<"Minimum is: "minimum(n1, n2)<<endl;
	cout<<"Maximum is: "maximum(n1, n2)<<endl;
	cout<<"Multiply is: "multiply(n1, n2)<<endl;
	
	return 0;
}

int minimum(int x, int y)
{
	if (x > y)
	{
		return y;
	} 
	else
	{
		return x;
	}
}

int maximum(int x, int y)
{
	if (x > y)
	{
		return x;
	} 
	else
	{
		return y;
	}
}


int multiply(int x, int y)
{
	return (x * y);
}