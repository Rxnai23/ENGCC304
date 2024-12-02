#include <stdio.h>

int main() {

    char character ;
    int num1, num2 ;
    float numf ;
    char str[100] ;
    
    printf("Enter a character: \n") ;
    scanf( " %c", &character ) ;

    printf( "Enter two integers: \n" ) ;
    scanf( "%d %d", &num1, &num2 ) ;

    printf( "Enter a floating-point number: \n" ) ;
    scanf( "%f", &numf ) ;

    printf( "Enter a string: " ) ;
    scanf( " %s", str ) ;

    printf( "\nYou entered character: %c\n", character ) ;
    printf( "You entered integers: %d and %d\n", num1, num2 ) ;
    printf( "You entered floating-point number: %.2f\n", numf ) ;
    printf( "You entered string: %s\n", str ) ;


    return 0 ;
}//end funetion