#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	unsigned int s;
	long long sum = 0;
	long long count = 1;
 
	cin >> s;
 
	while (1) {
		sum += count;
		if (sum > s) {
			--count;
			break;
		}
		++count;
	}
 
	cout << count << endl;
 
	return 0;
}