// https://codeforces.com/problemset/problem/1/A
#include <cmath>
#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m, a, A;
  cin >> n >> m >> a;

  for (ll i = 0; i < ceil(n / a); i++) {
    if ((m - a) <= 1) {
      A += ceil(m / a);
    } else {
      A++;
    }
  }
  // if (m < a) {
  //   for (ll i = 0; i < ceil(n / a); i++) {
  //     A++;
  //   }
  // }

  return 0;
}
