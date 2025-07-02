#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int gcd_even = 0, gcd_odd = 0;

        // Compute GCD of even and odd indices
        for (int i = 0; i < n; i += 2)
            gcd_even = gcd(gcd_even, a[i]);

        for (int i = 1; i < n; i += 2)
            gcd_odd = gcd(gcd_odd, a[i]);

        bool valid_even = true, valid_odd = true;

        // Check if gcd_odd divides any even index
        for (int i = 0; i < n; i += 2) {
            if (a[i] % gcd_odd == 0) {
                valid_odd = false;
                break;
            }
        }

        // Check if gcd_even divides any odd index
        for (int i = 1; i < n; i += 2) {
            if (a[i] % gcd_even == 0) {
                valid_even = false;
                break;
            }
        }

        if (valid_odd && gcd_odd != 0)
            cout << gcd_odd << endl;
        else if (valid_even && gcd_even != 0)
            cout << gcd_even << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
