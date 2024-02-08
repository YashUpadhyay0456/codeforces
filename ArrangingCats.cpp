#include<bits/stdc++.h>
using namespace std;


int main (){
    int t ;
    cin>> t;
    while (t--)
    {
       int n ;
       cin>>n ;
       string s ,f;
       cin>>s>>f;
       int mc =0;
       int rc =0;


       for(int i = 0 ; i < n ; i++ ){
        if(s[i]!=f[i]){
            if(s[i]=='0'){
                mc++;
            }
            else{
                rc++;
            }
        }
       }
       cout<<max(rc,mc)<<endl;

    }
    
}
