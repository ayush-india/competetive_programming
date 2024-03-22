#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
bool comp(int a, int b) { return (a < b); }
using namespace std;
void solve() {
  int n;
  cin >> n;
  int l = 1;
  int r = 1e9;
  int s = 0;
  vector<int> no_eq;
  while (n--) {
    int a, x;
    cin >> a >> x;
    if (a == 1)
      l = max(l, x);
    if (a == 2)
      r = min(r, x);
    if (a == 3)
      no_eq.push_back(x);
  }
  for (int x : no_eq)
    if (x>= l and x<=r)
      so++;
  cout << max(,0) <<'\n';
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
