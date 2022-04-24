/*
    백준 알고리즘 문제 2108번 소스 코드
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#define MAX_VALUE 8001

int Average(int* _arr, int _size)      // 산술 평균
{
    int sum = 0;

    for (int i = 0; i < _size; i++)
    {
        sum += _arr[i];
    }

    float result = sum / (float)_size;

    return (int)round(result);
}

int ValueCenter(int* _arr, int _size)  // 중앙값
{
    return _arr[_size/2];
}

int MaxCount(int* _arr)     // 최빈값
{
    int maxCount = *max_element(_arr, &_arr[MAX_VALUE]);
    int result;
    int check = 0;

    for (int i = 0; i < MAX_VALUE; i++)
    {
        if (_arr[i] == maxCount)
        {
            check++;
            result = i;
        }

        if (check == 2)
        {
            break;
        }
    }

    return result - 4000;
}

int ValueScope(int* _arr, int _size)   // 범위
{
    int max = -4001;
    int min = 4001;

    for (int i = 0; i < _size; i++)
    {
        if (_arr[i] > max)
        {
            max = _arr[i];
        }
        
        if (_arr[i] < min)
        {
            min = _arr[i];
        }
    }

    return max - min;
}

int main(void)
{
    int N;
    int* arr = new int[500000]();
    int* arr2 = new int[MAX_VALUE]();

    scanf("%d", &N);

    if (N % 2 == 0) { return 0; }

    int idx;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        
        idx = arr[i];
        arr2[idx + 4000]++;
    }
    sort(arr, &arr[N]);

    printf("%d\n", Average(arr, N));
    printf("%d\n", ValueCenter(arr, N));
    printf("%d\n", MaxCount(arr2));
    printf("%d\n", ValueScope(arr, N));

    return 0;
}