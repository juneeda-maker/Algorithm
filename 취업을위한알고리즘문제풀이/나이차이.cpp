#include <iostream>

using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin); //입력할 데이터가 많을경우 input.txt파일 생성해서 입력
    
    int n;
    int age;
    int max = 0;
    int min = 2100000000;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> age;
        if(age > max)
            max = age;
        if(age < min)
            min = age;
    }

    cout << max - min << '\n';

}