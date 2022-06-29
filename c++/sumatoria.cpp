#include<iostream>
using namespace std;

main(){
	int n,st=0,i;
	cout<<"introduxca un numero n: "<<endl;cin>>n;
	for(i=1;i<=n;i++){
		cout<<i<<",";
		st=st+i;
	if (i==n)
                cout << "..." << endl;
	}
	cout<<endl<<"la sumatoria es st: "<<st<<endl;
}
