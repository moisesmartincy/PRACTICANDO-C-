#include<iostream>
#include<math.h>
using namespace std;
main(){
    float a,c,b;
    float x,r,i,x1,x2,D,f,n,s;
    cout<<"ingrese el numero a: "<<endl;cin>>a;
	cout<<"ingrese el numero b: "<<endl;cin>>b;
	cout<<"ingrese el numero c: "<<endl;cin>>c;
	if(a==0){
		if(b==0){
			if(c==0){
				cout<<"x no tiene solucion"<<endl;
			}else{
				cout<<"x tiene soluciones infintas"<<endl;
			}
		}else{
			x=(-c)/b;
			cout<<"x tiene solucion: "<<x<<endl;
		}
	}else{
		if(b==0){
			f=c/a;
			i=sqrt(f);
			x1=i;
			x2=-i;
			cout<<"x1 tiene solucion: "<<x1<<"i"<<endl;
			cout<<"x2 tiene solucion: "<<x2<<"i"<<endl;
		}else{
			D=(pow(b,2))-4*a*c;
			if(D>=0){
				r=(-b)/(2*a);
				s=(sqrt(D));
				i=s/(2*a);
				x1=r+i;
				x2=r-i;
				cout<<"x1 tiene solucion: "<<x1<<endl;
				cout<<"x2 tiene solucion: "<<x2<<endl;
			}else{
				n=-D;
				r=(-b)/(2*a);
				s=(sqrt(n));
				i=s/(2*a);
				cout<<"x1 tiene solucion: "<<r<<"+"<<i<<"i"<<endl;
				cout<<"x2 tiene solucion: "<<r<<"-"<<i<<"i"<<endl;
			}
		}
	}
	return 0;
}
