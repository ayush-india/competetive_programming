#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
string removeDuplicateLetters(string s) {
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    int j = 0;
    for (j = 0; j < i; j++) {
      if (tolower(s[i]) == tolower(s[j])) // same character found
      {
        break;
      }
    }
    if (i == j) {
      ans += tolower(s[i]);
    }
  }
  return ans;
}
void solve() {
  int n,L;
  cin >> n;
  string s;
  cin >> s;
  string str = removeDuplicateLetters(s);

  cout <<str <<'\n';

  int co = 0;

  if (str[0] == 'm')
    co++;
  if (str[1] == 'e')
    co++;
  if (str[2] == 'o')
    co++;
  if (str[3] == 'w')
    co++;
  if (str.size() == 4)
    co++;

  cout << ((co == 5)? "yes":"no") << '\n';
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
