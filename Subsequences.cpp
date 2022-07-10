#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

void Subsets(string a,int index,string output,vector<string>& ans){
    if(index>=a.length()){
        ans.push_back(output);
        return;
    }

    Subsets(a,index+1,output,ans);

    output+=a[index];
    Subsets(a,index+1,output,ans); 
}

int main(){
    string a = "abc";

    string output;
    vector<string> ans;
    Subsets(a,0,output,ans);

    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
          cout<<j<<" ";
        }
        cout<<endl; 
    }
    return 0;
}