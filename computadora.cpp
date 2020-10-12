#include "computadora.h"

computadora::computadora()
{

}

computadora::computadora(const string &sistema_operativo,const string &tarjeta_grafica,double precio_pc,int cantidad_ram)
{
    this->sistema_operativo = sistema_operativo;
    this->tarjeta_grafica = tarjeta_grafica;
    this->precio_pc = precio_pc;
    this->cantidad_ram = cantidad_ram;
}
void computadora::set_sistema_operativo(const string &v){
	this->sistema_operativo=v;
}
string computadora::get_sistema_operativo(){
	return this->sistema_operativo;
}
void computadora::set_tarjeta_grafica(const string &v){
	this->tarjeta_grafica=v;
}
string computadora::get_tarjeta_grafica(){
	return this->tarjeta_grafica;
}
void computadora::set_precio_pc(double v){
	this->precio_pc=v;
}
double computadora::get_precio_pc(){
	return this->precio_pc;
}
void computadora::set_cantidad_ram(int v){
	this->cantidad_ram=v;
}
int computadora::get_cantidad_ram(){
	return this->cantidad_ram;
}
