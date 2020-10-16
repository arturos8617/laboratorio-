#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <cstdlib>

using namespace std;

class computadora{
	private:
		string sistema_operativo;
		string tarjeta_grafica;
		double precio_pc;
		int cantidad_ram;
		
		
	public:
		computadora();
		computadora(const string &sistema_operativo,const string &tarjeta_grafica,double precio_pc,int cantidad_ram);
		void set_sistema_operativo(const string &v);
		string get_sistema_operativo();
		void set_tarjeta_grafica(const string &v);
		string get_tarjeta_grafica();
		void  set_precio_pc(double v);
		double get_precio_pc();
		void set_cantidad_ram(int v);
		int get_cantidad_ram();
};

#endif
