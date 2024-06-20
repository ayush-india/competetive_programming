#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
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
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  string s1 = removeDuplicateLetters(s);
  if ((s1[0] == 'a' || s1[0] == 'b' || s1[0] == 'c') || (s1[1] == 'b' || s1[1] == 'c') || (s1[2] == 'c')) // wrg hai regex dekho
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
