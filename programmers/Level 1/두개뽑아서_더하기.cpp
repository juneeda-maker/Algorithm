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
            if(find(answer.begin(), answer.end(), sum) == answer.end()) //범위 내에서 sum을 찾지 못한경우 : find는 찾지 못할시 end를 반환.
                answer.push_back(sum);
        }
    }
    
    sort(answer.begin(), answer.end());  //sort(first,last) 범위 내의 원소들을 오름차순으로 정렬 
    
    return answer;
}

int main(){
 
vector<int> v = {2,1,3,4,1};
    
  
  for (int num : solution(v)) {
    std::cout << num << " ";
  }

    return 0;
}
