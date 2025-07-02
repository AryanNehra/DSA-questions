#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        string s; 
        cin >> s;

        vector<int> freq(26,0);
        for(char c : s) freq[c-'a']++;

        int odd_count = 0;
        for(int f : freq) if(f % 2 != 0) odd_count++;

        int rem_len = n - k;
        int allowed_odd = (rem_len % 2 == 0) ? 0 : 1;

        int min_del = odd_count - allowed_odd;

        if(min_del < 0) min_del = 0; // no deletions needed if allowed_odd > odd_count

        // Check conditions:
        // 1. Enough deletions to fix odd count
        // 2. Extra deletions must be even (pairs)
        // 3. k < n (guaranteed by input constraints)
        if(k >= min_del && (k - min_del) % 2 == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
