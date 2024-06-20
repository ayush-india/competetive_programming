#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
  int x,y,z;

  cin >> x >> y >> z;

  z = z / 2;

  int j = z / (x*y);

  cout << z / (x*y) << '\n';

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
