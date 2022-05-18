#include <stdio.h>

int main(void){
    long m;
    long n;
    long x;
    long y;
    long z;
    int mod1;
    int mod2;
    int sum1 = 0;
    int sum2 = 0;
    int total = 0;
    int d1;
    int d2;

    int count1 = 0;
    int count = 0;

    printf("Enter card number \n\n");
    scanf("%ld", &m);
    n = m;
    //n = get_long("Enter card number \n\n");
    x = n;
    y = n;
    z = n;
    while (x >= 100){
        x /= 10;
    }

    printf("First two digits are\n %ld \n", x);

    if(x == 34 || x == 37){

        printf("American express card \n");
    }
    else if(x > 50 && x < 56){

        printf("Master card \n");
    }
    else if(x > 39 && x < 50 ){

        printf("Visa card \n");
    }
    else {
        printf("Invalid card \n");
    }

    while( y != 0 ){

        y = y / 10;
        ++count;
    }
    printf("%d \n ", count );


    if( count == 13 || count == 16 || count == 15 ){

        printf("valid number lenght\n");

    }else{

        printf("invalid lenght\n");
    }



    do{
        mod1 = z % 10;
        z = (z / 10);
        sum1 = sum1 + mod1;


    mod2 = z % 10;
        z = z / 10;

        mod2 = mod2 * 2;
        d1 = mod2 % 10;
        d2 = mod2 / 10;
        sum2 = sum2 + d1 + d2;

    }
    while(z > 0);
    total = sum1 + sum2;

    printf("%d\n", total);

    if(total % 10 != 0){

        printf("You put invalid card number\n");
    }else
        printf("Valid Card Number");
}
