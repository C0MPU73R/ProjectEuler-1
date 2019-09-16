#include <iostream>
#include <vector>
using namespace std;
vector<int> getFactors(int givenNumber);
vector<int> getPrimeFactors(vector<int> originalFactors);
bool isPrime(int number);
int getLargestPrimeFactor(vector<int> primeFactors);
int main()
{
	
	int max = getLargestPrimeFactor(getPrimeFactors(getFactors(1444)));
	cout << max;


	system("pause");
	return 0;
}

vector<int> getFactors(int givenNumber)
{
	//get factors
	vector<int> factors;
	for (int index = 1; index <= givenNumber; index ++)
	{
		if (givenNumber % index == 0)
		{
			factors.push_back(index);
		}
	}
	return factors;
}
vector<int> getPrimeFactors(vector<int> originalFactors)
{
	vector<int> primeFactors;
	for (int index = 0; index < originalFactors.size(); index++)
	{
		if (isPrime(originalFactors[index]))
		{
			primeFactors.push_back(originalFactors[index]);
		}
	}
	return primeFactors;
}
bool isPrime(int number)
{
	vector<int> a;
	bool prime = 0;
	for (int index = 1; index <= number; index++)
	{
		if (number % index == 0)
		{
			a.push_back(index);
		}
	}
	if (a.size() == 2)
	{
		prime = 1;
	}

	return prime;
}
int getLargestPrimeFactor(vector<int> primeFactors)
{
	int max = primeFactors[0];
	for (int index = 0; index < primeFactors.size(); index++)
	{
		if (primeFactors[index] > max)
		{
			max = primeFactors[index];
		}
	}
	return max;
}