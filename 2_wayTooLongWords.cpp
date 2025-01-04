#include <bits/stdc++.h>
using namespace std;

string checkAbbv(string str){
    string ans = "";
    int n = str.size();
    if(n > 10){
        ans += str[0] + to_string(n-2) + str[n-1];
    }
    else{
        ans = str;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        cout<<checkAbbv(str)<<endl;
    }
    return 0;
}