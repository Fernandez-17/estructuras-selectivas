//* 2.	En un almacén se hace un 30% de descuento a los clientes cuya compra supere los S/.2000 ¿Cuál será la cantidad que pagara una persona por su compra? *//

#include<iostream>
using namespace std;
int main( ){
	double compra, pago_final;
	cout<<"Ingrese el monto de su compra realizada: ";
	cin>>compra;
	if(compra<0){
		cout<<"El monto de compra ingresado es invalido";
		}
		else{
		if(compra>2000){
		cout<<"Felicidades el monto de su compra aplica para el descuento."<<endl;
		pago_final=compra-compra*0.30;
		cout<<"El monto de su pago final es de: "<<pago_final<<endl;
		} 
		else{
		cout<<"Lo sentimos mucho, el monto de su compra no aplica para el descuento."<<endl;
		pago_final=compra;
		cout<<"El monto de su pago final es de: "<<pago_final<<endl;
		}
	}

	return 0;
} 
 
