#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Write your solution here
    int t,n;
    string x;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>x;
        int len = x.length();
        bool possible = true;
        if(n%2!=0){
            if(x[0]=='b'){
                cout<<"NO\n";
                continue;
            }
            else{
                for(int i=1;i<len-1;i+=2){
                    if(x[i]==x[i+1]&&x[i]!='?'){
                        possible = false;
                        break;
                    }
                }
            }
        }
        else{
            for(int i=0;i<len-1;i+=2){
                    if(x[i]==x[i+1]&&x[i]!='?'){
                        possible = false;
                        break;
                    }
            }
        }
        if(possible)
        cout<<"YES\n";
        else cout<<"NO\n";
    }


}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
