#include <algorithm>
#include <cstdlib>
#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int a, b, c, d, e, f, g, h;
  cin >> a >> b;
  cin >> c >> d;
  cin >> e >> f;
  cin >> g >> h;

  int xl, yl;
  if (a == c) {
    xl = abs((b) - (d));
  }
  if (a == e) {
    xl = abs((b) - (f));
  }
  if (a == g) {
    xl = abs((b) - (h));
  }
  cout << (xl * xl) << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
