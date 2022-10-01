//Creado por: Kevin Logan Tatum Hidalgo
#include <iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Ingrese x:"; cin>>x;
	cout<<"Ingrese y:"; cin>>y;
	if(x==y){
	cout<<"El valor de x:" <<x<< " es igual al valor de y:" <<y<<endl;

	}else{
	if(x<y){
	cout<<"El valor de x:" <<x<< " es menor a el valor de y:" <<y<<endl;


	}else{

	cout<<"El valor de y:" <<y<< " es menor al valor de x:" <<x<<endl;
	}

	}
	return 0;
}
