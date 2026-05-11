#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n<=1) return n;
    int last = f(n-1);
    int secondLast = f(n-2);
    return last + secondLast;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << f(4);
    return 0;
}