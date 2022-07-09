#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void Say_all_Digits(int n, map<int,string> m){
    if(n==0){
        return;
    }

    int digits = n%10;
    n=n/10;

    Say_all_Digits(n,m);
    cout<<m[digits]<<" ";
}

int main(){
    int n=41235;
    map<int,string> m;
    m[0]="Zero";
    m[1]="One";
    m[2]="Two";
    m[3]="Three";
    m[4]="Four";
    m[5]="Five";
    m[6]="Six";
    m[7]="Seven";
    m[8]="Eight";
    m[9]="Nine";

    Say_all_Digits(n,m);
    return 0;
}