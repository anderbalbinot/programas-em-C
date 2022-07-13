#include <stdio.h>
#include <conio.h>

/*Algorimo para achar os números primos de um intervalo*/

int main(){

    int primeiro=0, ultimo=0, primo=0, x=0, y=0, z=0, ciclo=0;
    
    printf("\n\nOla', Este programa pode encontrar, por forca bruta, todos os numeros primos de um intervalo de números positivos acima de 1.\n");
    printf("\nDigite aqui o primeiro numero do intervalo: ");
    scanf("%d", &primeiro);
    printf("\nDigite aqui o ultimo numero do intervalo: ");
    scanf("%d", &ultimo);

    for(primo=primeiro; primo<=ultimo; primo++){
        
        z=0;
        
        for(x=primo-1; x>=2; x--){
            
            y = primo%x;
            
            if(y != 0){
                void; //se y for diferente de zero, então o número pode ser primo e não acontece nada
            }
            else{ 
                z=1; //se y for igual a zero, então o número com certeza não é primo e z recebe 1;
            }
        }

        if(z == 1){
            void;
        }
        else{
            printf("\n %d eh primo.", primo);
        }
        
    }

   return 0;
}