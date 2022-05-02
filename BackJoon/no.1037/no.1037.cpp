/*
    백준 알고리즘 문제 1037번 소스 코드
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int iMax = 1;
    int iMin = 1000001;

    cin >> N;

    while (N--)
    {
        int temp;
        cin >> temp;

        if (temp > iMax) { iMax = temp; }
        if (temp < iMin) { iMin = temp; }
    }

    cout << iMax * iMin << endl;

    return 0;
}