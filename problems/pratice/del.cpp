#include <string>
#define ll long long
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string a = "abacabadabacaba";
  int l, r;
  l = 2, r = 14;
  cout << a.substr(l-1, r);
  return 0;
}
