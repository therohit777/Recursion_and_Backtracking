#include<iostream>
using namespace std;


int Powerof2n(int n){
    if(n==0){
        return 1;
    }

    int smallerpro = Powerof2n(n-1);
    int bigpro  = 2 * smallerpro;
    
    return bigpro; 
}

int main(){
    int n=5;
    cout<<Powerof2n(n);
    return 0;
}