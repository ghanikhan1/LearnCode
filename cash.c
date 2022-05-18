#include <stdio.h>

#include <math.h>

int main(void){
float m;
float n;
int coins = 0;

    do{

        printf("Change owed : ");
        scanf("%f", &m);
        n = m;
        //n = get_float("Change owed : ");

    }while(n < 0);

    n = n * 100;
        printf("%f pennies\n",n);
    n = round(n);
        printf("%f pennies rounded\n",n);

    while(n >= 25){

        n = n - 25;

        coins++;

    }
    while(n >= 10){

        n = n - 10;

        coins++;

    }
    while(n >= 5){

        n = n - 5;

        coins++;

    }
    while(n >= 1){

        n = n - 1;

        coins++;

    }
    printf("Total coins used :  %i\n",coins);


}