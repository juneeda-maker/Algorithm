#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long res;
vector<long long> v;
long long arr[27];
string s;
long long n;

int main()
{
    int cnt;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        cnt = 1;
        for(int j = s.size() -1; j >= 0; j--)
        {
            arr[s[j] - 'A'] += cnt;
            cnt = cnt * 10;
        }
    }

    for(int i = 0; i < 27; i++)
    {
        if(arr[i] != 0)
            v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());

    int val = 9;

    for(int i = v.size() -1; i >= 0; i--)
    {
        res += v[i] * val;
        val--; 
    }

    cout << res;
}