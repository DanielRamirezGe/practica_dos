#include <bits/stdc++.h>
using namespace std;
#define maxi 20
long long cantidad[maxi];
long long tama[maxi];
int main()
{
	int no_campos;
	cout<<"\t\tPrograma que calcula el tamaño de una base de datos";
	cout<<"Cuantos campos tiene: ";
	cin>>no_campos;
	cout<<"\n\tElija el tipo de dato de cada campo\n\n";
	vector<string> nombres;







	nombres.push_back("bit");
	nombres.push_back("tinyint");
	nombres.push_back("smallint");
	nombres.push_back("int");
	nombres.push_back("bigint");
	nombres.push_back("smallmoney");
	nombres.push_back("money");
	nombres.push_back("float");
	nombres.push_back("real");
	nombres.push_back("datetime");
	nombres.push_back("datetime2");
	nombres.push_back("smalldatetime");
	nombres.push_back("date");
	nombres.push_back("time");
	nombres.push_back("datetimeoffset");
	nombres.push_back("char (n)");
	nombres.push_back("varchar (n)");
	nombres.push_back("text");
	
	
	tama[1]=1;
	tama[2]=1;
	tama[3]=2;
	tama[4]=4;
	tama[5]=8;
	tama[6]=4;
	tama[7]=8;
	tama[8]=8;
	tama[9]=4;
	tama[10]=8;
	tama[11]=8;
	tama[12]=4;
	tama[13]=3;
	tama[14]=5;
	tama[15]=8;
	tama[16]=1;
	tama[17]=1;
	tama[18]=1;
	
	
		
	memset(cantidad,0, sizeof(cantidad));

	for(int i=0; i<no_campos; i++)
	{
		cout<<"Opciones : ";
		for(int j=1; j<=nombres.size(); j++)
			cout<<"\t"<<j<<".- "<<nombres[j-1];
		int opcion,numero;
		do
		{
			cout<<"Elija la opcion: ";
			cin>>opcion;
		}while(opcion<1 or opcion>18);


		switch(opcion){
			case 18:
				cout<<"Cuantos caracteres hay: ";
				cin>>numero;
				cantidad[opcion]+=numero;
				break;
			case 17:
				cout<<"Cuantos caracteres hay: ";
				cin>>numero;
				cantidad[opcion]+=numero;
				break;
			case 16:
				cout<<"Cuantos caracteres hay: ";
				cin>>numero;
				cantidad[opcion]+=numero;
				break;
			default:
				cantidad[opcion]++;
		}
	}
	int no_paginas;
	cout<<"\nIngresa el numero de paginas: ";
	cin>>no_paginas;
	long long suma=0;
	for(int i=1; i<19; i++)
		suma+=tama[i]*cantidad[i];
	cout<<"\tCada registro tiene de tamaño "<<suma<<" bytes"<<endl;
	cout<<"\tCada pagina con 35 registro tiene un tamaño de "<<suma*35<<" bytes"<<endl;
	cout<<"\tEl tamaño total de todas las paginas es: "<<suma*35*no_paginas<<" bytes"<<endl;
}