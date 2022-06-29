#include<iostream>

using namespace std;

int main(){
	int n,f,i;
	cout<<"ingrese el numero n: "<<endl;cin>>n;
	f=1;
	for(i=1;i<=n;i++){
		f=f*i;
    }
	cout<<"el factoria es: "<<f<<endl;
	
	
	return 0;
}
