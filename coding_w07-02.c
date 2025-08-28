#include <stdio.h>

int main() {
   int x, y;
    //รับค่าตัวแปร x และ y จากผู้ใช้
   printf("Enter value for x:");
   scanf("%d", &x);

   printf("Enter value for y:");
   scanf("%d", &y);
    
   //เปรียบเทียบค่า x กับ y
   if (x > y) {
    //กรณี  มากกว่า
        printf("x is greater than y\n");
   } else if (x < y) {
    //กรณี  น้อยกว่า
        printf("x is less than y\n");
   } else {
    //กรณี  เท่ากับ 
        printf("x is equal to y\n");
   }

    return 0;
}

/*โปรแกรมนี้รับค่าตัวเลขสองจำนวนจากผู้ใช้ผ่านทางแป้นพิมพ์
จากนั้นเปรียบเทียบค่าระหว่าง x กับ y 
ถ้า x มากกว่า y จะแสดงข้อความ x is greater than y
ถ้า x น้อยกว่า y จแสดงข้อความ x is less than y  
ถ้าค่าเท่ากัน จะแสดงข้อความ x is equal to y */