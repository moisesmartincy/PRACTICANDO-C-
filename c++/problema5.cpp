#include<iostream>

using namespace std;
main(){
	int a,b,x;
	cout<<"ingrese el numero a: "<<endl;cin>>a;
	cout<<"ingrese el numero b: "<<endl;cin>>b;
	if(a==b){
		x=a*b;
	}else{
		if(a>b){
			x=a-b;
		}else{
			x=a+b;
		}
	}
	cout<<"el resultado es: "<<x<<endl;
	return 0;
}
