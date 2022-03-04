#include <stdio.h>

#define N 5

int main() 
{
   int a[N] = {5, 3, 4, 1, 2};
   int i, j, t;
 
   printf("Input:\n");
   for(i = 0; i < N; i++)
      printf("%d ", a[i]);

   printf("\n");
   
   for (i = 0; i < N-1; i++){
      for (j = i+1; j < N; j++){
         if (a[i] > a[j]){
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }
  
   printf ("Output:\n");
   for (i = 0; i < N; i++)
      printf("%d ", a[i]);
   return 0;
}
