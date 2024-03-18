#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c,n;
cout<<"Enter the value of n:";
cin>>n;
cout<<a<<endl;
cout<<b<<endl;
for(int i=0;i<=n;i++){
	c=a+b;
	cout<<c<<endl;
	a=b;
	b=c;
}
return 0;
}
