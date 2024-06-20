// https://usaco.org/index.php?page=viewproblem2&cpid=855
#include <iostream>
#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  short c1, c2, c3, m1, m2, m3;
  cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 3; j++) {
      if (j == 1) {
        if ((m1+m2) > c2) {
          m1 = m1 - m2;
          m2 = c2;
        } else {
          m1 = 0;
          m2 = m1 + m2;
        }
      }
      if (j == 2) {
        if ((m2 +m3)> c3) {
          m2 = m2 - m3;
          m2 = c2;
        } else {
          m2 = 0;
          m3 = m2 + m3;
        }
      }
      if (j == 3) {
        if ((m3 +m1) > c1) {
          m3 = m3 - m1;
          m1 = c1;
        } else {
          m3 = 0;
          m1 = m3 + m1;
        }
      }
    }
    cout  << m1 << m2 << m3;
  }
  return 0;
}
