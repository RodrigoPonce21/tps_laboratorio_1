/*
 * calculos.c
 *
 *  Created on: 7 abr. 2022
 *      Author: ecojo
 */


#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

	int debito(int precio){
		int descuento;
		int debito;
		descuento = precio *10/100;
		debito = precio - descuento;

		return debito;
	}

	int credito (int precio){
		int creditoCalculo;
		creditoCalculo = precio * 25;

		return creditoCalculo;
	}

	float bitcoin (int precio){
		float bitcoinCalculo;
		float bitcoinValor;
		bitcoinValor = 4606954.55;
		bitcoinCalculo = precio/bitcoinValor;

		return bitcoinCalculo;
	}

	int unitario (int precio, int kilometros){
		int unitarioCalculo;
		unitarioCalculo = precio/kilometros;

		return unitarioCalculo;
	}

	int diferencia(int unitarioAerolineas, int unitarioLatam){
		int diferenciaCalculo;
		if(unitarioAerolineas>unitarioLatam){
			diferenciaCalculo = unitarioAerolineas-unitarioLatam;
			}
			else{
				diferenciaCalculo = unitarioLatam - unitarioAerolineas;
			}
		return diferenciaCalculo;
	}



