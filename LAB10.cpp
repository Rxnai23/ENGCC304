/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>
#include <string.h>

int main() {

    char word1[100], word2[100] ;

    printf( " Enter word : " ) ;
    scanf( "%s", word1 ) ;
    
    int len = strlen( word1 ) ; //strlen จะนับจน.อักษรใน str ว่ามีกี่ตัว *ไม่นับเครื่องหมด '/0'*

    for ( int i = 0; i < len; i++ ) {
        word2[i] = word1[ len - i - 1 ] ;
    
    }

    word2[len] = '\0' ; //เครื่องหมายสิ้นสุด str
    printf( "word --| %s |-- \n ", word2 ) ; // เช็คว่า word กลับตำแหน่งหรือยัง

    int output = strcmp( word1, word2 ) ; //strcmp คือ การเปรียบเทียบ str ทั้ง 2 ตัวว่าตัวอักษรเท่ากันไหม

    if ( output == true ) {
        printf( "Pass" ) ;
    } else {
        printf( "Not pass" ) ;
    }
    
    return 0 ;
}//end main function