#include <iostream>

using namespace std;

int main(void)
{
    int arr[8] = {0, };

    arr[-3] = 1;

    for (int i = 0; i < 8; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }

    return 0;
}