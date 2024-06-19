/*9.	Se ha establecido un programa para estimular a los alumnos, el cual consiste
 en lo siguiente: si el promedio obtenido por un alumno en el último periodo es mayor 
 o igual que 18, se le hará un descuento del 30% sobre la pensión educativa y no se le 
 cobrara IGV; si el promedio obtenido es menor que 18 deberá pagar la pensión educativa 
 completa, y también el 18% de IGV. Obtener cuanto debe pagar un alumno.*/
 
#include<iostream>
using namespace std;
int main( ){
	double promedio,pension_educativa,pago_final;
	cout<<"Ingrese el promedio del estudiante: ";
	cin>>promedio;
	cout<<"Ingrese el monto de la pension educativa: ";
	cin>> pension_educativa;
	if(promedio>=18){
		pago_final=pension_educativa-pension_educativa*0.3;
		cout<<"Usted tiene que pagar un monto de. "<<pago_final<<endl;
	}else{
	    pago_final=pension_educativa+pension_educativa*0.18;
	    cout<<"Usted tiene que pagar un monto de: "<<pago_final<<endl;
	}
	return 0;
}
