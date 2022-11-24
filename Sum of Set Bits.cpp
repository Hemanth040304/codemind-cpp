#include <bits/stdc++.h>
using namespace std;
int Solution(int n) 
{
    long c = 0,num = 1, mod = 1e9+7;
    while(n>=num) {
        int bkt = n/num ; 
        long prev = n/(num*2);
        if(bkt%2 == 1){
            c += prev*num+n%num+1;
        } 
        else {
            c += prev*num;
        }
        num *= 2;
    }
    return c%mod;
}
int main()
{
    int t;
    cin>>t;
    for(int i = 0 , n ; i < t ; i++)
    {
        cin>>n;
        printf("%d\n",Solution(n));
    }
}
