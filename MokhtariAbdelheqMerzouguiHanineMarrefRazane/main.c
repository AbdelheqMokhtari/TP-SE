#include <stdio.h>
#include "remarkable_identities.h"
#include <stdlib.h>
void readAndB(int *a,int *b){
   printf("enter the value of a: ");
   scanf("%d",a);
   printf("enter the value of b: ");
   scanf("%d",b);
}
void pause(){
    printf("Press Any Key to Continue");  
    getchar();
    getchar();  
}

void menu(){
   
   int a,b;
   int MenuOption=0;
   printf("\n choose one of the following options :\n 1-(a+b)² \n 2-(a-b)²\n 3-(a+b)(a-b)\n 4-Exit\n Select the Correspandent number : ");
   scanf("%d",&MenuOption);
   switch(MenuOption){
      case 1 : 
         readAndB(&a,&b);
         printf("(%d+%d)² = %d\n",a,b,first_iden(a,b));
         pause();
         menu();
         break;
      case 2 :
         readAndB(&a,&b);
         printf("(%d-%d)² = %d\n",a,b,second_iden(a,b));
         pause();
         menu();
         break;
      case 3 :
         readAndB(&a,&b);
         printf("(%d+%d)(%d-%d) = %d\n",a,b,a,b,third_iden(a,b));
         pause();
	 menu();
         break;
      case 4:
	 exit(0); 
      default:
         
         menu();
         break;
   }
}
int main(){
   menu();
   return 0;
}
