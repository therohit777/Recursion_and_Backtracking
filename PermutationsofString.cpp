#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

void Permutations(string a,int index,vector<string>& ans){
    if(index==a.length()){
        ans.push_back(a);
        return;
    }

    for(int i=index;i<a.length();i++){
        swap(a[index],a[i]);
        Permutations(a,index+1,ans);

        swap(a[index],a[i]);//Backtrack
    } 
}

int main(){
    string a = "abc";

    string output;
    vector<string> ans;
    Permutations(a,0,ans);

    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
          cout<<j<<" ";
        }
        cout<<endl; 
    }
    return 0;
}