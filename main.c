//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>

int main(void) {
    int hr; //Declaration of the variable

    printf("Digame su hora en formato de 24h \n");
    scanf("%d",&hr); //Variable hr request

    if (hr>=0 & hr<24){ //this "if" evaluates whether the variable hr can be accepted
        if (hr>=0 & hr<12){ //this "if" evaluates the variable "hr" to say "Buenos dias"
            printf("Buenos dias, son las %d horas",hr);
        }
        else if (hr>=12 & hr<19){ //this "if" evaluates the variable "hr" to say "Buenas Tardes"
            printf("Buenas tardes, son las %d horas",hr);
        }
        else if (hr>=19 & hr<24){ //this "if" evaluates the variable "hr" to say "Buenas Noches"
            printf("Buenas noches, son las %d horas",hr);
        }

    }
    else{
        printf("En este sistema humano no existen las %d horas",hr);
        //If the condition of the main "if" is not true, then the program continues by this path
    }
    return 0;
}