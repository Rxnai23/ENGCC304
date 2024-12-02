/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>

int main() {

    int num ;
    int Armstrong ( int num ) ;  // ประกาศใช้ Armstrong 

    printf( "Enter Number : " ) ;
    scanf( "%d", &num ) ;

    int result = Armstrong( num ) ;

    if ( result == 1 ) {
        printf( "Pass \n" ) ;
    } else {
        printf( "Not pass \n" ) ;
    } //end if else

    return 0 ;
} //end main function.

int Armstrong ( int num ) {

    int data, remain, ans = 0, n =0 ;

    data = num ;

    while ( data != 0 ) {
        data /= 10 , n++ ;
    } // end while เช็คว่ามีกี่ตำแหน่ง

    data = num ; // กำหนดค่า data อีกรอบเพื่อยกกำลัง

    while ( data != 0 ) {
        int power = 1 ;   // power ตัวเก็บค่าตัวเลขตัวท้าย
        remain = data % 10 ;   

        for ( int i = 0; i < n; i++ ) {
            power *= remain ;    // remain = 4, n = 2 ans 16
        }
        
        ans += power ; 
        data /= 10 ;  // ตัดหลัดออกอีกหลัก แล้วคำนวณอันต่อไป
    } // end while คำนวณเลขยกกำลัง
    
    if ( ans == num ) {
        return 1 ; // true
    } else {
        return 0 ;  // false
    } // end if else

} //end Armstrong function.