#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
bool solution(int x) {
    bool answer = true;
    string arr = to_string(x);
    int sum = 0;

    for(int i = 0; i < arr.length(); i++)
    {
        sum += arr[i]-'0';
    }

    if(x % sum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
*/



bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int tmp = x;

    while(tmp != 0)
    {
        sum += tmp % 10;
        tmp = tmp / 10;
    }

    if(x % sum == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    


    return answer;
}

int main(void)
{
    int x;
    cin >> x;
    cout << solution(x);
}