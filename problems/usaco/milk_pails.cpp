// https://usaco.org/index.php?page=viewproblem2&cpid=615
#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x,y,m;
  cin >> x >> y >> m;
  for(int X = 0; X <= m; X++) {
    if(X*x < m) {break;}
    for(int Y = 0; Y <=m; Y++)
    {
      int mx = X*x + Y*y;
      int close = max(close, mx);
    }
  }
  cout << &close;
  return 0;
}
