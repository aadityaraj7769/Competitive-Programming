#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
 int t;
 cin>>t;
 while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int t1=0,t2=0,t3=0,t4=0,t5=0;
 for(int i=0;i<s.size();i++){
  if(s[i]=='T')t1++;
  if(s[i]=='i')t2++;
  if(s[i]=='m')t3++;
  if(s[i]=='u')t4++;
  if(s[i]=='r')t5++;
 }
 if(t1==1 && t2==1 && t3==1 && t4==1 && t5==1)cout<<"yes"<<endl;
 else cout<<"no"<<endl;
 }
  return 0;
}