#include<iostream>
using namespace std;
int hcf(int ,int);

int main(){
int l,b;
int min;
int res;
cout<<"enter length and breadth\n";
cin>>l;
cin>>b;
min=hcf(l,b);
res=(l/min) * (b/min);
cout<<"answer= "<<res<<endl;

return 0;
}

int hcf(int l,int b){
if(l==0 || b==0){
return 0;
}
if(l==b){
return l;
}
if(l>b){
return hcf(l-b,b);
}
return hcf(l,b-l);



}
