#include<iostream>
using namespace std;

int main(){
	int n,i,st,x;
	cout<<"ingrese el numero n: ";cin>>n;
	st=0;
	for(i=1;i<=n;i++){
		x=i*i-1;
		st=st+x;
		cout<<x<<",";
	}
	cout<<"\nla sumatoria es: "<<st<<endl;
	return 0;
}
