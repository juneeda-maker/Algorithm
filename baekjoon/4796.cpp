#include <iostream>

using namespace std;

int main()
{
    int l,p,v;
    int ans;
    int i = 1;
    while(1){
        ans = 0;
        cin >> l >> p >> v;

        if(!l && !p && !v)
            break;
        if(v % p < l)
            ans = (v / p) * l + (v % p);
        else
        {
            ans = (v / p) * l + l;
        }
            cout << "Case " << i << ": " << ans << endl;
        i++;
    }
}