// https://atcoder.jp/contests/abc353/tasks/abc353_b
#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  int a[100];
  cin >> n >> k;
  for( int i = 0 ; i < n ; i ++) {
    cin >> a[i];
  }
  int emt_s = k;
  int trip = 0;
  for( int i = 0 ; i < n ; i ++) {
    if (a[i] > emt_s) {
      emt_s = k - a[i]; trip ++; 
    }
    else {
      emt_s -= a[i];
    }
  }
  cout << trip+1;
  return 0;
}
