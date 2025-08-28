#include <stdio.h>

int main() {
   float score; //ตัวแปรเก็บคะแนน
   float finalScore; //ตัวแปรเก็บคะแนนรวม (หลังเพิ่มโบนัส)

   //รับค่าคะแนนสอบจากผู้ใช้
   printf("Enter your score:");
   scanf("%f", &score);

   //ดูว่าคะแนนมากกว่าหรือเท่ากับ 50 หรือไม่
   if (score >= 50) {
    //ถ้าคะแนนมากกว่าเท่ากับ 50 ให้บวกคะแนนโบนัส 5%
    finalScore = score + (score * 0.05);
    printf("You got a bonus 5%%!\n");
   } else {
    //ถ้าคะแนนน้อยกว่า 50 ไม่ต้องบวกโบนัส
    finalScore = score;
   }
    //แสดงผลคะแนนรวม (รวมโบนัสถ้ามี)
   printf("final score = %.2f\n", finalScore);

   //แสดงข้อความปิดท้าย
   printf("End of evaluation\n");
    

    return 0;
}