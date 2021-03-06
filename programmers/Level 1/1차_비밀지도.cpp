#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    int a[n][n];
    int b[n][n];

    string ans;

    int i,j;

    for(i = 0; i < n; i++)
    {
        int cal1 = arr1[i];
        int cal2 = arr2[i];

        for(j = n-1; j >= 0 ; j--)
        {
            
                a[i][j] = cal1%2;
                cal1 = cal1/2;
            
            
                b[i][j] = cal2%2;
                cal2 = cal2/2;
            
        }
        
    }

    
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n; ++j)
        {
            if(a[i][j] == 1 || b[i][j] == 1)
            {
                ans += '#';
            }
            else if(a[i][j] == 0 && b[i][j] == 0)
            {
                ans += ' ';
            }
        }

        answer.push_back(ans);
        ans.clear();
    }



    return answer;
}

int main(void)
{
    vector<int> arr1 = {9,20,28,18,11};
    vector<int> arr2 = {30,1,21,17,28};
    int n = 5;
    
    for(string s : solution(n, arr1, arr2))
    {
        cout << s;
    }

}