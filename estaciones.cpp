#include <iostream>
using namespace std;
int main ()
{
	int dia=0, mes=0;
	
	cout<<"Ingresa el mes: ";
	cin>>mes;
	cout<<"Ingresa el dia: ";
	cin>>dia;
	
	if (dia>31 || dia <=0 || mes>12 || mes<=0)
		cout<<"\nLa fecha no es valida";
	else 
		switch (mes) {
			case 4: if (dia>30)
						cout<<"Abril solo tiene 30 dias";
					else
						cout<<"Es primavera";
					break;
		
			case 5: cout<<"Es primavera";
					break;
			
			case 7:
			case 8: cout<<"Es verano";
					break;
		
			case 10: cout<<"Es otonio";
					break;
		
			case 11: if (dia>30)
						cout<<"Noviembre solo tiene 30 dias";
					else
						cout<<"Es otonio";
					break;
		
			case 1: cout<<"Es invierno";
					break;
				
			case 2: if (dia>28)
						cout<<"Febrero solo tiene 28 dias";
					else
						cout<<"Es invierno";
					break;
				
			case 3: if (dia<20)
						cout<<"Es invierno";
					else
						cout<<"Es primavera";
					break;
				
			case 6: if (dia>30)
						cout<<"Junio solo tiene 30 dias";
					else if (dia<20)
							cout<<"Es primavera";
					else
						cout<<"Es verano";
					break;
				
			case 9:if (dia>30)
						cout<<"Septiembre solo tiene 30 dias";
					else if (dia<22)
							cout<<"Es verano";
					else
						cout<<"Es otonio";
					break;
				
			case 12: if (dia<20)
						cout<<"Es otonio";
					else
						cout<<"Es invierno";
					break;
				
			default: cout<<"\nFecha invalida";
					break;
				
		}
	return 0;
}
