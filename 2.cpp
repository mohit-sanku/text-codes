#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    char l = str2[str2.length()-1];
    int len = str1.length(), count=0;
    for(int i=0; i<len; i++){
        if(l==str1[i])
            count++;
    }
    cout<<count;
}