#include <stdio.h>

int main() {
      int A[10], B[10], i;
      
  printf("VETOR A \n");
  for (i=0; i<11; ++i)
 {
     printf("A[%i]:", i);
     scanf("%d", &A[i]);
 }
 
 printf("\nIMPRESSÃO VETOR A\n");
   for (i=0; i<11; ++i)
   {
     printf("A[%i]: %d\n",i,A[i]);
   }   
   
   
  printf("\nIMPRESSÃO VALOR B\n");
  for(i=0; i<11; ++i)
  {
       A[i] = A[i] + 1;
      printf("B[%i]: %d\n", i,A[i]);
    
    
    
    
}
    return 0;
}
