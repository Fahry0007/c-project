#include<stdio.h>
int main(){
   int i,a[25],qt;
   printf("Enter The Quantity : ") ;
   scanf("%d",&qt );

   for (i=0;i<qt;i++){

   printf("Enter The number : ") ;
   scanf("%d",&a[i]) ;
   }

    for (i=0;i<qt;i++) {
        printf("The number %d\n",a[i]);
    }
}
