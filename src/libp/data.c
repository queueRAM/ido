__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
# 10011C30
glabel _stdbuf
    .byte 0x0f,0xb5,0x19,0xa0,0x0f,0xb5,0x29,0xb0
    .type _stdbuf, @object
    .size _stdbuf, .-_stdbuf # 8

# 10011C38
glabel _iob
    .byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xb5,0x29,0xb0,0x00,0x00,0x00,0x00,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xb5,0x16,0x80,0x00,0x00,0x00,0x00,0x06,0x02
    .type _iob, @object
    .size _iob, .-_iob # 46




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");