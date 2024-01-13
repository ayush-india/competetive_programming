#include <string>
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
  while (t--) {
    string a;
    int cou;
    getline(cin, a);
    for (int i = 0; i < 6; i++) {
      cout << a[i];
    }
    cout << '\n';
  }
  return 0;
}
