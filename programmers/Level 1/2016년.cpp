#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string day[] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    
    for(int i = 0; i<a-1; i++){
        sum += month[i];
    }
    sum += b-1;
    return day[sum%7];
}

int main(void)
{
    int a,b;

    cin >> a >> b;

    cout << solution(a,b);
}