#include <stdio.h>

int main() {
    int number ;
    printf("Enter your number : ") ;
    scanf("%d", &number) ;

    for(int i = 0 ; i < number ; i++) {
        for(int j = 0 ; j < number ; j++) {
            if((number %2 == 0 && i == j) || (number %2 == 1 && i + j == number - 1) ) {
                printf("1") ; 
            } else {
                printf("0") ;
            }//end if
        }//end for
        printf("\n") ; 
    }//end for
    return 0 ;
}//end main function