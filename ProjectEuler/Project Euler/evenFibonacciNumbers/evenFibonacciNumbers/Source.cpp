#include <iostream>
#include <vector>
using namespace std;
vector<int> generateFibonacciNumbers(int limit);
vector<int> getEvenFibonacciNumbers(vector<int> originalFibonacciNumbers);
int getSum(vector<int> evenFibonacciNumbers);
int main()
{
	int sum = getSum(getEvenFibonacciNumbers(generateFibonacciNumbers(4000000)));
	cout << sum;

	system("pause");
}
vector<int> generateFibonacciNumbers(int limit)
{
	int first = 0;
	int second = 1;
	int temp = 0;
	vector<int> fibonacciNumbers;
	int index = 0;
	fibonacciNumbers.push_back(0);
	do
	{
		fibonacciNumbers.push_back(second);
    		temp = first;
        first = second;
		second = second + temp;
		if (second >= limit)
		{
			break;
		}
		index++;
	} while (index < INT_MAX);
	return fibonacciNumbers;
}
vector<int> getEvenFibonacciNumbers(vector<int> originalFibonacciNumbers)
{
	vector<int> evenFibonacciNumbers;
	for (int index = 0; index < originalFibonacciNumbers.size(); index++)
	{
		if (originalFibonacciNumbers[index] % 2 == 0)
		{
			evenFibonacciNumbers.push_back(originalFibonacciNumbers[index]);
			
		}
	}

	return evenFibonacciNumbers;
}
int getSum(vector<int> evenFibonacciNumbers)
{
	int sum = 0;
	for (int index = 0; index < evenFibonacciNumbers.size(); index++)
	{
		sum += evenFibonacciNumbers[index];
	}
	return sum;
}