#include<bits/stdc++.h>
#define ll long long
#define VI vector<int>
#define YES cout<<"YES\n";
#define yes cout<<"yes\n";
#define NO cout<<"NO\n";
#define no cout<<"no\n";
#define endl "\n";

using namespace std;

void solve( ){


}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
//
//    int t;
//    cin>>t;
//
//    while(t--){
//
//        solve();
//    }

    string s;
    cin>>s;

    int c=1;

    for(int i=1; i<s.length(); i++){

        if(s[i]>='A' && s[i]<='Z'){
            c++;
        }
    }

    if(c==s.length()){

        for(int i=0; i<s.length(); i++){


            if(s[i]>='A' && s[i]<='Z'){

                cout<<(char)(s[i]+32);
            }
            else{
                cout<<(char)(s[i]-32);
            }
        }

    }
    else{

        cout<<s<<endl;
    }
}

