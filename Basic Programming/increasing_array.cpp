#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long


//learning:- always check for the long long instead of int for runtime error

void solve(){
    int n;
    cin>>n;

    vector<int> v(n);

    ff(n) cin>>v[i];

    ll ans = 0;

    for(int i=1; i<n; i++){
         if(v[i] < v[i-1]){
            ans += abs(v[i]-v[i-1]);
            v[i] = v[i-1];
         }
    }

    cout<<ans<<endl;
}


int main(){
	// ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    solve();

}