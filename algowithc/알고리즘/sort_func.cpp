#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
//sort를 이용한 오름차순과 내림차순
bool compare(int a, int b)
{
    return a > b; //내림차순
}

int main(void)
{
    int a[10] = {9,3,5,4,1,10,8,6,7,2};
    sort(a, a+10, compare); //여기서의 10은 인덱스로 취급하기 보단 정렬할 데이터의 개수 라고 이해하면 된다.
    for(int i = 0; i < 10; i++)
    {
        cout << a[i] << ' ';
    }
}
*/



class Student{
    public:
        string name;
        int score;
        Student(string name, int score){
            this->name = name;
            this->score = score;
        }
        //정렬기준은 '점수가 작은 순서'
        bool operator <(const Student &student)const{
            return this->score < student.score;
        }
};

bool compare(int a, int b)
{
    return a > b;
}

int main(void)
{
    Student students[] = {
        Student("나 동 빈", 90),
        Student("이 상 욱", 93),
        Student("박 한 울", 97),
        Student("강 종 구", 87),
        Student("이 태 일", 92)
    };
    sort(students, students + 5);
    for(int i = 0; i < 5; i++)
    {
        cout << students[i].name << endl;
    
    }
}