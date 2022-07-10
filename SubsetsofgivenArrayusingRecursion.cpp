#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

void Subsets(vector<int> a,int index,vector<int> output,vector<vector<int>>& ans){
    if(index>=a.size()){
        ans.push_back(output);
        return;
    }

    Subsets(a,index+1,output,ans);

    output.push_back(a[index]);
    Subsets(a,index+1,output,ans); 
}

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    vector<int> output;
    vector<vector<int>> ans;
    Subsets(a,0,output,ans);

    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
          cout<<j<<" ";
        }
        cout<<endl; 
    }
    return 0;
}