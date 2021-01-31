#include <iostream>
#include <string>
using namespace std;
 
int result = 0;
int boolean = 0;
string tmp = "";
string cal;
 
void min()
{
	for (int i = 0; i <= cal.size(); ++i){
		if (cal[i] == '+' || cal[i] == '-' || cal[i] == '\0'){
			if (boolean) {
				result = result - stoi(tmp);
			}
			else {
				result = result + stoi(tmp);
			}
 
			if (cal[i] == '-') {
				boolean = 1;
			}
 
			tmp = "";
			continue;
		}
 
		tmp = tmp + cal[i];
	}
}
 
int main(void)
{
	cin >> cal;
 
	min();
 
	cout << result << endl;
	
	
}