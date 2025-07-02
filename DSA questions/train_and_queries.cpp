#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> u(n);
        for (int i = 0; i < n; i++) {
            cin >> u[i];
        }

        vector<pair<int, int>> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i].first >> a[i].second;
        }

        map<int, int> first_occurrence;
        map<int, int> last_occurrence;

        for (int i = 0; i < n; ++i) {
            if (first_occurrence.find(u[i]) == first_occurrence.end()) {
                first_occurrence[u[i]] = i;
            }
            last_occurrence[u[i]] = i;
        }

        for (auto& ele : a) {
            int start = ele.first;
            int end = ele.second;

            if (first_occurrence.count(start) && last_occurrence.count(end) && first_occurrence[start] <= last_occurrence[end]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
