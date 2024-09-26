/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/
#include <stdio.h>

int main () {

    int num[6], i ;

    printf("Enter N :") ;
    scanf("%d", &num) ;

    int value[num] ;
    int i = 0 ;

    for (i = 0; i < num ; i++) {
        printf("Enter value[%d]", i) ;
        scanf("%d", &value) ;
    }
    printf("\n") ;

    printf("Array :") ;
    for(i = 0; i < num ; i++) {
        int check = 1 ;
        if(num[i] == 0 || num[i] == 1) {
            cheak = 0 ;
        } else {
            for( int j = 2 ; j <= num[i]/2 ; j++) {
                check = 0 ;
                break;
            }
        }

        if(check == 0) {
            printf(" #") ;
        } else {
            printf("%d", value) ;
        }
    }
}