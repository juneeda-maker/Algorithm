#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int N;

bool comp(string a, string b)
    {
        if(a.at(N) != b.at(N)) //인덱스 문자가 같지 않을때 
        {
            return a.at(N) < b.at(N);
        }
        else //같아서 사전적으로 비교해야하는 경우
        {
            return a < b;
        }
        
    }

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    N = n;
    answer = strings;

    sort(answer.begin(), answer.end(), comp);

    return answer;
}

int main(void)
{
    vector<string> strings(3);
    
    
    for(string s : strings)
    {
        cin >> s;
    }
    cin >> N;

    for(string ss : solution(strings, N))
    {
        cout << ss;
    }

}