#include <iostream>
#include <cstdlib>
#include "laboratorio.h"
using namespace std;

main(){
	computadora pc1= computadora("Linux","RTX 3090",32000.50,16);
	computadora pc2;
	laboratorio lb;
	pc2.set_sistema_operativo("ios");
	pc2.set_tarjeta_grafica("RTX 3090");
	pc2.set_cantidad_ram(32);
	pc2.set_precio_pc(35000);
	
	lb.capturar_final(pc1);
	lb.capturar_final(pc2);
	lb.mostrar_elementos();
	return 0;
}
