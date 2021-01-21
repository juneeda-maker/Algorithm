#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;



int student1[5] = {1,2,3,4,5};
int student2[8] = {2,1,2,3,2,4,2,5};
int student3[10] = {3,3,1,1,2,2,4,4,5,5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int score[3] = { };
    
    
    for(int i = 0; i < answers.size(); i++)
    {
        if(answers[i] == student1[i%5]) // 반복주기로 자름 
            score[0]++;
        if(answers[i] == student2[i%8])
            score[1]++;
        if(answers[i] == student3[i%10])
            score[2]++;
    }

    int max_score;
    max_score = max(max(score[0],score[1]),score[2]);

    for(int i = 0; i < 3; i++) //제일 많은 문제 맞힌 사람 찾아내기
    {
        if(max_score == score[i])
        {
            answer.push_back(i + 1);
        }
    }
   
    return answer;
}


int main(void){

    vector<int> answer2 = {1,3,2,4,2};
    

    for(int num : solution(answer2))
    {
        cout << num << " ";
    }
}