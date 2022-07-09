#include<iostream>
using namespace std;


int SumofarrayElements(int a[],int size){
    if(size==0){
        return 0;
    }
    return a[0] + SumofarrayElements(a+1,size-1);
}




int main(){
    int a[]={1,3,5,8,6};
    cout<<SumofarrayElements(a,5);
    return 0;
}