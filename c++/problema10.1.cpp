#include<iostream>
using namespace std;

int main(){
	int n,i,st,x;
	cout<<"ingrese el numero n: ";cin>>n;
	st=0;
	for(i=0;i<=n-1;i++){
		x=2*i+i*i;
		st=st+x;
		cout<<x<<",";
	}
	cout<<"\nla sumatoria es: "<<st<<endl;
	return 0;
}
