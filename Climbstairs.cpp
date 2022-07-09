#include<iostream>
using namespace std;


int Climb_Stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return Climb_Stairs(n-1)+Climb_Stairs(n-2);
}

int main(){
    int n=5;
    cout<<Climb_Stairs(n);
    return 0;
}