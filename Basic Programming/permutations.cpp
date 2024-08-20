#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

int n;


void solve(){
     cin>>n;

     if(n==1) cout<<1<<endl;
     else if(n<=3) cout<<"NO SOLUTION"<<endl;
     else{
        for(int i=2; i<=n; i+=2)
           cout<<i<<" ";
        for(int i=1; i<=n; i+=2){
            cout<<i<<" ";
        }   cout<<endl;
     }


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
