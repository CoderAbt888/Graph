#include<iostream>
#include<vector>


using namespace std;

int find_parent(vector<int>&arr,int x){
    while(x!=arr[x]){
        x = arr[x];
    }
    return x;
}


int main(){
   int t cin>>t;
   while(t--){
       int n;cin>>n;
       int k = 120-n;
       string s;
       cin>>s;
       int count = 0;
       for(int i = 0;i<s.size();i++){
           if(s[i]=='1'){count++;}
       }
       if(count+k>=90){
           cout<<"YES"<<endl;

       }else{
           cout<<"NO"<<endl;
       }
   }

    return 0;
}