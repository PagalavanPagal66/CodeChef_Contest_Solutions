#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind;
    int mini=INT_MAX;
    int a,b;
    for(int i=1;i<n-1;i++){
        int dif1=abs(arr[i]-arr[i-1]);
        int dif2=abs(arr[i]-arr[i+1]);
        int maxi=max(dif1,dif2);
        if(maxi<mini){
            ind=i;
            mini=maxi;
            a=dif1;
            b=dif2;
        }
    }
    if(abs(arr[0]-arr[1])<mini){
        mini=abs(arr[0]-arr[1]);
        ind=0;
    }
    if(abs(arr[n-1]-arr[n-2])<mini){
        ind=n-1;
    }
    if(ind==0){
        cout<<abs(arr[0]-arr[1])<<endl;
        return;
    }
    if(ind==n-1){
        cout<<abs(arr[n-1]-arr[n-2])<<endl;
        return;
    }
    cout<<max(a,b)<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
