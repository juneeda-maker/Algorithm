#include <iostream>

using namespace std;

int main()
{
    char n[15];
    int age;
    char sex;

    age = 0;

    for(int i = 0; i <= 13; i++)
    {
        cin >> n[i];
    }

    if(n[7] > 2)
    {
        age = 2019 - (1900 + ((n[0] - '0') * 10) + n[1] - '0');
        if(n[7] == 1)
            sex = 'M';
        else
            sex = 'W';
    }
    else
    {
        age = 2019 - (2000 + (n[0] - '0') * 10 + n[1] - '0');
        if(n[7] == 3)
            sex = 'M';
        else
            sex = 'W';
    }

    cout << age+1 << " " << sex;
}