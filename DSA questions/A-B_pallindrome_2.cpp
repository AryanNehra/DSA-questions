#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        int n = (int)s.size();

        // Step 1: Fix pairs where one side is known and other is '?'
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;
            if (s[i] == '?' && s[j] != '?') {
                s[i] = s[j];
            } else if (s[i] != '?' && s[j] == '?') {
                s[j] = s[i];
            } else if (s[i] != '?' && s[j] != '?' && s[i] != s[j]) {
                // conflict, impossible to form palindrome
                s = "-1";
                break;
            }
        }

        if (s == "-1") {
            cout << -1 << "\n";
            continue;
        }

        // Step 2: Count zeros and ones after fixing forced pairs
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else if (c == '1') count1++;
        }
        a -= count0;
        b -= count1;

        if (a < 0 || b < 0) {
            cout << -1 << "\n";
            continue;
        }

        // Step 3: Fill remaining pairs of '??'
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;
            if (s[i] == '?' && s[j] == '?') {
                if (a >= 2) {
                    s[i] = '0';
                    s[j] = '0';
                    a -= 2;
                } else if (b >= 2) {
                    s[i] = '1';
                    s[j] = '1';
                    b -= 2;
                } else {
                    s = "-1";
                    break;
                }
            }
        }

        if (s == "-1") {
            cout << -1 << "\n";
            continue;
        }

        // Step 4: If length is odd, fill middle character if '?'
        if (n % 2 == 1 && s[n / 2] == '?') {
            if (a > 0) {
                s[n / 2] = '0';
                a--;
            } else if (b > 0) {
                s[n / 2] = '1';
                b--;
            } else {
                s = "-1";
            }
        }

        // Step 5: Check if counts match
        if (a != 0 || b != 0) {
            s = "-1";
        }

        cout << s << "\n";
    }
    return 0;
}
