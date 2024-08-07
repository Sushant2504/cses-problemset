#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long


void solve(){
    int n;
    cin>>n;

    vector<int> v(n-1);

    ff(n-1) cin>>v[i];

    sort(v.begin(), v.end());

    int ans = v[n-1];

    for(int i=0; i<n; i++){
         if(v[i]!=(i+1)){
            ans = i+1;
            break;
         }

    }


    cout<<ans<<endl;

}


signed main(){
	// ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    solve();

}