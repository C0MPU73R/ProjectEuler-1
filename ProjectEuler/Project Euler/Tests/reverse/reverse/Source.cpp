#include <iostream>
#include <string>
using namespace std;
int reversePal(int value);
int main()
{
	int n = 1223;
	int n2 = reversePal(n);
	cout << n2;

	system("pause");
	return 0;
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