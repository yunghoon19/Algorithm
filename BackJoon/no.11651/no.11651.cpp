/*
    백준 알고리즘 문제 11651번 소스 코드
*/

#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 100000

struct Location
{
    int x, y;
};

bool Compare(Location& _l1, Location& _l2)
{
    if (_l1.x == _l2.x)
    {
        return _l1.y < _l2.y;
    }
    else
    {
        return _l1.x < _l2.x;
    }
}

int main(void)
{
    int N;
    Location *lArr;

    scanf("%d", &N);

    lArr = new Location[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &lArr[i].x, &lArr[i].y);
    }

    sort(lArr, lArr + N, Compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", lArr[i].x, lArr[i].y);
    }

    delete[] lArr;

    return 0;
}