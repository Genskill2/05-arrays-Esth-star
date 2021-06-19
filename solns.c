/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>

/*max*/
  int max(int a[], int n)
  {
    int max = 0;
    for(int i=0; i<n; i++){
      if(a[i]>max)
        max = a[i];
    } return max;
    
  }
  
  /*min*/
  int min(int a[],int n)
  {
    int min = a[0];
    for(int i=0; i<n; i++)
    {
      if(a[i]<min)
        min =a[i];
    }return min;
  }
 
    
    
    float average(int a[0], int n)
    float s=0;
float avg=0;
      for( i=o; i<n;i++)
      { s=s+a[i];}
       avg =s/n;
     return avg;
    }
  
  
  /*mode*/
  
  int mode(int a[],int n)
    
     {
   int cnt = 0, count = 0, i, j, max=0;

   for (i = 0; i<n; i++) {
      
      
      for (j = 0; j < n; j++) {
         if (a[j] == a[i]){
         ++cnt;
      }
      }
      if (cnt>=max) {
         count = max;
         max= a[i];
      }
   }

   return max;
}
    
       int factors(int n, int a[])
       {
         int i,j=0;
         for(i=2; i<=n; i++)
           
         { 
           while(n%i == 0)
           {
             n=n/i;
             a[j] = i;
             j++;
           }
         }
         return j;
       }
          
      
      
      
