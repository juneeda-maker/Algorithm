#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, key;
    int lt, rt, mid, tmp;
    vector<int> a;

    cin >> n >> key;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    lt = 0;
    rt = n -1;

    while(lt <= rt)
    {
        mid = (lt+rt) / 2;
        if(a[mid] == key)
        {
            cout << mid + 1;
            return 0;
        }
        else if(a[mid] > key)
        {
            rt = mid -1;
        }
        else
        {
            lt = mid + 1;
        }
    }

    return 0;
}