#include <algorithm>
#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int a, n;
  cin >> n >> a;
  vector<int> li(n);
  for (int i = 0; i < n; i++) {
    cin >> li[i];
  }
  int sum = 0, c = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + li[i];
    if (sum >= a) {
      c += 1;
      sum = 0;
    }
  }
  cout << c << '\n';
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
