/*
    จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
    - ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
    - โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
    - ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
        - หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
        - หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
        - หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
        - หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
        - เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม

    หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
        rand() % 100 + 1
    หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย

    Test case & Output:
        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) :
            20
        Sorry, the winning number is HIGHER than 20. (Score=90)
        Guess the winning number (21-100) :
            50
        Sorry, the winning number is LOWER than 50. (Score=80)
        Guess the winning number (21-49) :
            42
        That is correct! The winning number is 42.
        Score this game: 80

        Do you want to play game (1=play,-1=exit) :
            1
        (Score=100)
        Guess the winning number (1-100) : 
            75
        Sorry, the winning number is LOWER than 75. (Score=90)
        Guess the winning number (1-74) : 
            20
        Sorry, the winning number is LOWER than 20. (Score=80)
        Guess the winning number (1-19) : 
            2
        Sorry, the winning number is HIGHER than 2. (Score=70)
        Guess the winning number (3-19) : 
            15
        That is correct! The winning number is 15.
        Score this game: 70

        Do you want to play game (1=play,-1=exit) :
            -1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int num, guess ;
    int random ;

    srand( time( NULL ) ) ;

    while ( true ) {
        int most = 100 , least = 1 ;
        int score = 100 ;

        printf ( "Do you want to play game ( 1 = play , -1 = exit ) : " ) ;
        scanf ( "%d", &num ) ;

        if (num != 1) {
            printf ( "you don't want to play" ) ;
            return 0 ;
        } else if ( num == 1 ) {

        random = rand() % 100 + 1 ;
        printf(" Random number is %d \n " , random) ;
        printf ( "score = %d \n" , score ) ;
        
        while ( 1 ) {
            printf ( "Guess the winning number (%d-%d) :", least, most ) ;
            scanf ( "%d" , &guess ) ;

            if ( guess < random ) {
                printf ( "Sorry, the winning number is HIGHER than %d \n" , guess ) ;
                // printf ( "Guess the winning number (%d-%d)" , least, most ) ;
                
                if ( guess > least ) {
                    least = guess + 1 ;
                } //end if least
                score -= 10 ;

                
            } else if ( guess > random ) {
                printf ( "Sorry, the winning number is LOWER than %d\n" , guess ) ;
                // printf ( "Guess the winning number (%d-%d)" , least , most ) ;
                
                if ( guess < most ) {
                     most = guess -1 ;
                } // end if most
                score -= 10 ;
                
            } else if ( guess == random ) {
                printf ( "That is correct! The winning number is %d\n" , guess ) ;
                break ;
            } //end else if

            printf ( "Score this game: %d\n" , score ) ;

            if ( score <= 0 ) {
                printf ( "Game over!\n" ) ;
                break ;
            } // end if score
            
        } //end while
        }
    } //end while
    return 0 ;

} //end main function.  