#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = INT_MAX;

        for (int da = -1; da <= 1; ++da) {
            for (int db = -1; db <= 1; ++db) {
                for (int dc = -1; dc <= 1; ++dc) {
                    int na = a + da;
                    int nb = b + db;
                    int nc = c + dc;

                    int dist = abs(na - nb) + abs(na - nc) + abs(nb - nc);
                    ans = min(ans, dist);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
