//https://atcoder.jp/contests/abc333/tasks/abc333_a
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t, T;
  string s;
  cin >> t;
  T = t;
  while (t--) {
    s += to_string(T);
  }
  cout << s << '\n';
  return 0;
}
