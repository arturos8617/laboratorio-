#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

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
		friend ostream& operator<<(ostream &out,const computadora &p){
			out<<left;
			out<<setw(19)<<p.sistema_operativo;
			out<<setw(19)<<p.tarjeta_grafica;
			out<<setw(10)<<p.precio_pc;
			out<<setw(17)<<p.cantidad_ram;
			
			return out;
		}
		friend istream& operator>>(istream &in, computadora &p){
			cout<<"Sistema Operativo: ";
			getline(cin,p.sistema_operativo);
			cout<<"Tarjeta Grafica: ";
			getline(cin,p.tarjeta_grafica);
			cout<<"Precio: ";
			cin>>p.precio_pc;
			cout<<"Cantida de Ram: ";
			cin>>p.cantidad_ram;
			return in;
		}
};

#endif
