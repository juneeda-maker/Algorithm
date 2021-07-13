#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int res;
    int pre,now;

    cin >> n;

    vector<int> arr(n);

    cin >> pre;

    for(int i = 1; i < n; i++)
    {
        cin >> now;
        res = abs(pre - now);

        if(res > 0 && res < n && res[pos] == 0)
        {
            arr[res] = 1;
        }
        else
        {
            cout << "NO" << '\n';
            return 0;
        }
        pre = now;
    }

    cout << "YES" << '\n';

    return 0;
}