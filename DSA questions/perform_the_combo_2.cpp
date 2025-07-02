#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        vector<int> p(m);
        for (int i = 0; i < m; ++i) {
            cin >> p[i];
        }

        vector<int> cnt(n + 1, 0);

        // Mark ranges using difference array technique
        for (int i = 0; i < m; ++i) {
            cnt[0]++;
            cnt[p[i]]--;
        }

        // Prefix sum to get actual counts for each index
        for (int i = 1; i < n; ++i) {
            cnt[i] += cnt[i - 1];
        }

        // Add the final correct attempt
        for (int i = 0; i < n; ++i) {
            cnt[i] += 1;
        }

        // Now count frequency of each character
        vector<int> ans(26, 0);
        for (int i = 0; i < n; ++i) {
            ans[s[i] - 'a'] += cnt[i];
        }

        for (int i = 0; i < 26; ++i) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
