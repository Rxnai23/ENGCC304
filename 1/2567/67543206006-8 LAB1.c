#include <stdio.h>
int main() {

    int age = 0 ;
    char name [100] ;

    scanf( "%s",&name ) ;
    scanf( "%d", &age ) ;

    printf( "Enter your name: " ) ;
    printf( "Enter your age: " ) ;

    printf( "- - - - - -\n" ) ;
    printf( "Hello %s \n", name ) ; //TODO: #14 Say hello to user.
    printf( "Age = %d\n", age ) ; //TODO: #15 display user their age number plus 1.

    return 0 ;
}//end funetion
