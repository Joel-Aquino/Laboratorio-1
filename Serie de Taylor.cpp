#include <iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
double factorial (int num);
double taylor(int n, float x);
int main(int argc, char *argv[])
{ 
    while(true)
    {
    int n;
    float x;
    cout<<"De un valor de n ";
    cin>>n;
    cout<<"De un valor de x ";
    cin>>x;
	cout<<"f["<<x<<"]="<<taylor(n,x)<<endl;  
	system("PAUSE");
	system("cls");
	}
	return EXIT_SUCCESS;
}

double taylor(int n, float x)
{
	double t,suma=0;
	for(int i=0;i<n;i++)
	{
		t=pow(x,i)*pow(-1,i)/factorial(i);
		suma=suma+t;
	}
	return suma;
}

double factorial (int num)
{
	double fac=1;
	for(int i=2;i<=num;i++)
	{
		fac=fac*i;
	}
	return fac;
}
