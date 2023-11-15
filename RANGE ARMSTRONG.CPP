//range between palindrom


#include <bits/stdc++.h>
using namespace std;


int main() {
    int n = 15;
    int res, k, ans, c = 0;

    for (int i = 1; i <= n; i++) {
        string s =to_string(i);
        int l = s.length();
        k = i;
        ans = 0; // Reset ans to 0 for each iteration

        while (k) {
            res = k % 10;
            ans = ans + pow(res, l);
            k = k / 10;
        }
   cout<<ans<<endl;
    }
}
