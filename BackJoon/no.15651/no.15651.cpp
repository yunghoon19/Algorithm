/*
    백준 알고리즘 문제 15651번 소스 코드
*/

#include <iostream>

using namespace std;

#define MAX 9

int resultArr[MAX];

void BT(int _depth, const int& _N, const int& _M)
{
    if (_depth == _M)
    {
        for (int i = 0; i < _M; i++)
        {
            printf("%d ", resultArr[i] + 1);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < _N; i++)
    {
        resultArr[_depth] = i;
        BT(_depth + 1, _N, _M);
    }
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    BT(0, N, M);

    return 0;
}