#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
  int a,b,c;
  cin >> a >> b >> c;
  
  if (a == b) {
    cout << c << '\n';
  }
  if (b == c) {
    cout << a << '\n';
  }
  if (a == c) {
    cout << b << '\n';
  }

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
