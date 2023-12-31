#define ll long long
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<long> getAllFactors(ll n) {
  vector<long> factors;
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      factors.push_back(i);
      if (i != n / i) {
        factors.push_back(n / i);
      }
    }
  }
  return factors;
}
void solve() {
  long long a, b;
  cin >> a >> b;

  vector<long> can_be;

  can_be = getAllFactors(a * b);

  long len = can_be.size();
  for (long  i = 0; i < len; i++) {
    cout << can_be[i] << '\n';
  }
  cout << '\n';
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
