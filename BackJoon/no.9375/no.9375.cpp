/*
    백준 알고리즘 문제 9375번 소스 코드
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;  // 의상 수
        string itemName;
        string iCategory;
        map<string, int> m;
        
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            cin >> itemName >> iCategory;

            if (m.find(iCategory) == m.end())
            {
                m.insert({iCategory, 1});
            }
            else
            {
                m[iCategory]++;
            }
        }

        map<string, int>::iterator iter;

        int ans = 1;
        for (iter = m.begin(); iter != m.end(); iter++)
        {
            ans *= ((iter->second) + 1);
        }
        ans--;
        cout << ans << endl;
    }
}