
 
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in array :  \n");
   
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements of array :  \n",n);
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\n orignal array => a[%d]={",n);
    
    
    for (int i = 0; i < n; i++) {
        if (i==n-1){
               printf("'%d'}", a[i]);}
      else 
      printf("'%d',", a[i]);
        
    }

     printf("\n reversed array => a[%d]={",n);
   
      for (int i = n - 1; i >= 0; i--) {
        if (i==0){
               printf("'%d'}", a[i]);
        }
        else
        printf("'%d',", a[i]);
    }
    return 0;
}

