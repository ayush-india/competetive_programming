#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int p,l;
  cin >> p >> l;

  cout << (((l*100)/p) >= 75?"YES":"NO") << '\n';
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
