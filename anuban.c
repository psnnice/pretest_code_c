/*อนุบาลจีเนียสต้องการโปรแกรมเพื่อเก็บข้อมูลแรกเข้าของหนูน้อยอนุบาล 
1 โดยข้อมูลที่ต้องการจัดเก็บประกอบไปด้วย 
ลำดับที่ (Order), ชื่อ-สกุล (Name, Lastname), อายุ (Age), เพศ (gender), ความสูง(Height), น้ำหนัก (Weight)
, ค่าดัชนีมวลกาย (Body Mass Index : BMI) และห้องเรียน (Class_room)  
โดยโปรแกรมจะต้องเก็บข้อมูลของนักเรียนผ่านฟังชัน Keep_Std_inform () 
และมีการคำนวณดัชนีมวลกายด้วยฟังก์ชัน BMI_Calculation() 
ภายหลังจากเก็บข้อมูลเสร็จให้ใช้ตัวแปรชี้ตำแหน่ง Std_prt 
ชี้ตำแหน่งเพื่อแสดงผลข้อมูลของนักเรียนทุกคนออกสู่หน้าจอ
a. สูตรคำนวณ BMI 🙁 (Weight in Kg)/( Height in meter)2 )*/
#include <stdio.h>
#include <math.h>
int n;
scan(int){
    printf("Please Enter order : ");
    scanf("%d",n)
}
typedef struct stu
{
    char fn,ln,gen;
    float high,weight;
    int age;
};
stu *point[n];
stu str_stu[n]; 
Keep_Std_inform()
{
    printf("enter your name : ");
    scanf("%s",&point[i]->fn);
}
void main
{
    int i;
    

}



