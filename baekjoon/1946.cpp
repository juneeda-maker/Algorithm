#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(void)
{   
    int t; //테스트 케이스 갯수
    cin >> t;
    int n;
   

    for(int k = 0; k < t; k++)
    {
        cin >> n; //n은 사람의 수
        vector<vector<int>> score(n, vector<int>(2,0));
        for(int j = 0; j < n; j++)
        {
            cin >> score[j][0] >> score[j][1]; //서류 , 면접 순위 입력 받기.
        }

        sort(score.begin(), score.end());
         int _index = 0;
        

        vector<int> result;
        result.push_back(score[0][1]);

        for(int i = 1; i < n; i++) //socre[0][1]면접순위를 기준으로 잡고 이것보다 더 높은 순위의 면접 점수를 가졌다면 합격자에 추가
        {
            if(result[_index] > score[i][1])
            {
                result.push_back(score[i][1]);
                _index++;
            }
        }

       cout << _index + 1 << endl;
   
    }
     
}