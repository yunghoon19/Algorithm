/*
    백준 알고리즘 문제 1934번 소스 코드
*/

#include <iostream>

using namespace std;

int Yacsu_Cal(int _A, int _B)
{
    for (int i = _A; i > 0; i--)
    {
        if (_A % i + _B % i == 0)
        {
            return i;
        }
    }
}

int main(void)
{
    int T;
    int A, B;

    cin >> T;

    while (T--)
    {
        cin >> A >> B;

        if (A < B)
        {
            int temp = A;
            A = B; 
            B = temp;
        }

        cout << (A * B) / Yacsu_Cal(A, B) << endl;
    }

    return 0;
}