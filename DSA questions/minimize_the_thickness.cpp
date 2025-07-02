#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<long long> pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        int ans=n;
        long long total_sum=pre[n-1];
        for(int num_segments = 1; num_segments <= n; num_segments++){
            if(total_sum % num_segments != 0) continue;
            
            long long target_sum = total_sum / num_segments;
            int max_length = 0;
            int current_length = 0;
            long long current_sum = 0;
            bool valid = true;
            
            for(int i = 0; i < n; i++){
                current_sum += a[i];
                current_length++;
                
                if(current_sum == target_sum){
                    max_length = max(max_length, current_length);
                    current_sum = 0;
                    current_length = 0;
                } else if(current_sum > target_sum){
                    valid = false;
                    break;
                }
            }
            
            if(valid && current_sum == 0){
                ans = min(ans, max_length);
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}