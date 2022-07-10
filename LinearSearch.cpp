#include<iostream>
using namespace std;


int Linear_Search(int a[],int size,int index,int target){
    if(size==0){
        return -1;
    }
    if(target==a[0]){
        return index;
    }
    return Linear_Search(a+1,size-1,index+1,target);
}


int main(){
    int a[]={120,20,30,40,50};
    cout<<"Index: "<<Linear_Search(a,5,0,30);
    return 0;
}