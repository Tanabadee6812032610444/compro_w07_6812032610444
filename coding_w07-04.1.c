#include <stdio.h>

int main() {
    int level; // ประกาศตัวแปรสำหรับเก็บระดับสมาชิก

    // แสดงข้อความให้ผู้ใช้กรอกระดับสมาชิก (1-4)
    printf("Enter membership level (1-4): ");
    scanf("%d", &level); // รับค่าจากผู้ใช้แล้วเก็บไว้ในตัวแปร level

    // ตรวจสอบระดับสมาชิกด้วย if-else if
    if (level == 1) {
        // ถ้าเป็นสมาชิกระดับ 1 (Silver)
        printf("Silver Member: 5%% discount\n");
    } else if (level == 2) {
        // ถ้าเป็นสมาชิกระดับ 2 (Gold)
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (level == 3) {
        // ถ้าเป็นสมาชิกระดับ 3 (Platinum)
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        // ถ้าเป็นสมาชิกระดับ 4 (Diamond)
        printf("Diamond Member: 15%% discount + Reward points + Birthday gift + VIP events\n");
    } else {
        // ถ้าใส่ค่าไม่ตรงกับ 1-4
        printf("Invalid membership level\n");
    }

    return 0; // จบการทำงานของโปรแกรม
}