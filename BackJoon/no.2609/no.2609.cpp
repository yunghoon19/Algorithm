/*
    백준 알고리즘 문제 2609번 소스 코드
*/

#include <iostream>

using namespace std;

int main(void)
{
    int A, B;

    int yacsu_Max, besu_Min;

    cin >> A >> B;

    if (A < B)          // A >= B 를 항상 유지
    {
        int temp = A;
        A = B;
        B = temp;
    }

    /*
        A, B를 A~1로 나눠가면서
        A, B 모두 나누어 떨어지는 숫자를 찾는다.
    */
    for (int i = A; i > 0; i--)
    {
        if (A % i + B % i == 0)
        {
            yacsu_Max = i;
            break;
        }
    }

    // A, B 의 곱 / A, B 의 최대공약수 = A, B 의 최소공배수
    besu_Min = (A * B) / yacsu_Max; 

    cout << yacsu_Max << endl;
    cout << besu_Min << endl;
    
    return 0;
}