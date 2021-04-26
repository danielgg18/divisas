/*
 Programa que pide una cantidad en pesos mexicanos al usuario y la convierte a alguna de las divisas disponibles (euro, dolar estadounidense o libra)
 Autor: Daniel García
*/

#include <stdio.h>

int main(){

    float fPesos, fEuro, fDolar, fLibra;
    int iOpcion;
    
    printf("Este programa te ayuda a convertir Pesos Mexicanos a alguna divisa disponible (Euro, Dolar estadounidense o Libra)\n\n");
    printf("Ingresa la cantidad en Pesos Mexicanos\n");
    scanf("%f", &fPesos);

  
        printf("\nSelecciona a que divisa deseas hacer la conversion\n\n");
        printf("\t\t**Divisas**\n");
        printf("\t1) Dolar\n");
        printf("\t2) Euro\n");
        printf("\t3) Libra\n");
        printf("\n");
        scanf("%i", &iOpcion);
 
        if (iOpcion == 1){
            fDolar = fPesos * 0.05;
            printf("%.2f pesos equivale a %.2f dolares estadounidenses\n", fPesos, fDolar);
            }
    
        else if (iOpcion == 2){
            fEuro = fPesos * 0.042;
            printf("%.2f pesos equivale a %.2f euros\n", fPesos, fEuro);
            }
    
        else if (iOpcion == 3){
            fLibra = fPesos * 0.036;
            printf("%.2f pesos equivale a %.2f libras\n", fPesos, fLibra);
            }

       else{
           printf("***Opcion invalida***\n");
            }
        
    

return 0;

}
