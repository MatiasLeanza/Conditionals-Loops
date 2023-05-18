#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Un programa acepta como argumento un número entero y decide si es positivo, negativo o cero


int F(int a) {

   
   
   
   
   
    if (a > 0) {

        printf("Positivo");
}

     
     
     if (a < 0) {

        printf("Negativo");
    }


     if (a == 0) {

        printf("Igual 0");


    }




}


int main(int argc, char *argv[]) {


    int a = atoi(argv[1]);
    F(a);
    return 0;


}


