#include "laboratorio.h"
#include <fstream>

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
	}}
void laboratorio::respaldar_tabla(){
	
	ofstream archivo("computadoras.txt");
	if(archivo.is_open()){
		archivo<<left;
		archivo<<setw(19)<<"Sistema Operativo: ";
		archivo<<setw(19)<<"Tarjeta Grafica: ";
		archivo<<setw(10)<<"Precio: ";
		archivo<<setw(17)<<"Cantidad de Ram: ";
		archivo<<endl;
		for(size_t i=0;i<cont;i++){
			computadora &c=arreglo[i];
			archivo<<c;
			archivo<<"\n";
		}
	}
	archivo.close();
}
void laboratorio::respaldar(){
	
	ofstream archivo("computadoras.txt");
	if(archivo.is_open()){
		for(size_t i=0;i<cont;i++){
			computadora &c=arreglo[i];
			archivo<<c.get_sistema_operativo()<<endl;
			archivo<<c.get_tarjeta_grafica()<<endl;
			archivo<<c.get_precio_pc()<<endl;
			archivo<<c.get_cantidad_ram()<<endl;
			
		}
	}
	archivo.close();
}
void laboratorio::recuperar(){
	ifstream archivo("computadoras.txt");
	if(archivo.is_open()){
		string temp;
		double price;
		int ram_quantity;
		computadora c;
		while(true){
			getline(archivo,temp);
			if(archivo.eof()){
				break;
			}
			c.set_sistema_operativo(temp);
			
			getline(archivo,temp);
			c.set_tarjeta_grafica(temp);
			
			getline(archivo,temp);
			price=stof(temp);
			c.set_precio_pc(price);
			
			getline(archivo,temp);
			ram_quantity=stoi(temp);
			c.set_cantidad_ram(ram_quantity);
			
			capturar_final(c); 
			
			
			
		}
		
	}
	archivo.close();
}

