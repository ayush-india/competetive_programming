#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b,c;
  cin >> a >> b >> c;
  if (a*c > b*c)
    cout << a*c << '\n';
  else
    cout << b*c << '\n';
  return 0;
}
