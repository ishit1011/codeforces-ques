#include <bits/stdc++.h>
using namespace std;

string func(string str, int n){
    return (str[0]!=str[n-1])?"Yes":"No";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        cout<<func(str,n)<<endl;
    }
    return 0;
}