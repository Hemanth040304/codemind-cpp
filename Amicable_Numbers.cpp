#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=1,a_sum=0;i<=a/2;i++)
    {
        if(a%i==0)
        a_sum+=i;
        if(a_sum==b)
        c++;
    }
    for(int i=1,b_sum=0;i<=b/2;i++)
    {
        if(b%i==0)
        b_sum+=i;
        if(b_sum==a)
        c++;
    }
    if(c==2){
        cout<<"Amicable";
    }
    else{
        cout<<"Not Amicable";
    }
}