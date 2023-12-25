// https://cses.fi/problemset/task/1068/
//

#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int p;
  cin >> p;
  while (p != 1) {
    p = (p % 2 == 0)? (p/2):(3*p+1);
    cout << p << ' ';
    if (p == 1) {
      break;
    }

  }
  
  return 0;
}
