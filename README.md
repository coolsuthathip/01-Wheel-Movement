# 01-Wheel-Movement
ลิงก์วิธีการติดตั้งบอร์ด ESP 32
https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/
 
สำหรับหุ่นยนต์รุ่นที่ 2 ให้ใช้ไฟล์จาก V2 turnWheel
*ในการติดตั้ง Board ESP 32 ให้เลือกเป็น version 2.0.11 หากเป็น version ใหม่กว่าจะทำให้เมื่ออัพโหลดโปรแกรมแล้วมอเตอร์ไม่หมุน
การแก้ไขปัญหาเมื่อหา PORT ไม่เจอ
1.	ในช่องค้นหาของ window ให้ค้นหา Device Manager
2.	ในหัวข้อ Ports (COM & LPT) ให้ตรวจสอบว่ามีสัญลักษณ์เครื่องหมาย ! สีเหลืองหรือไม่ 
3.	ถ้ามีสัญลักษณ์ตามข้อ 2 ให้ทำการติดตั้ง driver จาก https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads
4.	ทำการ download ไฟล์จากลิงก์ตามรูป และทำการแตกไฟล์ จากนั้นเลือกติดตั้งตามระบบปฏิบัติการที่โรงเรียนใช้

