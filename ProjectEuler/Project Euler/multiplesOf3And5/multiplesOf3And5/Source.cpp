#include <iostream>
#include <vector>
using namespace std;
vector<int> generateNumbers(int limit);
bool isMultiple(int number, int divisor);
int summation(vector<int> generatedNumbers, int given1, int given2);
int main()
{
	int theSum = summation(generateNumbers(1000), 3, 5);
	cout << theSum;
	system("pause");
	return 0;
}
vector<int> generateNumbers(int limit) //generates the numbers. ex: all numbers below 10 = 1,2,3,4,5,6,7,8,9
{
	vector<int> ints;
	for (int index = 1; index < limit; index++)
	{
		ints.push_back(index);
	}
	return ints;
}
bool isMultiple(int number, int divisor) //sees if the number is a multiple of a given divisor
{
	bool isMultiple = 0;
	if (number % divisor == 0)
	{
		isMultiple = 1;
	}
	return isMultiple;
}
int summation(vector<int> generatedNumbers, int given1, int given2)
{
	int sum = 0;
	for (int index = 0; index < generatedNumbers.size(); index++)
	{
		if (isMultiple(generatedNumbers[index], given1) || isMultiple(generatedNumbers[index], given2))
		{
			sum += generatedNumbers[index];
		}
	}
	return sum;
}