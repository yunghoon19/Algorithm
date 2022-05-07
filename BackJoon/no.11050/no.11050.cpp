/*
    백준 알고리즘 문제 11050번 소스 코드
*/

#include <iostream>

using namespace std;

int Fac(int _num)
{
    if(_num == 1 || _num == 0)
    {
        return 1;
        
    }
    else
    {
        return Fac(_num - 1) * _num;
    }
 
}

int main(void)
{
    int N, K;
	cin >> N >> K;
	cout << Fac(N) / (Fac(K) * Fac(N - K));

    return 0;
}