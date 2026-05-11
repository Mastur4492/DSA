#include<bits/stdc++.h>
using namespace std;


int print(int n){
    if(n == 0) return 0;
    return n + print(n-1);

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n =3;
    // cin>>n;
    cout<<print(n);
    return 0;
}