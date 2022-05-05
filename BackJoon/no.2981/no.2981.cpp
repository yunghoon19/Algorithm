/*
    백준 알고리즘 문제 2981번 소스 코드
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Greatest Common Divisor (최대공약수)
int GCD(int _A, int _B)
{
    if (!_B)
    {
        return _A;
    }

    return GCD(_B, _A % _B);
}

int main(void)
{
    int N;
    int result_GCD;

    scanf("%d", &N);

    vector<int> iArr(N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &iArr[i]);
    }
    sort(iArr.begin(), iArr.end());

    result_GCD = iArr[1] - iArr[0];

    for (int i = 1; i < N - 1; i++)
    {
        result_GCD = GCD(result_GCD, iArr[i + 1] - iArr[i]);
    }

    for (int i = 2; i <= result_GCD / 2; i++)
    {
        if (!(result_GCD % i))
        {
            printf("%d ", i);
        }
    }
    printf("%d", result_GCD);

    return 0;
}