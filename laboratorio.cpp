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
	for(size_t i=0;i<cont;i++){
	computadora &c=arreglo[i];
	cout<<"Sistema Operativo: "<<c.get_sistema_operativo()<<endl;
	cout<<"Tarjeta Grafica: "<<c.get_tarjeta_grafica()<<endl;
	cout<<"Cantidad de Ram: "<<c.get_cantidad_ram()<<endl;
	cout<<"Precio Total: "<<c.get_precio_pc()<<endl;
	cout<<"\n";
	}
	
}
