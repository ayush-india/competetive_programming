#define ll long long
#define ld long double
#include <bits/stdc++.h>
#include "math.h"
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t; int t1 = t;
  int z = 0.0;
  int i = 0;
  for( i = 0; i <= t; i++){

    z = z + (int)pow(2, i); if (z > t1) {break;}

  }
  cout << i+1;
  return 0;
}
