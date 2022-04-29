/*
    백준 알고리즘 문제 10814번 소스 코드
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, string> _m1, pair<int, string> _m2)
{
  return _m1.first < _m2.first;
}

int main()
{
  int n;
  scanf("%d", &n);
  vector<pair<int, string>> member(n);

  for (int i = 0; i < n; i++)
  {
    cin >> member[i].first >> member[i].second;
  }

  stable_sort(member.begin(), member.end(), compare);

  for (int i = 0; i < n; i++)
  {
    cout << member[i].first << " " << member[i].second << "\n";
  }
  return 0;
}