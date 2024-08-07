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
   
    vector<int> a(n);

    int i=1;
    int j;

    if(n%2==0){
       j = n;  
    }else{
        j = n-1;
    }

    bool f = true;

    for(int k=0; k<n; k++){
          if(f){
             a[k] = i;
             i++;
          }else{
             a[k] = j;
             j--;
          }

          f =!f;
    }

    if(n%2!=0){
         int mid = (0+n)/2;
         a[mid] = n;

    }

    ff(n) cout<<a[i]<<" ";

    cout<<endl;
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
