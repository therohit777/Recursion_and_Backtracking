#include<iostream>
using namespace std;


int Binary_Search(int a[],int low,int high,int target){
    if(low<=high){
        int mid = low+(high-low)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
            return Binary_Search(a,low,mid-1,target);
        }
        else{
            return Binary_Search(a,mid+1,high,target);
        }
    }
    return -1;
}


int main(){
    int a[]={10,20,30,40,50,120};
    cout<<"Index: "<<Binary_Search(a,0,5,40);
    return 0;
}