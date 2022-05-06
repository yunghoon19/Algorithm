/*
    백준 알고리즘 문제 3036번 소스 코드
*/

#include <iostream>
#include <vector>

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
    int first;
    
    cin >> N;

    vector<int> ringArr(N);

    cin >> first;

    for (int i = 1; i < N; i++)
    {
        cin >> ringArr[i];

        int gcd = GCD(first, ringArr[i]);
        cout << first / gcd << "/" << ringArr[i] / gcd << endl;
    }

    return 0;
}