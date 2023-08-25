#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void bienvenida(void); // prototipo de la funcion, es necesario cuando defino la funcion mas tarde que cuando la llamo. Escribo void ya que no necesito que la funcion devuelva ningun valor
uint8_t ingresar_pescador(void);
float pescar(uint8_t pescador);

int main(){ // es la funcion principal, siempre debe estar en un codigo en c
    float pez1=0;
    float pez2=0;
    float pez3=0;
    uint16_t cant1=0;
    uint16_t cant2=0;
    uint16_t cant3=0;
    float promedio=0;
    uint16_t canttotal;
    float promediofinal;
    uint8_t pescador;
    float p1;
    float p2;
    float p3;

bienvenida();

do{
pescador = ingresar_pescador();

}while{
    
}
}

void bienvenida(void){
    printf("Bienvenido/a al programa. Con este programa podras definir que pescador gana el concurso y cual obtuvo la pieza mas grande.\nRecuerde que los peces deben medir al menos 12 cm.\n");
}

uint8_t ingresar_pescador(void){
    uint8_t pescador;

    printf("Ingrese que pescador extrajo el pez con su numero de identificaci0n (1,2 o 3) o 0 para finalizar el concurso.\n");
    scanf("%d", &pescador);
    while(pescador!=1 && pescador!=2 && pescador!=3 && pescador!=0){
        printf("El numero ingresado no corresponde a ningun pescador, ingrese el numero de algun pescador (1,2 o 3) o 0 para finalizar\n");
        scanf("%d", &pescador);
        return pescador;
    }
}

float pescar(uint8_t pescador){
    uint8_t pescador;
    float p1;
    float p2;
    float p3;
    float pez1=0;
    float pez2=0;
    float pez3=0;
    uint16_t cant1=0;
    uint16_t cant2=0;
    uint16_t cant3=0;
    float promedio;

    switch (pescador){
        case 1:
            printf("¿Cual es la longitud del pez? (en cm)?\n");
            scanf("%f", &p1);
            if(p1>=12){
                promedio=promedio+p1;
                if(pez1<=p1){
                    pez1=p1;
                }
                cant1++;
            }else{
                printf("La pieza mide menos de 12cm por lo que no cuenta para el concurso\n");
            }
            break;
        case 2:
            printf("¿Cual es la longitud del pez? (en cm)?\n");
            scanf("%f", &p2);
             if(p2>=12){
                promedio=promedio+p2;
                if(pez2<=p2){
                    pez2=p2;
                }
                cant2++;
            }else{
                printf("La pieza mide menos de 12cm por lo que no cuenta para el concurso\n");
            }
            break;
        case 3:
            printf("¿Cual es la longitud del pez? (en cm)?\n");
            scanf("%f", &p3);
             if(p3>=12){
                promedio=promedio+p3;
                if(pez3<=p3){
                    pez3=p3;
                }
                cant3++;
            }else{
                printf("La pieza mide menos de 12cm por lo que no cuenta para el concurso\n");
            }
            break;
    }
}