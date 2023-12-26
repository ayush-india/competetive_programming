// #include <iostream>
// #include <vector>
// using namespace std;
//
// void solve() {
//   int a;
//   cin >> a;
//
//   vector<int> ar(a); // Using a vector instead of an array
//
//   int bg = 0, idx = 0, z_idx = 0;
//   bool is_zero = false;
//
//   for (int i = 0; i < a; i++) {
//     cin >> ar[i];
//     if (ar[i] == 0) {
//       is_zero = true;
//       z_idx = i;
//     }
//     if (ar[i] >= bg) {
//       bg = ar[i];
//       idx = i;
//     }
//   }
//
//   if (!is_zero) {
//     ar[z_idx] = ar[z_idx] + 1;
//   } else {
//     ar[idx] = ar[idx] + 1;
//   }
//
//   long long prd = 1; // Using long long to prevent overflow for larger values
//   for (int i = 0; i < a; i++)
//     prd = prd * ar[i];
//
//   cout << prd << '\n';
// }
//
// int main() {
//   ios::sync_with_stdio(false);
//   int t;
//   cin >> t;
//   while (t--) {
//     solve();
//   }
//   return 0;
// }
//
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int a = 0; a < n; a++){
            cin >> arr[a];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int curr = 1;
            for(int j = 0; j < n; j++){
                if(i == j){
                    curr *= arr[j] + 1;
                }else{
                    curr *= arr[j];
                }
            }
            ans = max(curr, ans);
        }
        cout << ans << endl;
    }
}
