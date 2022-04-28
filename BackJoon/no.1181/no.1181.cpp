/*
    백준 알고리즘 문제 1181번 소스 코드
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare (string _S1, string _S2) 
{
    if (_S1.size() == _S2.size())
    {
        return _S1 < _S2;  
    } 
    else
    {
        return _S1.size() < _S2.size();
    } 
}

int main () 
{
    int N;
    string temp;
    vector<string> stringArr;
    vector<string>::iterator iter;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) 
    {
        cin >> temp;
        stringArr.push_back(temp);
    }
    
    sort(stringArr.begin(), stringArr.end(), compare);
    stringArr.erase(unique(stringArr.begin(), stringArr.end()), stringArr.end()); // 중복제거

    for (iter = stringArr.begin(); iter != stringArr.end(); iter++)
    {
        cout << *iter << endl;
    }
}