#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp; //임시로 값을 담을 변수
    
    

   for(int i = 0; i < commands.size(); i++) //commands의 길이
   {
            for(int j = commands[i][0] -1; j < commands[i][1]; j++) //array 배열 안에서의 i 부터 k 값 까지의 원소 추출
            {
                tmp.push_back(array[j]);
            }

            sort(tmp.begin(), tmp.end()); //정리

            answer.push_back(tmp[commands[i][2]-1]); //commands 의 길이 만큼 실행한 결과를 인덱스 순서대로 answer에 집어넣음 ex) commands[0] ~ commands[3] 라고 한다면 4개의 원소가 answer 에 담김


            tmp.clear(); //사용한 tmp 값 비워주기
   }
    

    return answer;
}



//테스트를 위한 부분
int main(void)
{
    vector<int> array = {1,5,2,6,3,7,4};
    vector<vector<int>> commands = {{2,5,3}, {4,4,1} , {1,7,3}};

    for(int num : solution(array, commands))
    {
        cout << num << " ";
    }
}