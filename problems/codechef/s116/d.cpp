#include <algorithm>
#define ll long long
#define l long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve() {
  int n = 0, m = 0;
  cin >> n >> m;
  vector<int> A;
  vector<int> B;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }
  sort(A.begin(), A.end());
  for (int i = 0; i < m; i++) {
    if (B[i] == 1)
      continue;
    else {
      int st = A.size() - B[i] - 1;
      int en = A.size() - 1;
      vector<int> sub_arr(B[i]);
      copy(st, en, sub_arr.begin());
      for (int j = 0; i < B[i]; i++) {
        A[A.size() - 1 - j] = sub_arr[j];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << A[i];
  }
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
