// https://atcoder.jp/contests/abc332/tasks/abc332_a
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solve() {
  int p, q;
  cin >> p >> q;

  return q * p;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, s , k;
  int sum = 0;
  cin >> n >> s >> k;
  while (n--) {
    int gay = solve();
    sum += gay;
  }
  if (sum >= s)
    cout << (sum) << '\n';
  else
    cout << (sum + k) << '\n';
  return 0;
}
