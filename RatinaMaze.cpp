#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool issafe(int x,int y,int n,vector<vector<int>> m,vector<vector<int>> visited){
    if((x>=0 && x<n) && ((y>=0 && y<n)) && m[x][y]==1 && visited[x][y]==0 ){
        return true;
    }
    else{
        return false;
    }

}

void solve(vector<vector<int>>& m,int n, vector<vector<int>>& visited,int srcx,int srcy,string path,vector<string>& ans){
    if(srcx==n-1 && srcy==n-1){
        ans.push_back(path);
        return;
    }
    visited[srcx][srcy]=1;

    // Down
    int newx=srcx+1;
    int newy=srcy;
    if(issafe(newx,newy,n,m,visited)){
        path+='D';
        solve(m,n,visited,newx,newy,path,ans);
        path.pop_back();
    }


     // Left
    newx=srcx;
    newy=srcy-1;
    if(issafe(newx,newy,n,m,visited)){
        path+='L';
        solve(m,n,visited,newx,newy,path,ans);
        path.pop_back();
    }

     // Right
    newx=srcx;
    newy=srcy+1;
    if(issafe(newx,newy,n,m,visited)){
        path+='R';
        solve(m,n,visited,newx,newy,path,ans);
        path.pop_back();
    }


     // UP
    newx=srcx-1;
    newy=srcy;
    if(issafe(newx,newy,n,m,visited)){
        path+='U';
        solve(m,n,visited,newx,newy,path,ans);
        path.pop_back();
    }


    visited[srcx][srcy]=0;
}

int main(){
    vector<vector<int>> m ={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n=4;
  
    if(m[0][0]=0){
        cout<<false;
    }
    else{
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        int srcx=0;
        int srcy=0;
        string path="";
        vector<string> ans;
        solve(m,n,visited,srcx,srcy,path,ans);   

        for(int i=0;i<ans.size();i++){
            for(auto j:ans[i]){
             cout<<j;
            }
            cout<<" "; 
        }
    } 
    return 0;
}