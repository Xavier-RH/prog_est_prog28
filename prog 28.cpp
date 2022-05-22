/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022
	Programa pide las calificaciones de un alumno y realiza lo siguiente
		calcula su promedio
		cuenta cuantas materias reprobo
		cuantas materias aprobo
		calcula el porcentaje de aprovacion
	Se terminara de pedir datos cuando se introduzca un numero negativo
	El programa debe validar que las calificaciones sean validas (0-10)
	*/
	
	#include <stdio.h>
	
	int main(){
		float cal, porcentaje_ap, prom, suma=0;
		int i=0, aprobadas=0, reprobadas=0;
		
		do{
			printf("Introduce la calificacion: ");
			scanf("%f",&cal);
			if(cal>=0 && cal<=10){
				i++;
				suma=suma+cal;
				if (cal>=7){
					aprobadas++;
				}
				else{
					reprobadas++;
				}
			}
			else{
				printf("Calificacion no valida\n");
			}
		}while(cal>=0);
		
		prom=suma/i;
		porcentaje_ap=(aprobadas*100)/i;
		
		printf("\nSu promedio es de %.2f\n",prom);
		printf("Aprobo: %d materias\n",aprobadas);
		printf("Reprobo: %d materias\n",reprobadas);
		printf("Su porcentaje de aprobacion es de %.2f %\n",porcentaje_ap);
		
		return 0;
	}
	

