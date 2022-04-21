/*
    백준 알고리즘 문제 11729번 소스 코드
*/

#include <iostream>
#include <math.h>

using namespace std;

        // 블럭개수, 시작기둥, 목표기둥, 경유기둥
void Hanoi(int N, int start, int end, int waypoint)
{
    if (N == 1) // 남은 원판 1개일 때 재귀 탈출
    {
        printf("%d %d\n", start, end);
        return;
    }
    else
    {
        Hanoi(N - 1, start, waypoint, end);      // 1번기둥에 있는 원판 N-1개를 2번 기둥으로 이동 시킨다.
        printf("%d %d\n", start, end);
        Hanoi(N - 1, waypoint, end, start);      // 2번 기둥에 남은 원판 N-1개를 3번(목적지)기둥으로 이동 시킨다.
    }
}

int main(void)
{
    int N;
    int K;

    scanf("%d", &N);

    K = pow(2, N) - 1;

    printf("%d\n", K);

    Hanoi(N, 1, 3, 2);

    return 0;
}