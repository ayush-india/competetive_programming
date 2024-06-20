#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  string s;
  cin >> s;
  int numUniqeChars =
      std::unordered_set<char>(std::begin(s), std::end(s)).size();
  if (t == 1 || t == 2) {
    cout << 0 << '\n';
  }
  else {
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < s.size(); j++) {
      }
    }
  }
  return 0;
}
