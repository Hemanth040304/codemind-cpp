#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sq=n*n;
    int sum=0;
    while(sq)
    {
        sum+=sq%10;
        sq/=10;
    }
    if(n==sum)
    {
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
}