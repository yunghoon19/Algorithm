/*
    백준 알고리즘 문제 1010번 소스 코드
*/

#include <iostream>

using namespace std;

#define MAX 31

int main(void)
{
    int T;
    int N, M;
    int DP[MAX][MAX];

    cin >> T;

    DP[0][0] = 1;

    for (int i = 1; i < MAX; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j) { DP[i][j] = 1; }
            else
            {
                DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]);
            }
        }
    }

    while (T--)
    {
        cin >> N >> M;
        cout << DP[M][N] << endl;
    }

    return 0;
}