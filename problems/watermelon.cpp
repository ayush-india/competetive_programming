// https://codeforces.com/problemset/problem/4/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string rs = (n % 2 == 0)? ( n == 2) ? "NO": "YES": "NO";
  cout << rs << "\n";
  return 0;
}
