#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.h"

using namespace std;

class laboratorio{
	private:
		computadora arreglo[5];
		size_t cont;
	public:
		laboratorio();
		void capturar_final(const computadora &c);
		void mostrar_elementos();
		void respaldar_tabla();
		void respaldar();
		void recuperar();
		friend laboratorio& operator<<(laboratorio &l, const computadora &c)
		{
			l.capturar_final(c);
			return l;
		}
};
#endif
