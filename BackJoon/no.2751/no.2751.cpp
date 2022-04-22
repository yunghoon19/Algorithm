/*
    백준 알고리즘 문제 2751번 소스 코드
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    vector<int> v1;

    scanf("%d", &N);

    while (N--)
    {
        int temp;

        scanf("%d", &temp);
        v1.push_back(temp);
    }
    
    sort(v1.begin(), v1.end());

    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
    { 
        printf("%d\n", *it);
    }

    return 0;
}