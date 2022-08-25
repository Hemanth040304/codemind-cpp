#include<bits/stdc++.h>
using namespace std;
int main()
{
    int first,last;
    cin>>first>>last;
    for(int i=1;i;i++)
    {
        if((first*i)%last==0)
        {
            cout<<first*i;
            break;
        }
    }
}