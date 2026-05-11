#include<bits/stdc++.h>
using namespace std;


void print(int i, int n){
    if(i>n) return;
    print(i+1,n);
    cout<<i<<endl;

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    print(1, n);
    return 0;
}