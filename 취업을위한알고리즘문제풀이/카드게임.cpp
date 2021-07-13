#include <iostream>

using namespace std;

int main()
{
    int a[11];
    int b[11];
    int lw = 0;

    int score_a = 0;
    int score_b = 0;

    for(int i =1; i <= 10; i++)
    {
        cin >> a[i];
    }
    for(int i =1; i <= 10; i++)
    {
        cin >> b[i];
    }

    for(int i = 1; i <= 10; i++)
    {
        if(a[i] == b[i])
        {
            score_a++;
            score_b++;
        }
        else if(a[i] > b[i]){
            score_a += 3;
            lw = 1;
        }
        else{
            score_b += 3;
            lw = 2;
        }
    }

    cout << score_a << " " << score_b << '\n';

    if(score_a == score_b)
    {
        if(lw == 0)
            cout << "D";
        else if(lw == 1)
            cout << "A";
        else
            cout << "B";
    }
    else if(score_a > score_b)
        cout << "A" << '\n';
    else
        cout << "B" << '\n';
}