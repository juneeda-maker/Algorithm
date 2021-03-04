#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ans;
 

    while(n){
        ans.push_back(n%3);
        n = n/3;
    }

    int mul = 1;
    

    for(int i = ans.size()-1; i >= 0; i--)
    {
        answer = answer + (ans[i] * mul);
        mul = mul * 3;
    }

    return answer;
}



int main(void)
{
    int n;
    cin >> n;
    cout << solution(n);
}