/*
    백준 알고리즘 문제 11051번 소스 코드
*/

#include <iostream>

using namespace std;

#define MAX 1001

//점화식 DP[N][K] =DP[N-1][K-1] + DP[N-1][K]

int main(void)
{
    int N, K;
    int DP[MAX][MAX];
    
    cin >> N >> K;

    DP[0][0] = 1;

    for (int i = 1; i < MAX; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j) { DP[i][j] = 1; }
            else
            {
                DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]) % 10007;
            }
        }
    }

    cout << DP[N][K];

    return 0;
}