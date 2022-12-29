#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    for(int i = 0 ; i < 3 ; i++){
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<n<<rev;
}