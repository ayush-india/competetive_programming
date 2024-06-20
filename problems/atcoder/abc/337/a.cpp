#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t, X = 0 , Y = 0;
  cin >> t;
  while (t--) {
    int x = 0, y = 0;
    cin >> x >> y;
    X = X + x;
    Y = Y + y;
  }
  if ( X == Y)
   cout << "Draw" << '\n';
  if (X > Y)
    cout << "Takahashi" << '\n';
  if (X < Y)
    cout << "Aoki" << '\n';

  return 0;
}
