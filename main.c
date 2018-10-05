//Rodrigo Perez
//A01411278
//Quadratic formula



#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    //Variables.
    double r1;
    double r2;
    double radical;
    int a;
    int b;
    int c;

    //we ask the user for the values
    printf("Valor de a:");
    scanf("%i", &a);
    printf("Valor de b:");
    scanf("%i", &b);
    printf("Valor de c:");
    scanf("%i", &c);


    if(isdigit(a)==0 || isdigit(b)==0 || isdigit(c)==0){

        //If a is 0 we tell the user that it cant be divided
            if(a==0){
            printf("A = 0, it cant be devided.");
        } else {


            radical=pow(b,2)-4*a*c;
            printf("radical= %lf\n", radical);

            //if the result is negative we tell the user that sqr roots cant be done
            //with negative numbers
            if (radical<0){
                printf("We cant do roots for negative numbers.");
            } else {
                //Se dan los valores de x1 y x2
                r1=-b+sqrt(radical)/2*a;
                r2=-b-sqrt(radical)/2*a;

                printf("r1: %lf\n", r1);
                printf("r2: %lf\n", r2);
            }
        }
    } else {
        //If the user inputs a letter or something that isnt a number we tell him
        printf("\nsome of your values aren´t numbers.");
    }

    return 0;
}