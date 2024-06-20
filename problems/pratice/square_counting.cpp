// https://www.codechef.com/COSR2023/problems/BOARD_COUNT
// explaintion comming soon!
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int p, s;
    s = 0;
    cin >> p;
    for (int j = 1; j <= p; j++) {
      if (j == 1) {
        s += (p * p);
        continue;
      }
      if (j % 2 == 1) {
        int no_of_sq_left_row = p - j + 1;
        s += no_of_sq_left_row * no_of_sq_left_row;
      }
    }
    cout << s << '\n';
  }
}
