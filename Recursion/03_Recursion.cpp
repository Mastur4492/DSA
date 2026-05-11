#include<bits/stdc++.h>
using namespace std;


void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int i = 1, n;
    cin>>n;
    print(i, n);
    return 0;
}