#include<stdio.h>


int main(void){
int m;    
int n;

   do{
     printf("\npleae enter height between 1 to 8\n\n");
     scanf("%d",&m);
     n = m;
   
      for(int i= 0 ; i<n  ; i++  ){
         for(int k = i; k<=n-2  ; k++  ){
            printf(" ");
         }
         for(int j = 0; j<i+1; j++ ){
            printf("#");
         }
         printf("\n");
      }
   }while(n>0 && n<=8);
}