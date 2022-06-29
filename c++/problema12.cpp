#include<iostream>

using namespace std;

int main(){
	int a,b,s,i;
	cout<<"ingrese el numero a: "<<endl;cin>>a;
	cout<<"ingrese el numero b: "<<endl;cin>>b;
	s=0;
	for(i=1;i<=a;i++){
		s=s+b;
	}
	cout<<"la suma es: "<<s<<endl;
	return 0;
}
