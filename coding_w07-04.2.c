#include <stdio.h> // ใช้สำหรับฟังก์ชัน printf() และ scanf()

int main() {
    int level; // ประกาศตัวแปรเพื่อเก็บค่าระดับสมาชิก

    // แสดงข้อความให้ผู้ใช้กรอกค่าระดับสมาชิก
    printf("Enter membership level (1-4): ");
    scanf("%d", &level); // รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร level

    // ใช้โครงสร้าง switch เพื่อตรวจสอบค่าระดับสมาชิก
    switch (level) {
        case 1: // ถ้าผู้ใช้กรอก 1
            printf("Silver Member: 5%% discount\n");
            break; // หยุดการทำงานใน switch หลังจากทำงานใน case นี้เสร็จ

        case 2: // ถ้าผู้ใช้กรอก 2
            printf("Gold Member: 10%% discount + Reward points\n");
            break;

        case 3: // ถ้าผู้ใช้กรอก 3
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;

        case 4: // ถ้าผู้ใช้กรอก 4
            printf("Diamond Member: 15%% discount + Reward points + Birthday gift + VIP events\n");
            break;

        default: // ถ้าผู้ใช้กรอกค่าที่ไม่ใช่ 1-4
            printf("Invalid membership level\n");
    }

    return 0; // สิ้นสุดการทำงานของโปรแกรม
}
