#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int t, n, m;
string solve(string S) {
  int x;
  cin >> x;
  x--;
  x = min(x, m - x - 1);

  string s = S;
  if (s[x] == 'B')
    s[x] = 'A';
  else
    s[m - x - 1] = 'A';

  return s;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  while (t--) {

    cin >> n >> m;
    string s(m, 'B');
    string p = "";
    while (n--) {
      p = solve( s);
    }

    cout << p << "\n";
  }
}
