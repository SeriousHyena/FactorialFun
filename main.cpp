#include <iostream>


using namespace std;

//declare functions here
int factorial(int num);
int fact2;

//declare variables here

int foo = 0;
int& holder = foo;				//create reference variable for the factorial function


int main()
{
	int counted(int& count);	//invoke
	int factorial(int num);		//invoke the function
	int fact = factorial(5);
	cout << fact << endl;
	cout << "This is holder: " <<holder << endl;
	
	return 0;
}

//place functions here
int factorial(int num)
{
	if (num >= 0)
	{
		

		
		factorial(num - 1);
		holder = +num;
	
	}
	return (num-1)*num;
}

