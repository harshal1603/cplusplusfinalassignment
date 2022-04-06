#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int max(int [],int );
string swap(string ,int,int);
int find01(string);
int main(){
string b;
int len;
cout<<"enter binary string\n";
cin>>b;
len=b.length();
int i1,i2,count=0;
string c;
int cnt=0;
int result[300];
for(int i=0;i<len;i++){
for(int j=i;j<len;j=j+2){
c=swap(b,i,j);
//cout<<c<<endl;
result[cnt]=find01(c); 
cnt++;
}
}
//int *res=std::max_element(std::begin(result),std::end(result));
cout<<"answer"<<max(result,cnt)<<endl;



return 0;
}

string swap(string b,int i1,int i2){
string temp;
temp[0]=b[i1];
b[i1]=b[i2];
b[i2]=temp[0];
return b;

}

int find01(string c){
int len;
int cnt=0;
len=c.length();
for(int i=1;i<len;i++){
if(c[i-1]=='0' && c[i]=='1'){
cnt=cnt+1;
}
}
return cnt;
}

int max(int a[],int len){
int m=0;
for(int i=0;i<len;i++){
if(a[i]>m){
m=a[i];
}
}
return m;

}

