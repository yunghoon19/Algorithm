/*
    백준 알고리즘 문제 1676번 소스 코드
*/

#include <iostream>

using namespace std;

int main()
{
    int N;

    int resultFIve = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int temp = i;

        while (temp % 5 == 0)
        {
            resultFIve += 1;
            temp /= 5;
        }
    }

    cout << resultFIve;
}