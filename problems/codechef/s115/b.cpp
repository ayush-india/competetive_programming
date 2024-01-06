#include <cmath>
#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int n;
  cin >> n;

  if (n == 1 )
  cout << "1"<<" "<< "1" <<'\n';
  else{
    if (n % 2 == 0)
  cout << (int(n/2))<<" "<< n <<'\n';
    else
  cout << (int(n/2)+1)<<" "<< n <<'\n';
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
