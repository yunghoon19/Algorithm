/*
    백준 알고리즘 문제 1018번 소스 코드
*/

#include <iostream>

using namespace std;

char chess_Board[250];

// 검은색이 먼저 나올 때 체스판 모양
char blackFirst[64]
{
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
};
 
// 흰색이 먼저 나올 때 체스판 모양
char whiteFirst[64]
{
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
};

int Board_Check(int _X, int _Y)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess_Board[i])
            {
                
            }
        }
    }
}

int main(void)
{
    int N, M;
    int result;

    scanf("%d %d", &N, &M);

    int i, j;
    for (i = 0; i < N * M; i++)
    {
        scanf("%d", &chess_Board[i]);
    }

    for (i = 0; i < N - 7; i++)
    {
        for (j = 0; j < M - 7; j++)
        {
        }
    }

    return 0;
}