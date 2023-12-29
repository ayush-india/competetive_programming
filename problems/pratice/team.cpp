// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  int cu = 0;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c;

    d = 0;
    if (b == 1)
      d++;
    if (c == 1)
      d++;
    if (a == 1)
      d++;
    if (d == 2 || d == 3)
      cu++;
  }
  cout << cu << '\n';
  return 0;
}
