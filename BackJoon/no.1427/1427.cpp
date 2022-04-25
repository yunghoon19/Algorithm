/*
    백준 알고리즘 문제 1427번 소스 코드
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int sortN[10] = {0, };

    scanf("%d", &N);

    while (N > 0)
    {
        sortN[N % 10]++;
        N /= 10;
    }

    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < sortN[i]; j++)
        {
            printf("%d", i);
        }
    }

    return 0;
}