#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end()); //정렬부터 해주자

    for(int i = 0; i < participant.size(); i++)
    {
        if(participant[i] != completion[i])
        {
            answer = participant[i] ;
            break;
        }
    }

    return answer;
}

int main(void){

    vector<string> participant = {"marina", "josipa", "nikola", "vinko", "filipa"};
    vector<string> completion = {"marina", "josipa", "nikola","filipa"};

    cout << solution(participant, completion);
}