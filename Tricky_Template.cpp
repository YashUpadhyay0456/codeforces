#include<bits/stdc++.h>
using namespace std;



string ans(int n , string a, string b, string c){

    // string a = "YES";
    for(int i = 0 ; i < n ; i ++){
            if((a[i]!=c[i]) && (b[i]!=c[i])){
                
                
                return  "YES"; 
                
            }
       }
       return "NO";
}



int main (){
    int t ;
    cin>> t;
    while (t--)
    {
       int n ;
       cin>>n ;
       string a, b,c;
       cin>>a>>b>>c;

       cout<<ans(n,a,b,c)<<endl;;

    }
    
}
