#include<iostream>

using namespace std;

void base3(int n){
    if(n>0){
        int r = n%3;
        cout<<r;
        n=n/3;  
        base3(n);
    }
}

int main(){
    int n;
    cin>>n;
    base3(n);
    return 0;
}