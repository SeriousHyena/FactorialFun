#include <iostream>


using namespace std;

//declare functions here
int factorial(int num);
int counted(int& count); 

int fact2;
int& count = 4;

int main()
{
	int counted(int& count);	//invoke
	int factorial(int num);		//invoke the function
	int fact = factorial(4);
	cout << fact << endl;
	

	

	return 0;
}

//place functions here
int factorial(int num)
{
	if (num >= 0)
	{
		counted(count-1);
		return num * (num - 1);

		
		
		
	}
	return num;
}

int counted(int& count)
{

	return count--;
}