#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int n, x, y;
  cin >> n >> x >> y;
           // ^l   ^s
  if (x >= n || y >= x){
  if ((((3*x+y)/3) >= n) || (x >=2*n))
    cout << "yes" << '\n';
  else
   cout << "no" << '\n';
  }
  else
   cout << "no" << '\n';

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
