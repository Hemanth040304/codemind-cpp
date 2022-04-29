#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while (n!=1)
    {
        if(n%2==0)
        n/=2;
        else if(n%3==0)
        n/=3;
        else if(n%5==0)
        n/=5;
        else{
            x++;
            break;
        }
    }
    if(x==0)
    {
        cout<<"Ugly Number";
    }
    else{
        cout<<"Not Ugly Number";
    }
}