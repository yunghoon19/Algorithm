/*
    백준 알고리즘 문제 10989번 소스 코드
*/

#include <iostream>

using namespace std;

#define MAX 10001

int main(void)
{
    int arr[MAX] = {0, };
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int idx = 0;
        scanf("%d", &idx);
        arr[idx]++;
    }

    for (int i = 1; i < MAX; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}