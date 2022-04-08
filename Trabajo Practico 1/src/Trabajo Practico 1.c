/*
============================================================================
 Name        : Trabajo Practico 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "utn.h"

int main(void) {
	setbuf (stdout, NULL);
	int kilometros=0,precioAerolineas=0,precioLatam=0,opcion=0;
	int debitoAerolineas=0,creditoAerolineas=0,unitarioAerolineas=0;
	int debitoLatam=0,creditoLatam=0,unitarioLatam=0;
	int diferenciaPrecios=0;
	double bitcoinLatam=0,bitcoinAerolineas=0;

while(opcion != 6){
	   printf("\n********************MENU CALCULADORA DE COSTOS DE VUELOS********************\n"
			   "\n1) Ingresar los kilometros del vuelo  \n"
	             "2) Ingresar el precio del vuelo en las aerolineas \n"
	             "3) Calcular los costos \n"
	             "4) Informar Resultados \n"
	             "5) Carga forzada de datos \n"
	             "6) Salir\n");
	    printf("\nIngrese una opcion: ");
	    opcion = ingreso (opcion);
	    system("cls");
	     switch(opcion)
	     {
	     	 case 1:
	     		 printf("Ingrese los kilometros del vuelo: ");
	     		 kilometros = ingreso(kilometros);
	     		 system("cls");
	     		 break;
	     	 case 2:
	     		 printf("Ingrese los precios de los vuelos:\n (Precios actuales: Aerolineas= $%i, Latam $%i)",precioAerolineas,precioLatam);
	     		 printf("Precio del vuelo en Aerolineas: $");
	     		 precioAerolineas = ingreso (precioAerolineas);
	     		 printf("Precio del vuelo en Latam: $");
	     		 precioLatam = ingreso(precioLatam);
	     		 system("cls");
	     		 break;
	     	 case 3:
	     		if(precioAerolineas!=0 && precioLatam !=0 && kilometros!=0)
	     		{
	     		/********************************************/
	     		debitoAerolineas = debito(precioAerolineas);
	     		creditoAerolineas = credito (precioAerolineas);
	     		bitcoinAerolineas = bitcoin (precioAerolineas);
	     		unitarioAerolineas = unitario (precioAerolineas, kilometros);
	     		/*********************************************/
	     		debitoLatam = debito(precioLatam);
	     		creditoLatam = credito (precioLatam);
	     		bitcoinLatam = bitcoin (precioLatam);
	     		unitarioLatam = unitario (precioLatam, kilometros);
	     		diferenciaPrecios = diferencia (precioAerolineas, precioLatam);
	     		printf("Se calcularon los costos.");
	     		}
	     		else
	     		{
	     			printf("Error, No se han ingresado los datos necesarios.");
	     		}
	     		break;
	     	 case 4:
				if(precioAerolineas!=0 && precioLatam !=0 && kilometros!=0)
				{
	     		printf("Kilometros Ingresados: %i \n"
						"Precio Aerolineas: $%i \n"
						"a) Precio con tarjeta de debito: $%i \n"
						"b) Precio con tarjeta de credito: $%i \n"
						"c) Precio pagando con bitcoin: %f BTC\n"
						"d) Precio unitario: $%i \n"
						"Precio Latam: $%i\n"
						"a) Precio con tarjeta de debito: $%i \n"
						"b) Precio con tarjeta de credito: $%i \n"
						"c) Precio pagando con bitcoin: %f BTC\n"
						"d) Precio unitario: $%i \n"
						"La diferencia de precio es: $%i \n" ,kilometros,precioAerolineas,debitoAerolineas,creditoAerolineas,bitcoinAerolineas,unitarioAerolineas,precioLatam,debitoLatam,creditoLatam,bitcoinLatam,unitarioLatam,diferenciaPrecios);
				}
	     		else
	     		{
	     			printf("Error, No se han ingresado los datos necesarios.");
	     		}
	     		break;
	     	 case 5:
	     		 kilometros = 7090;
	     		 precioAerolineas=162965;
	     		 precioLatam=159339;
	     		printf("Kilometros Ingresados: %i \n"
						"Precio Aerolineas: $%i \n"
						"a) Precio con tarjeta de debito: $%i \n"
						"b) Precio con tarjeta de credito: $%i \n"
						"c) Precio pagando con bitcoin: %f BTC\n"
						"d) Mostrar precio unitario: $%i \n"
						"Precio Latam: $%i\n"
						"a) Precio con tarjeta de debito: $%i \n"
						"b) Precio con tarjeta de credito: $%i \n"
						"c) Precio pagando con bitcoin: %f BTC\n"
						"d) Mostrar precio unitario: $%i \n"
						"La diferencia de precio es: $%i \n" ,kilometros,precioAerolineas,debitoAerolineas,creditoAerolineas,bitcoinAerolineas,unitarioAerolineas,precioLatam,debitoLatam,creditoLatam,bitcoinLatam,unitarioLatam,diferenciaPrecios);
				break;
	     	 case 6:
	     		 exit(0);
	     		 break;
	     	 default:
	     		 printf("Error, ingrese una opcion correcta.");
	     		 break;
	     }
	}
	return 0;
}

