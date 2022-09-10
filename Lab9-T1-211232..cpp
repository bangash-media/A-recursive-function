#include <iostream>
/*a recursive function that computes sum of all numbers
 from 1 to n-1, where n is given as parameter*/
using namespace std;

int sum(int n); //function declaration

int main() 
{
	int n,add;
	cout<<"Enter A number \"n\": "; cin>>n;
	n--; // decrement of the user input
	add=sum(n); //function call
	cout<<"\n\nSum of numbers from 1 to n-1= "<<add;
	return 0;
}
int sum(int n) //function defination
{
	int num=1;
	if (n>=num)
	{
		return n+sum(n-1);
	}
	else 
	return 0;
}
