#include <bits/stdc++.h>
using namespace std;

void solve(){

int n;
cin>>n;

if(n<5){
    cout << -1 << endl;
    return;
}

int even;

if(n%2==1){
    for(int i=2; i<=n; i+=2){
        if((n+i) % 3 == 0){
            even = i;
        }
    }
}
else{
    for(int i=2; i<=n; i+=2){
        if((n-1+i) % 3 == 0){
            even = i;
        }
    }
    
}
for(int i=1; i<=n; i+=2){
    
    cout << i << " ";
}
cout << even << " ";

for(int i=2; i<n; i+=2){
    if (i==even) continue;
    cout << i << " ";
}
cout << endl;   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}