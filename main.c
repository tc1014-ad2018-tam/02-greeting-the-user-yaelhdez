#include <stdio.h>

int main(void) {
    int hr;

    printf("Digame su hora en formato de 24h \n");
    scanf("%d",&hr);

    if (hr>=0 & hr<24){
        if (hr>=0 & hr<12){
            printf("Buenos dias, son las %d horas",hr);
        }
        else if (hr>=12 & hr<19){
            printf("Buenas tardes, son las %d horas",hr);
        }
        else if (hr>=19 & hr<24){
            printf("Buenas noches, son las %d horas",hr);
        }

    }
    else{
        printf("En este sistema humano no existen las %d horas",hr);
    }
    return 0;
}