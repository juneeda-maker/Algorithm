#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


string solution(string s) {
	int count = 0; //글자 인덱스에 따른 대소문자 구별을 위한 변수
	for (int i = 0;i < s.size();i++) {
		if (s[i] == ' ')
			count = 0;
		else {
			if (count % 2 == 0)
				s[i] = toupper(s[i]); //toupper 대문자 만드는 함수
			else if (count % 2 == 1)
				s[i] = tolower(s[i]); //소문자
			count++;
		}
	}
    return s;
}

int main(void)
{
    string s;
    getline(cin,s); //공백 있는 문자열 받을때 사용 
    
    cout << solution(s);
}