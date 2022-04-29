#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    cin>>n;
    while(n){
        if(max<n%10)
        max=n%10;
        n/=10;
    }
    cout<<max;
}