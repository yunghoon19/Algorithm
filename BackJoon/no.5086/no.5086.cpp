/*
    백준 알고리즘 문제 5086번 소스 코드
*/

#include <iostream>

using namespace std;

int main(void)
{
    int a, b;

    while (true)
    {
        cin >> a >> b;

        if (a + b != 0)
        {
            // 첫번째 숫자가 두번째 숫자의
            if (b % a == 0)         // 약수
            {
                cout << "factor" << endl;
            }
            else if (a % b == 0)    // 배수
            {
                cout << "multiple" << endl;
            }
            else                    // 둘 다 아님
            {
                cout << "neither" << endl;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}