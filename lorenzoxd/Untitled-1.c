#include <stdio.h>

int main (void){
    
    int monto = 0;
    
    int billete1 = 0;
    int billete5 = 0;
    int billete10 = 0;
    int billete20 = 0;
    int billete50 = 0;
    int billete100 = 0;

    printf("Selecciona el monto: ");
    scanf ("%d",&monto);

    if (monto < 20){
        printf("El monto es minimo es 20");
        return 1;
    }
    else if (monto > 5000){
        printf("El monto maximo es 5000");
        return 2;
    }
    else {
        printf("Monto aceptado!");
    }
    
    while (monto >= 100){
        monto = monto - 100;
        billete100++;
    }
    while (monto>50){
        
       
