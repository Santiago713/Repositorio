#include<iostream>
#include<math.h>
using namespace std;
main()
{	string calcular;
	double potencia1,potencia2,lado1,lado2;
	double hipotenusa;
	double suma, ex=2, raiz, resta;
	cout<<"Programa que le permite calcular la hipotenusa, cateto opuesto o adyacente de un triangulo\n\n";
	cout<<"Ingrese que va a calcular, escribiendo lado o hipotenusa: \n";
	cin>>calcular;
		if((calcular=="hipotenusa")or(calcular=="Hipotenusa"))
		{
			cout<<"Para calcular la hipotenusa ingrese los siguientes datos: \n";
			cout<<"Ingrese el valor del primer lado: ";
			cin>>lado1;
			cout<<endl;
			cout<<"Ingrese el valor del segundo lado: ";
			cin>>lado2;
			cout<<endl;
			ex=2;
			potencia1=pow(lado1,ex);
			ex=2;
			potencia2=pow(lado2,ex);
			suma=potencia1+potencia2;
			raiz=sqrt(suma);
			cout<<"La hipotenusa del triangulo con lados: "<<lado1<<" y "<<lado2<<" es: "<<raiz;
		}
		else
		{
			if((calcular=="lado")or(calcular=="Lado"))
			{
				cout<<"Para calcular algun lado del triangulo ingrese los siguientes datos: \n";
				cout<<"Ingrese el valor de un lado: ";
				cin>>lado1;
				cout<<endl;
				cout<<"Ingrese el valor de la hipotenusa: ";
				cin>>hipotenusa;
				cout<<endl;
				ex=2;
				potencia1=pow(lado1,ex);
				ex=2;
				potencia2=pow(hipotenusa,ex);
				resta=potencia2-potencia1;
				raiz=sqrt(resta);
				cout<<"El lado faltante del triangulo con lado: "<<lado1<<" e hipotenusa: "<<hipotenusa<<" es: "<<raiz;	
			}
		}
}
