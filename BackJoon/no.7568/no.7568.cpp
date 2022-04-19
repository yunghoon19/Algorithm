/*
    백준 알고리즘 문제 7568번 소스 코드
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N;                  // 전체 사람의 수 2 <= N <= 50
    int X[50] = {0, };      // 몸무게
    int Y[50] = {0, };      // 키       10 <= x, y <= 200
    int rank;               // 등수

    scanf("%d", &N);

    if (N < 2 || N > 50) return 0; 

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &X[i], &Y[i]);
    }

    for (int i = 0; i < N; i++)
    {
        rank = 1;
        for (int j = 0; j < N; j++)
        {
            if (X[i] < X[j] && Y[i] < Y[j]) // 나보다 큰 사람 수 만큼 등수 +1
            {
                rank++;
            }
        }
        printf ("%d ", rank);
    }

    return 0;
}