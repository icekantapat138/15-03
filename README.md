# cpp-inheritance

## Student Name

\<id> \<nickname> \<name>

## Tasks

0. ใช้คำสั่ง `make` เพื่อรันโปรแกรม สังเกตผลลัพธ์

1. repository นี้มีคลาสศิลปิน Artist (ไฟล์ Artist.cpp) และคลาสนักกีฬา Athlete (ไฟล์ Athlete) ซึ่งมี implementation บางส่วนที่ซ้ำกัน

2. ให้สร้าง super class ที่ชื่อว่า Person นำส่วนที่ซ้ำกันของ Artist และ Athlete ไปไว้ในคลาส Person

3. ปรับ implementation ของคลาส Artist และคลาส Athlete ให้สืบทอดคลาส Person จากนั้นทดสอบความถูกต้องโดยการรันโปรแกรม ต้องได้ผลลัพธ์เหมือนกับข้อ 0. โดยไม่แสดงความผิดพลาด (ก่อน `make` ใหม่ ให้สั่ง `make clean`)

4. สร้าง sub class ของคลาส Person เพิ่มอีก 1 คลาส และให้มีการทำงานที่แตกต่างไปจากคลาส Artist และคลาส Athlete โดยคลาสใหม่ที่สร้างจะต้องมีความเหมาะสมตามความสัมพันธ์ IS-A relationship

5. ปรับแก้ Makefile เพื่อให้ใช้คลาสใหม่ที่สร้างขึ้นมาได้

6. สร้างตัวแปร object ใน main เพื่อทดสอบการเรียก introduce() จาก object ที่สร้างจากคลาสใหม่ จากนั้นทดสอบความถูกต้องโดยการรันโปรแกรม

7. เพิ่ม array ของ Person และให้ array นี้เก็บข้อมูลของ Artist, Athlete และ object ของคลาสใหม่ได้ โดยใช้ array เดียว (Polymorphism)

8. ใช้ loop เรียก method introduce() ของทุก object ใน array สังเกตผลที่ได้

9. push งาน ส่งภายในคาบ จึงจะเช็คชื่อเข้าเรียนให้ (ไม่ตรวจงานของนิสิตที่ส่ง late ทุกกรณี)
