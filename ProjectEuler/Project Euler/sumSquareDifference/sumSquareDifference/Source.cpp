#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int sumOfSquares(int limit);
int squareOfSums(int limit);
int main()
{




	system("pause");
	return 0;
}
vector<int> generateLimit(int limit)
{
	vector<int> genLimitNums;
	for (int index = 1; index <= limit; index++)
	{
		genLimitNums.push_back(index);
	}
}
int sumOfSquares(vector<int> genlimitNums)
{
	int sum = 0;
	vector<int> sqrdGenLimitSums;
	for (int index = 0; index < genlimitNums.size(); index++)
	{
		sqrdGenLimitSums.push_back(pow(genlimitNums[index], 2));
	}
	for (int index = 0; index < sqrdGenLimitSums.size(); index++)
	{
		sum += sqrdGenLimitSums[index];
	}
	return sum;
}
int squareOfSums(vector<int> genLimitNums)
{
	int sum = 0;
	for (int index = 0; index < genLimitNums.size(); index++)
	{
		sum += genLimitNums[index];

	}
	sum = pow(sum, 2);
	return sum;
}