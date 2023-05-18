#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>



//Un programa que imprime las raíces de una función cuadrática. Primero se debe calcular el valor del
 //discriminante 𝐷 = 𝑏2 − 4𝑎𝑐. Si 𝐷 > 0 entonces se imprimen dos raíces. Si 𝐷 = 0 entonces la raíz 
 //es doble y se
//imprime una sóla vez. En el caso de que 𝐷 < 0 se informa que no existe solución en los números
 //reales.



double MainFunction(int a, int b, int c){

    double D = (b * b) -  (4 * a * c);

    double X1 = -b +  sqrt(D) / (2*a);
    double X2 = -b -  sqrt(D) / (2*a);
    
    if (D > 0) {


        printf("%.2f %.2f\n", X1, X2);


    }
    
    
    
    
    if (D == 0) {

       printf("Si el determinante vale 0 las dos raices son iguales = %.2f\n", X1);


    }


    if (D < 0) {

        printf("No exise solucion en los numeros reales \n");


    }


}



int main(int argc, char *argv[]) {


int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);


  MainFunction(a, b, c);
  return 0;

}