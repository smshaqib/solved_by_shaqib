#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);



    int t;

    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int a[n];

        int result=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            result^=a[i];
        }

        if(n%2!=0){

            cout<<result<<endl;
        }
        else{
            if(result==0){
                cout<<69<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }

}
