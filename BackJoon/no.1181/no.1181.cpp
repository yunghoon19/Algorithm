/*
    백준 알고리즘 문제 1181번 소스 코드
*/

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

struct CString
{
    char word[51];
    int length;
};

bool Compare(CString& _S1, CString& _S2)
{
    if (_S1.length == _S2.length)
    {
        return _S1.word < _S2.word;
    }
    
    return _S1.length < _S2.length;
}

int main(void)
{
    int N;
    CString* stringArr;

    scanf("%d", &N);

    stringArr = new CString[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", &stringArr[i].word);
        stringArr[i].length = strlen(stringArr[i].word);
    }

    sort(stringArr, stringArr + N, Compare);

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            
        }
    }

    printf("=================\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", stringArr[i].word);
    }

    return 0;
}