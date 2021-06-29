#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int weight;

int main()
{
    cin >> n;
    vector<int> w;

    for(int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        w.push_back(n);
    }

    sort(w.begin(), w.end());

    weight = 1;

    for(int i = 0; i < n; i++)
    {
        if(w[i] > weight)
        {
            break;
        }
        weight = weight + w[i];
    }
    
    cout << weight;

}