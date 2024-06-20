// https://open.kattis.com/problems/flexible

#include <algorithm>
#include <vector>
#define ll long long
#define ld long double
#include <bits/stdc++.h>
using namespace std;
int n[101];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int w, p;
  cin >> w >> p;

  n[0] = 0;
  n[p+1] = w;
  for (int i = 1; i <= p; i++) {
    cin >> n[i];
  }
  // vector<int> m;
  std::set<int> m;
  for (int i = 0; i <= p + 2; i++) {
    for (int j = i+1; j <= p+2; j++) {
      // m.push_back(abs(n[i] - n[j]));
      m.insert(abs(n[j] - n[i]));
    }
  }

  for (auto &a: m) {
    if (a != 0)
    std::cout << a << ' ';
  }
  return 0;
}
