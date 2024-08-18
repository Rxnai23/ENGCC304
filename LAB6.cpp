#include <stdio.h>
    int main () {

        int number ;

        printf("Enter Your Number : ") ;
        scanf( "%d", &number ) ;
        for( int i = 0 ; i < number ; i++ ) {
            if( number %2 == 0 ) {
                for(int column = 0 ; column < number ; column++ ) {
                    if( i == column ) {
                        printf("1") ;
                    } else {
                        printf("0") ;
                    }
                }
            } else {
                for( int column = 0 ; column < number ; column++ ){
                    if( i + column == number - 1 ) {
                        printf("1") ;
                    } else {
                        printf("0") ;
                    }
                }
            }
            printf("\n") ;
        }
        return 0 ;
    }
    