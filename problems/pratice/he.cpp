// https://codeforces.com/contest/1016/problem/B
// this is shit code u noob
#include <bits/stdc++.h>
#include <string>
#define int long long
#define vi vector<int>
#define vs vector<string>
using namespace std;

// 10 3 1
// codeforces
// for
// 1 10
// codeforces
// co
// ode
// defo
// eforc
// forces
// orces
// 0

void setIO() { cin.tie(0)->sync_with_stdio(0); }
void solve() {
  int n, m, q;
  cin >> n >> m >> q;
  string s, t;
  cin >> s >> t;
  while (q--) {
    int l, r;
    cin >> l >> r;
    int c = 0;
    if (r - l + 1 < m)
      c = 0;
    else {
      string pp = s.substr(l - 1, r - l + 1); // this is fine dont' touch this
      int help_me = pp.length();
      for (int i = 0; i <= help_me - m; ++i) {
        string gay = pp.substr(i, m);
        if (gay == t) {
          c++;
          // cout << pp.substr(i,m) << '\t' << t <<'\n';
        }
      }
    }
    cout << c << '\n';
  }
}

int32_t main() {
  setIO();
  solve();
  return 0;
}
