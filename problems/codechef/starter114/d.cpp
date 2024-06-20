//
//
//
// me to noob
//
//
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
//
// void solve() {
//   int n;
//   cin >> n;
//
//   string op, me;
//   cin >> op;
//   if (n <= 2) {
//     for (int i = 0; i < n; i++) {
//       if (op[i] == 'R')
//         me += 'P';
//       if (op[i] == 'P')
//         me += 'S';
//       if (op[i] == 'S')
//         me += 'R';
//     }
//   } else {
//     for (int i = 0; i < n; i++) {
//       // only the 2nd word will tell if the word is small of big
//       if
//       if (i == 2) {
//         me += 'P';
//       }
//       if (op[i] == 'R')
//         me += 'P';
//       if (op[i] == 'P')
//         me += 'S';
//       if (op[i] == 'S')
//         me += 'R';
//     }
//   }
//   cout << me << '\n';
// }
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
//   return 0;
// }

#include <iostream>
#include <string>
using namespace std;

string getWinningSequence(const string &moves) {
  int n = moves.length();
  int chefScore = (n + 1) / 2; // Minimum score needed for Chef to win
  int chefWins = 0;

  // Count the occurrences of each move made by Chefina
  int countR = 0, countP = 0, countS = 0;
  for (char move : moves) {
    if (move == 'R')
      countR++;
    else if (move == 'P')
      countP++;
    else if (move == 'S')
      countS++;
  }

  // Calculate the number of times Chef needs to win
  int chefNeededR = chefScore - countR;
  int chefNeededP = chefScore - countP;
  int chefNeededS = chefScore - countS;

  // Determine the lexicographically smallest winning sequence for Chef
  string result = "";
  for (char move : moves) {
    if (move == 'R' && chefNeededR > 0) {
      result += 'P';
      chefNeededR--;
      chefWins++;
    } else if (move == 'P' && chefNeededP > 0) {
      result += 'S';
      chefNeededP--;
      chefWins++;
    } else if (move == 'S' && chefNeededS > 0) {
      result += 'R';
      chefNeededS--;
      chefWins++;
    } else {
      result += move; // Chef doesn't need to win this round
    }
  }

  // If Chef already has enough wins, fill the rest with the lexicographically
  // smallest moves
  while (chefWins < chefScore) {
    if (chefNeededR > 0) {
      result += 'P';
      chefNeededR--;
    } else if (chefNeededP > 0) {
      result += 'S';
      chefNeededP--;
    } else if (chefNeededS > 0) {
      result += 'R';
      chefNeededS--;
    }
    chefWins++;
  }

  return result;
}

int main() {
  int t;
  cin >> t;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  while (t--) {
    int n;
    cin >> n;
    string moves;
    cin >> moves;

    string result = getWinningSequence(moves);
    cout << result << endl;
  }

  return 0;
}
