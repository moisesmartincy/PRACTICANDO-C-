#include<iostream>

using namespace std;
main(){
	int a,b,c;
	cout<<"ingrese el numero a: "<<endl;cin>>a;
	cout<<"ingrese el numero b: "<<endl;cin>>b;
	cout<<"ingrese el numero c: "<<endl;cin>>c;
	if(a>b && a>c){
		cout<<"a es mayor"<<endl;
	}else{
		if(b>c){
			cout<<"b es mayor"<<endl;
		}else{
			cout<<"c es mayor"<<endl;
		}
	}
		return 0;
}
