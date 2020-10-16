#include "laboratorio.h"


laboratorio::laboratorio(){
	this->cont=0;
}
void laboratorio::capturar_final(const computadora &c){
	if(cont<5){
		this->arreglo[cont]=c;
		cont++;
	}
	else{
		cout<<"Arreglo lleno"<<endl;
	}
}
void laboratorio::mostrar_elementos(){
	cout<<left;
	cout<<setw(19)<<"Sistema Operativo";
	cout<<setw(19)<<"Tarjeta Grafica";
	cout<<setw(10)<<"Precio";
	cout<<setw(17)<<"Cantidad de Ram"<<endl;
	for(size_t i=0;i<cont;i++){
		computadora &c=arreglo[i];
		cout<<c;
		cout<<"\n";
	}
	
}
