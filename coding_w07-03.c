#include <stdio.h>

int main() {
    int level;
    printf("Enter level (1-4): "); // รับค่าระดับจากผู้ใช้
    scanf("%d", &level);

    if (level < 1) {
        printf("The level below 1 is not allowed\n"); // กรณีที่ระดับต่ำกว่า 1
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n"); // กรณีที่ระดับสูงกว่า 4
    } else {
        switch (level) {
            case 1: printf("Beginner\n"); break;  // กรณีที่ระดับเท่ากับ 1
            case 2: printf("Intermediate\n"); break;  // กรณีที่ระดับเท่ากับ 2
            case 3: printf("Advanced\n"); break;  // กรณีที่ระดับเท่ากับ 3
            case 4: printf("Expert\n"); break; // กรณีที่ระดับเท่ากับ 4
        }
    }

    return 0;
}

// โปรแกรมนี้รับค่าระดับ (level) จากผู้ใช้ผ่านทางแป้นพิมพ์
// จากนั้นตรวจสอบค่าระดับที่ได้รับ
// ถ้าระดับต่ำกว่า 1 จะแสดงข้อความว่า The level below 1 is not allowed
// ถ้าระดับสูงกว่า 4 จะแสดงข้อความว่า The level above 4 is not allowed
// ถ้าระดับอยู่ในช่วง 1-4 จะใช้คำสั่ง switch เพื่อแสดงข้อความที่สอดคล้องกับระดับนั้น ๆ
// โดยมีข้อความดังนี้:
// 1 -> Beginner
// 2 -> Intermediate
// 3 -> Advanced
// 4 -> Expert

// ถ้าไม่มี break ในแต่ละ case จะเกิด "fall-through" คือแสดงผลหลายข้อความต่อเนื่องกัน
// แต่ในที่นี้เราใช้ break เพื่อหยุดการทำงานหลังจากแสดงข้อความที่ต้องการแล้ว
// ซึ่งเป็นการป้องกันไม่ให้โปรแกรมทำงานต่อไปยัง case ถัดไปโดยไม่ตั้งใจ

// เปรียบเทียบกรณีที่เข้าเงื่อนไขกับไม่เข้าเงื่อนไข 
// เช่น ถ้าผู้ใช้ป้อนค่า 2 โปรแกรมจะเข้าเงื่อนไข case 2 และแสดงข้อความ "Intermediate"
// แต่ถ้าผู้ใช้ป้อนค่า 5 โปรแกรมจะไม่เข้าเงื่อนไขใด ๆ ใน switch และจะแสดงข้อความว่า "The level above 4 is not allowed"
// ซึ่งแสดงให้เห็นถึงความแตกต่างระหว่างการเข้าเงื่อนไข