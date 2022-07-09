#include<iostream>
using namespace std;


int fibonnaci(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int smallcase = fibonnaci(n-1)+fibonnaci(n-2);
     
    return smallcase;
}

int main(){
    int n=10;
    cout<<fibonnaci(n);
    return 0;
}