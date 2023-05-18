#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
// Se tira un dado “cargado” donde la probabilidad de sacar un 6 es de 3/8 y para las otras 5 
// caras de 1/8. El
// programa imprime el resultado de tirar el dado

int PoweredDice() {


    srand(time(NULL));
    
    int Probability = rand()% 8+1;

    if (Probability < 6) {
         return Probability;
    }
    else {
        return 6;
    }


}
int main(){
    printf("El dado es %d\n", PoweredDice());
    return 0;
}



