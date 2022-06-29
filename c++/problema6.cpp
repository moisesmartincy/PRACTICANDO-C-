#include<iostream>
using namespace std;
main(){
	int a,b,x;
	cout<<"ingrese el numero a: "<<endl;cin>>a;
	cout<<"ingrese el numero b: "<<endl;cin>>b;
	if(a==0){
		if(b==0){
			cout<<"x no tiene solucion"<<endl;
		}else{
			cout<<"x soluciones infinitas"<<endl;
		}
	}else{
		x=(-b)/a;
		cout<<"la solucion de x: "<<x<<endl;
	}
	return 0;
}
