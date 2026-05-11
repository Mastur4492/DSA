#include<bits/stdc++.h>
using namespace std;


void print(int i, int n){
    if(i>n) return;
    cout<<"Mastur"<<endl;
    print(i+1,n);

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    print(1,3);
    return 0;
}