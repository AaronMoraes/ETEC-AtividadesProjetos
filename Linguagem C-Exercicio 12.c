
#include <stdio.h>

int main() {
      int A[6], B[6], C[11],i=0;
      
  printf("\n VETOR A \n");
  for (i=0; i<6; ++i)
 {
     printf("A[%i]:", i);
     scanf("%d", &A[i]);
      C[i] = A[i];
 }
 
 
  printf("\n VETOR B \n");
  for (i=6; i<11; ++i)
 {
     printf("B[%i]:", i);
     scanf("%d", &B[i]);
   C[i] = B[i];
 }
 
 
 printf("\nIMPRESSÃO VETOR A\n");
   for (i=0; i<6; ++i)
   {
    printf("A[%i]: %d\n",i,A[i]);
   }   
    
   
   printf("\nIMPRESSÃO VETOR B\n");
   for (i=6; i<11; ++i)
   {
     printf("B[%i]: %d\n",i,B[i]);
   }  
   
 
     printf("\nIMPRESSÃO VETOR C\n");
  for (i = 0; i <11; i++) 
   {
       
     printf("C[%i]: %d\n",i,C[i]);
     
   }  
