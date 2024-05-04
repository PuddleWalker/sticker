#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> a(10);

	for (auto tt : a)
	{
		int i = 0;
		tt = i * i;
		cout << tt << " ";
		i++;
	}
}