#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<char>s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    vector<int>fq(26,0);
    for(int i=0; i<n; i++){
        fq[int(s[i])-int('a')]++;
    }
    int mini = 0;
    int maxi = 0;
    for(int i=0; i<26; i++){
        if(fq[i]>fq[maxi]) maxi = i;
    }
    mini = maxi;
    for(int i=0; i<26; i++){
        if(fq[i]<fq[mini] && fq[i]>0) mini = i;
    }
    if(maxi == mini ){
        for(int i=0; i<26; i++){
            if(i != mini && fq[i] == fq[mini]){
                mini = i;
                break;
            }
        }
    }
    maxi += 97;
    mini += 97;
    char with = char(maxi);
    char whom = char(mini);
    for (int i=0; i<n; i++){
        if(s[i] == whom){
            s[i] = with;
            break;
        } 
    }
    for(int i=0; i<n; i++){
        cout << s[i];
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