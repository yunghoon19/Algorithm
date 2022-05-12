/*
    백준 알고리즘 문제 2004번 소스 코드
*/

#include <iostream>

using namespace std;

int main()
{
    int N, M;
    long long i;
    int countT = 0, countF = 0;

    cin >> N >> M;

    for (i = 2; i <= N; i *= 2)         { countT += N / i; }
    for (i = 2; i <= (N - M); i *= 2)   { countT -= (N - M) / i; }
    for (i = 2; i <= M; i *= 2)         { countT -= M / i; }

    for (i = 5; i <= N; i *= 5)         { countF += N / i; }
    for (i = 5; i <= (N - M); i *= 5)   { countF -= (N - M) / i; }
    for (i = 5; i <= M; i *= 5)         { countF -= M / i; }

    cout << ((countT < countF) ? countT : countF);
}