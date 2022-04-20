/*
    백준 알고리즘 문제 1002번 소스 코드
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int T;                  // 테스트케이스 개수
    int A[2], B[2];         // A, B의 X좌표와 Y좌표
    int R[2];               // A, B가 마린과 떨어진 거리

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d %d %d %d", &A[0], &A[1], &R[0], &B[0], &B[1], &R[1]); // 입력

        int d;      // 두 점 A, B 사이의 거리
        d = pow(A[0]-B[0], 2) + pow(A[1]-B[1], 2);

        int sub;    // 두 원의 반지름의 차
        sub = abs(R[0]-R[1]);
        sub = pow(sub, 2);

        int sum;    // 두 원의 반지름의 합
        sum = R[0]+R[1];
        sum = pow(sum, 2);

        int result = -2;
        
        if (sub + d == 0)   // A, B의 위치와 반지름이 같을 때
        {
            result = -1;
        }
        else if (sub < d && sum > d)    // 만나는 점이 두개 일 때
        {
            result = 2;
        }
        else if (sub == d || sum == d)  // 만나는 점이 하나 일 때
        {
            result = 1;
        }
        else if (sub > d || sum < d)    // 만나는 점이 없을 때
        {
            result = 0;
        }
        
        printf("%d\n", result);
    }

    return 0;
}