#include <stdio.h>    
 
int main()                            
{
    int n;                         
   
    printf( "Please enter any integer: " ); 
    scanf( "%d", &n );                 
    if ( n < 0 )
      {                  
        printf ("is negative\n" ); 
      }
    else if ( n == 0 )
      {     
        printf("is zero\n" );       
      }
    else {
        printf( " is positive\n" ); 
    }
  return 0;
 
}
