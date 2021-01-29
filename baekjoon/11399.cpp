#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;



int main(void)
{
    int n;
    int sum = 0;
    vector<int> time;

    cin >> n;
    int i;
    for(i = 0; i < n; i++)
    {   int k;
        cin >> k;
        time.push_back(k);
    }

    sort(time.begin(), time.end());

    i = 0;
    int tmp = 0;


        for(int i = 0; i < n; i++)
        {   
            tmp = tmp + time[i]; 
            sum = sum + tmp;
        }
    
    cout << sum;
}