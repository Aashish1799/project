#include <stdio.h>
int main() {
   int i, j ,n1,n2 ;
   printf("Enter the row and column of the matrix :[row column]"); 
   scanf("%d %d", &n1,&n2) ;
   int arr[n1][n2];
   for ( i = 0 ; i<n1;i++) {
      for ( j = 0 ;j<n2;j++){
            scanf("%d",&arr[i][j]);
      }
    }
    int arr2[n2][n1];
   for ( i = 0 ;i<n2;i++){
       for ( j = 0 ;j<n1;j++){
          arr2[i][j]=arr[j][i];
       }
   }
   printf("Transpose of the given matrix: \n" );

   for(i=0;i<n2;i++){
      for ( j =0 ;j<n1;j++){
         printf("%d ", arr2[i][j]);
      }
      printf("\n");
   } 
return 0;
}
