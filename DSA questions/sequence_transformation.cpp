#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<int> res(n + 1, 1);
		n = unique(a.begin(), a.end()) - a.begin();
		a.resize(n);
		for (int i = 0; i < n; ++i) {
			res[a[i]] += 1;
		}
		res[a[0]] -= 1;
		res[a[n - 1]] -= 1;
		int ans = 1e9;
		for (int i = 0; i < n; ++i) {
			ans = min(ans, res[a[i]]);
		}
		cout << ans << endl;
    }
    return 0;
}
