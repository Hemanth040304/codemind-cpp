#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=1;
    cin>>n;
    while(a*a+1<=n)
    {
        if(a*(a+1)==n)
        {
            cout<<"YES";
            break;
        }
        a++;
    }
    if (a*(a+1)!=n)
    {
        cout<<"NO";
    }
}