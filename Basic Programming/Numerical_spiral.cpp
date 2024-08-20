#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

int n, a, b, c, d;
ll x, y;

ll solve(){
     cin>>x>>y;

     ll l = max(x, y)-1;

     if(l&1){
         if(x<y) return l*1 + x;
         else return l*1+2*l-y+2;
     }else{
         if(x < y) return l*l+2*l-x+2;
         else return l*l + y;
     }


}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
       cout<<solve()<<endl;
    }

}
