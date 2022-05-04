/*
    백준 알고리즘 문제 1934번 소스 코드
    유클리드 호제법 사용
*/

#include <iostream>

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

// Least Common Multiple (최소공배수)
int LMC(int _A, int _B)
{
    return (_A * _B) / GCD(_A, _B);
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

        cout << LMC(A, B) << endl;
    }

    return 0;
}