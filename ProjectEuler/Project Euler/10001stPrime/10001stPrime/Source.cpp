//What is the 10,001st prime number?
#include <iostream>
#include <vector>
using namespace std;
vector<int> generatePrimes();
int getCertainPrime(vector<int> primes, int index);
bool isPrime(int number);
int main()
{

	int certainPrime = getCertainPrime(generatePrimes(), 10001);
	cout << certainPrime;


	system("pause");
	return 0;
}
vector<int> generatePrimes()
{
	vector<int> primes;
	for (int index = 2; index < INT_MAX; index++)
	{
		if (isPrime(index))
		{
			primes.push_back(index);
		}
	}
	return primes;
}
int getCertainPrime(vector<int> primes, int index)
{
	return primes[index-1]; //Start with 1, not 0. "I want the 1st prime number = return primes[1-1=0], which is correct"
}

bool isPrime(int number)
{
	bool prime = 1;
	for (int index = 2; index < number / 2; index++)
	{
		if (number % index == 0)
		{
			prime = 0;
			break;
		}
	}
	return prime;
}