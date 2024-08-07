#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

//learning:- always check the edge cases


void solve(){
    string s;
    cin>>s;

    int maxi = INT_MIN;
    int cnt=1;

    for(int i=1; i<s.length(); i++){
         
         if(s[i]==s[i-1]){
            cnt++;
            maxi = max(maxi, cnt);
         }else{
            cnt=1;
         }


    }

    maxi = max(maxi, cnt);

    cout<<maxi<<endl;
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