#include "por_design.h"

/*
 * ถ้าบอร์ดไม่มีวงจรพิเศษ (เช่น encoder, rotary, backlight PWM ฯลฯ)
 * ก็ไม่ต้องใส่อะไรเพิ่ม ปล่อยไฟล์นี้ไว้สั้น ๆ แค่นี้ก็ได้
 * QMK จะจัดการ matrix scan ให้อัตโนมัติ
 */

void matrix_init_kb(void) {
    // เรียก init ของ QMK core ก่อน
    matrix_init_user();
}

void matrix_scan_kb(void) {
    // เรียก scan ของ QMK core ก่อน
    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    return process_record_user(keycode, record);
}
