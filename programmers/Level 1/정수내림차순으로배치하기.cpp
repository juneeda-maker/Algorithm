#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

long long solution(long long n) {
    string s;
    s = to_string(n);
    sort(s.begin(), s.end(), comp);
    
    return stoll(s);
}

int main(void)
{
    long long n;
    cin >> n;
    cout << solution(n);

}