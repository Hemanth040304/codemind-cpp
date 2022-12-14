#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(auto i = 0 ; i < n ;i++){
        int x;
        cin>>x;
        v.emplace_back(x);
    }
    int c=0;
    vector<int>::iterator it = v.begin();
    for(auto it = v.begin()+1 ; it!=v.end();it++){
        if(*(it)>*(it-1)){
            c++;
        }
    }
    if(c+1==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}