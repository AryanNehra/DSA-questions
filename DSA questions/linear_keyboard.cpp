#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        int s=b.size();
        vector<int> temp(s,0);
        for(int i=0;i<s;i++){
            for(int j=0;j<26;j++){
                if(b[i]==a[j]){
                    temp[i]=j+1;
                    break;
                }
            }
        }
        int sum=0;
        for(int i=1;i<s;i++){
            sum+=abs(temp[i]-temp[i-1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}