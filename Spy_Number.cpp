#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,pro=1;
    while(n)
    {
        sum+=n%10;
        pro*=n%10;
        n/=10;
    }
    if(pro==sum){
        cout<<"Spy Number";
    }
    else{
        cout<<"Not Spy Number";
    }
}