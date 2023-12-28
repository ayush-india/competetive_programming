#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a[1000000];
  int n;
  cin >> n;

  int c = 0;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++) {
  c = 0;
    for (int j = 0; j < n; j++) {
      if (a[j]< a[i]) {
        c++;
        a[j] = 0;
      }
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
