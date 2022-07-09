#include<iostream>
using namespace std;


// bool isSorted(int a[],int size){
//    if(size==0){
//     return true;
//    }
   
//    if(a[size]<a[size-1]){
//     return false;
//    }
//    return isSorted(a,size-1);
// }

bool isSorted(int a[],int last){
    if(a[0]== last){
        return true;
    }

    if(a[0]>a[1]){
        return false;
    }
    
    return isSorted(a+1,last);
}




int main(){
    int a[]={1,3,5,8,6};
    cout<<isSorted(a,a[4]);
    return 0;
}