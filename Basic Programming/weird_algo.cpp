#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ff(n) for(int i=0; i<n; i++)
#define ff1(n) for(int i=1; i<n; i++)
#define ll long long

// learning:-  always keep eye on time and space complexity.......
void solve(){
	ll n;
	cin>>n;
	
    cout<<n<<" ";
	
	while(n!=1){
		if(n%2==0){
			n /= 2;
			cout<<n<<" ";
		}else{
			n = (n*3)+1;
			cout<<n<<" ";
		}
		
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