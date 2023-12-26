#include <bits/stdc++.h>
using namespace std;

string a;
void solve() {
  cin >> a;
  if (a[1] == 'c' && a[0] == 'b')
    cout << "no" << '\n';
  else if (a[1] == 'a' && a[0] == 'c')
    cout << "no" << '\n';
  else 
    cout << "yes" << '\n';

}
int main() {
  ios::sync_with_stdio(false);
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
