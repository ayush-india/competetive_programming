#include <bits/stdc++.h>
using namespace std;

int a, b;
void solve() {

  cin >> a;
  int ar[a];
  for (int i = 0; i < a; i++)
    cin >> ar[i];
  for (int i = 0; i < a; i++)
    cout << ar[i];
}
int main() {
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
