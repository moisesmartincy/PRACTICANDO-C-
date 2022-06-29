#include<iostream>
using namespace std;

int main(){
	int n,i,st,cont;
	cout<<"ingrese el numero n: ";cin>>n;
	st=0;
	cont=1;
	for(i=1;i<=n;i++){
		cout<<cont<<",";
		st=st+cont;
		cont=cont+2;
	}
	cout<<"\nla sumatoria es: "<<st<<endl;
	return 0;
}
