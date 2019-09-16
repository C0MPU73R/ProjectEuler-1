#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> generateProducts();
vector<int> getPalindromes(vector<int> products);
bool isPalindrome(int value);
int reversePal(int value);
int findMaxPal(vector<int> pals);
int main()
{
	int maxPal = findMaxPal(getPalindromes(generateProducts()));
	cout << maxPal;

	system("pause");
	return 0;
}
vector<int> generateProducts() //generates all products made by two, two 3 numbers: ex: 100x100, 100x101, ...
{
	vector<int> products;
	for (int index = 100; index <= 999; index++)
	{
		for (int index2 = 100; index2 <= 999; index2++)
		{
			products.push_back(index*index2);
		}
	}
	return products;
}
vector<int> getPalindromes(vector<int> products)
{
	vector<int> pals;
	for (int index = 0; index < products.size(); index++)
	{
		if (isPalindrome(products[index]))
		{
			pals.push_back(products[index]);
		}
	}
	return pals;
}
bool isPalindrome(int value)
{
	bool isPal = 0;
	//ex: 9009 is a pal
	//A palindrome is a number that can be read forwards and backwards
	//Let's apply a reverse word solution to this problem.
	if (value == reversePal(value))
		isPal = 1;
	return isPal;
}
int reversePal(int value)
{
	string sValue = to_string(value);
	char first;
	char last;
	char temp;
	for (int index = 0; index < sValue.size() / 2; index++)
	{
		first = sValue[index];
		last = sValue[sValue.size() - 1 - index];
		temp = first;
		sValue[index] = last;
		sValue[sValue.size() - 1 - index] = temp;
	}
	int reversed = stoi(sValue);
	return reversed;
}

int findMaxPal(vector<int> pals)
{
	int max = pals[0];
	for (int index = 0; index < pals.size(); index++)
	{
		if (pals[index] > max)
		{
			pals[index] = max;
		}
	}
	return max;
}

