// https://www.acmicpc.net/problem/2292
// ¹úÁý ¹®Á¦
#include <iostream>
using namespace std;
typedef  unsigned long long ull;
int main()
{
	ull N;
	ull append = 6;
	ull current = 1;
	ull index = 1;
	cin >> N;
	
	while (true)
	{
		if (N <= current)
		{
			break;
		}
		else
		{
			current += append;
			++index;
			append += 6;
		}
	}
	cout << index;
}