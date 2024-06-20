#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

bool is_de(long double n) {
  if (ceil(n) == floor(n))
    return true;
  else
    return false;
}
void solve() {
  int n;
  cin >> n;

  double sum = 0;
  vector<double> a(n); // Using a vector instead of an array

  for (int i = 0; i < n; i++) {
    cin >> a[i]; // ask if 2 loops will chagen the time compe.. ufds 2024
    sum += a[i];
  }

  if (sum > 0) {
    long double help = sqrt(sum);
    if (is_de(help))
      cout << "yes" << '\n';
    else
      cout << "no" << '\n';
  }
  else {
    cout << "no" << '\n';
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
