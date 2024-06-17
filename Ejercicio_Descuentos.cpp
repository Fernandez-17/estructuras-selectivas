#include<iostream>
using namespace std;
int main( ){
	double compra, pago_final;
	cout<<"Ingrese el monto de su compra realizada: ";
	cin>>compra;
	if(compra>1000){
		cout<<"Felicidades el monto de su compra aplica para el descuento."<<endl;
		pago_final=compra-compra*0.20;
		cout<<"El monto de su pago final es de: "<<pago_final<<endl;
	} 
	else{
		cout<<"Lo sentimos mucho, el monto de su compra no aplica para el descuento."<<endl;
		pago_final=compra;
		cout<<"El monto de su pago final es de: "<<pago_final<<endl;
	}
	return 0;
} 
