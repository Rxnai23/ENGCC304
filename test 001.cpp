#include <stdio.h>

int main() {

        int row , coef = 1 , i , j , space ;
        printf("Enter your number : ") ;
    scanf("%d", &row) ;

        for( i = 0 ; i < row ; i++ ) {
            for( space = 1 ; space < row - i ; space++ )
                printf(" ") ;

            for( j = 0 ; j <= i ; j++ ) {
                if( j == 0 || i == 0 ) 
                    coef = 1 ;
                 else 
                coef = coef * (i - j + 1) / j ;
                printf( "%4d", coef ) ;
                
            }
            printf("\n") ;
        }

return 0 ;
   
}