#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int totalcompra=0;
	std::string razonsocial="";
	std::string rif_cedula="";
	int comprasmayor=0;
	int comprasdetal=0;
	int monto_cliente=0;
	int refrescodetal=10;
	int refrescomayor=5;
	int maltadetal=12;
	int maltamayor=7;
	int nuevocliente=1;
	int cantidadrefresco=0;
	int cantidadmalta=0;
	
	while (nuevocliente==1) {
		std::cout<<"ingrese razon social"<< std::endl;
		std::cin>> razonsocial;
		std::cout<<"ingrese cedula o rif"<< std::endl;
		std::cin>> rif_cedula;
		std::cout<<"¿cuantos refresco compro?"<< std::endl;
		std::cin>> cantidadrefresco;



		if (cantidadrefresco>=6) {
			monto_cliente=monto_cliente+(cantidadrefresco*refrescomayor);
			comprasmayor=comprasmayor+1;
			
		}else {
			monto_cliente=monto_cliente+(cantidadrefresco*refrescodetal);
			comprasdetal=comprasdetal+1;
			
		}
		
		std::cout<<"¿cuantas maltas compro?"<< std::endl;
		std::cin>> cantidadmalta;
		if (cantidadmalta>=6) {
			monto_cliente=monto_cliente+(cantidadmalta*maltamayor);
			comprasmayor=comprasmayor+1;
			
		}else {
			monto_cliente=monto_cliente+(cantidadmalta*maltadetal);
			comprasdetal=comprasdetal+1;
			
		}
		
		std::cout<<"el monto a pagar es: "<< monto_cliente<<std::endl;
		std::cout<<"¿desea ingresar otro cliente? presione 1 para si, o 2 para no"<< std::endl;
		std::cin>> nuevocliente;
		
	}
	
	std::cout<<"Cantidad compras al Mayor: "<< comprasmayor<<std::endl;
	std::cout<<"Cantidad compras al Detal: "<< comprasdetal<<std::endl;
	
	
	return 0;
}
	
	
	
	