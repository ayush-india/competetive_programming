#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;

  string inp[3][3];
  while (t--) {

    char n;

    for (int i = 0; i < 3; i++) {
      for (int  j = 0; j < 3; j++) {
        cin >> inp[i][j];
      }
    }
    cout << "output" << '\n';
    for (int i = 0; i < 3; i++) {
      for (int  j = 0; j < 3; j++) {
        cout  << inp[i][j];
      }
      cout << '\n';
    }
  }
  return 0;
}
