#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	double D,x1,x2,xr,xi,x;
	
	cout<<"Ingrese los valores de los coeficientes de su ecuacion\n";
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	cout<<"c=";cin>>c;
	//Escribimos la forma en la cual hallaremos las soluciones
	D=(b*b)-(4*a*c);
	if (D>0) {
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		cout<<"Las raices son:"<< x1 << "y" <<x2 <<endl; 
	} else if (D<0) {
		xr=(-b/(2*a));
		xi=(sqrt(-D))/(2*a);
		cout<<"Las raices son:\n ";
		cout<<xr<<"+/-"<<xi<<"i"<<endl;
	} else {
		x=(-b)/(2*a);
		cout<<"Las raices son iguales y valen: "<<x<<endl;
	}
	
	return 0;
}
//Fin del programa
