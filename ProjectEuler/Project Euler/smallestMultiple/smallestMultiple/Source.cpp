#include <iostream>
using namespace std;
#include <vector>
vector<int> generateNumbers();
vector<int> generateDivisibleNumbers(vector<int> generatedNumbers);
bool isDivisibleByRange(int input, int range);
int findMinDivNumber(vector<int> divNumbers);
int main()
{

	int min = findMinDivNumber(generateDivisibleNumbers(generateNumbers()));
	cout << min;

	system("pause");
	return 0;
}
vector<int> generateNumbers()
{
	vector<int> generatedNumbers;
	for (int index = 0; index < INT_MAX; index++)
	{
		generatedNumbers.push_back(index);
	}
	return generatedNumbers;
}

vector<int> generateDivisibleNumbers(vector<int> generatedNumbers)
{
	vector<int> divNumbers;
	for (int index = 0; index < generatedNumbers.size(); index++)
	{
		if (isDivisibleByRange(generatedNumbers[index], 20))
		{
			divNumbers.push_back(generatedNumbers[index]);
		}
	}
	return divNumbers;
}
bool isDivisibleByRange(int input, int range)
{
	bool isDiv = 0;
	int counter = 0;
	for (int index = 1; index <= range; index++)
	{
		if (input % index == 0)
		{
			counter++;
		}
	}
	if (counter == range)
	{
		isDiv = 1;
	}
	return isDiv;
}
int findMinDivNumber(vector<int> divNumbers)
{
	int min = 100000;
	for (int index = 0; index < divNumbers.size(); index++)
	{
		if (min > divNumbers[index])
		{
			min = divNumbers[index];
		}
	}
	return min;
}