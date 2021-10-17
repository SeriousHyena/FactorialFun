#include <iostream>
#include <vector>
#include <array>


using namespace std;

//place vector arrays here
vector<int> factorialVector;
vector<int> factorialVector2;

//declare functions here
int factorial(int num);

//declare variables here
int h2 = 0;
int& fact2 = h2;
int h1 = 1;
int& holder = h1;				//create reference variable for the factorial function

//declare arrays here
array<int, 6> factorialCalc;


int main()
{
	int counted(int& count);	//invoke
	int factorial(int num);		//invoke the function
	int fact = factorial(5);
	int counter = 5;
	

	for (int i = 0; i < factorialVector.size(); i++)
	{	
		factorialVector2.push_back(i);
	}

	for (int i = 0; i < factorialVector2.size(); i++)
	{
		factorialCalc[i] = factorialVector2.at(counter) * (counter - 1);
		cout<< factorialVector2.at(counter) <<" multiplied by: "<<counter-1 <<" is: " << factorialCalc[i] << endl;
		//cout << "The value of factorialCalc is: " << factorialCalc[i] << endl;
		counter--;
	}
	
	return 0;
}

//place functions here
int factorial(int num)
{
	if (num >= 0)
	{
		factorialVector.push_back(num);
		factorial(num - 1);				//recursion statement
	}
	return 0;
}

