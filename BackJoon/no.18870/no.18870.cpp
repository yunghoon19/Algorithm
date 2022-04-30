/*
    백준 알고리즘 문제 18870번 소스 코드
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> srcV(N);       // 원본 백터

    for (int i = 0; i < N; i++)
    {
        cin >> srcV[i];
    }

    vector<int> idxV(srcV);   // 색인용 백터

    sort(idxV.begin(), idxV.end()); // 정렬
    idxV.erase(unique(idxV.begin(), idxV.end()), idxV.end()); // 중복값 제거

    vector<int>::iterator iter;
    for (iter = srcV.begin(); iter != srcV.end(); iter++)
    {
        cout << lower_bound(idxV.begin(), idxV.end(), *iter) - idxV.begin() << " ";
    }

    // for (int i = 0; i < N; i++)     // 색인 벡터에서 원본 백터의 값을 찾은 후
    // {                               // 그 값의 인덱스 값 출력.
    //     for (int j = 0; j < N; j++)
    //     {
    //         if (srcV[i] == idxV[j])
    //         {
    //             cout << j << " ";
    //             break;
    //         }
    //     }
    // }

    return 0;
}