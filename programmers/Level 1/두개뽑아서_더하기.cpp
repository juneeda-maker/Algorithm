#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

    

    vector<int> solution(vector<int> numbers) {
    vector<int> answer; //vector 선언 : vector <자료형> 벡터명;
    int i, j, sum;

    for(i = 0; i < numbers.size() - 1; i++) {
        for(j = i + 1; j < numbers.size(); j++) {
            sum = numbers[i] + numbers[j];
            if(find(answer.begin(), answer.end(), sum) == answer.end())
                answer.push_back(sum);
        }
    }
    
    sort(answer.begin(), answer.end());  
    
    return answer;
}

int main(){
 
vector<int> v = {2,1,3,4,1};
    
  
  for (int num : solution(v)) {
    std::cout << num << " ";
  }

    return 0;
}
