#include<iostream>
using namespace std;


int factorial(int n){
    if(n==0){
        return 1;
    }

    int smallerpro = factorial(n-1);
    int bigpro  = n * smallerpro;
    
    return bigpro; 
}

int main(){
    int n=5;
    cout<<factorial(n);
    return 0;
}