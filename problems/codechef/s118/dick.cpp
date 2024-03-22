#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int n,l,r,k;
  cin >> n >> l >> r >> k;

  vector<int> N(n);
  for (int i = 0; i < n; i++) {
    cin >> N[i];
  }

  sort(N.begin(), N.end());
  int sm = 0;
  for (int i = 0; i < n; i++) {
    if (N[i] > r || N[i] <l)
      continue;
    else {
      if (k >0 && N[i] <= k){
        sm += 1;
        k = k - N[i];

      }
    }
  }

  cout << sm << '\n';

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
