__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
D_10011900:
    # 00487E48 initur
    .byte 0x00,0x00,0x00,0x18,0x04,0x03,0x8c,0xb0,0x02,0x40,0x00,0x84,0x00,0x00,0x60,0x00,0x00,0x20,0x00,0x00

D_10011914:
    # 00487E48 initur
    .byte 0x00,0x00,0x20,0x00,0x01,0x00,0x00,0x00,0x00,0x04,0x80,0x00

D_10011920:
    # 00487E48 initur
    .byte 0x00,0x00,0x12,0x01,0x80,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_1001192C:
    # 00487E48 initur
    .byte 0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x20,0x20,0x0e,0x91,0x00,0x10,0x00,0x10,0x00,0x00



.bss
    .balign 4
# 1001C680
glabel memorychars
    # 00487E48 initur
    .space 4
    .size memorychars, 4
    .type memorychars, @object

    .balign 4
# 1001C684
glabel datachars
    # 00487E48 initur
    .space 4
    .size datachars, 4
    .type datachars, @object

    .balign 8
# 1001C7F8
glabel setconstantchars
    # 00487E48 initur
    .space 8
    .size setconstantchars, 8
    .type setconstantchars, @object

    .balign 16
# 1001C8C0
glabel dtytype
    # 00487E48 initur
    .space 28
    .size dtytype, 28
    .type dtytype, @object

    .balign 16
# 1001C8E0
glabel mtytype
    # 00487E48 initur
    .space 28
    .size mtytype, 28
    .type mtytype, @object

    .balign 16
# 1001CAF8
glabel opchashtab
    .space 264
    .size opchashtab, 264
    .type opchashtab, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel resetur
    .ent resetur
/* 00487960 3C1C0FB9 */  .cpload $t9
/* 00487964 279C2930 */  
/* 00487968 0399E021 */  
/* 0048796C 8F998764 */  lw    $t9, %call16(ugetclose)($gp)
/* 00487970 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00487974 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487978 0320F809 */  jalr  $t9
/* 0048797C AFBC0018 */   sw    $gp, 0x18($sp)
/* 00487980 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00487984 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487988 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048798C 03E00008 */  jr    $ra
/* 00487990 00000000 */   nop   
    .type resetur, @function
    .size resetur, .-resetur
    .end resetur

    .type func_00487994, @function
func_00487994:
    # 00487B7C readuinstr
/* 00487994 8CA20000 */  lw    $v0, ($a1)
/* 00487998 24030008 */  li    $v1, 8
/* 0048799C 5462001F */  bnel  $v1, $v0, .L00487A1C
/* 004879A0 24010003 */   li    $at, 3
/* 004879A4 908E0000 */  lbu   $t6, ($a0)
/* 004879A8 24010049 */  li    $at, 73
/* 004879AC 55C1001B */  bnel  $t6, $at, .L00487A1C
/* 004879B0 24010003 */   li    $at, 3
/* 004879B4 908F0001 */  lbu   $t7, 1($a0)
/* 004879B8 2406006E */  li    $a2, 110
/* 004879BC 54CF0017 */  bnel  $a2, $t7, .L00487A1C
/* 004879C0 24010003 */   li    $at, 3
/* 004879C4 90980002 */  lbu   $t8, 2($a0)
/* 004879C8 24070066 */  li    $a3, 102
/* 004879CC 54F80013 */  bnel  $a3, $t8, .L00487A1C
/* 004879D0 24010003 */   li    $at, 3
/* 004879D4 90990003 */  lbu   $t9, 3($a0)
/* 004879D8 24080069 */  li    $t0, 105
/* 004879DC 5519000F */  bnel  $t0, $t9, .L00487A1C
/* 004879E0 24010003 */   li    $at, 3
/* 004879E4 90890004 */  lbu   $t1, 4($a0)
/* 004879E8 54C9000C */  bnel  $a2, $t1, .L00487A1C
/* 004879EC 24010003 */   li    $at, 3
/* 004879F0 908A0005 */  lbu   $t2, 5($a0)
/* 004879F4 550A0009 */  bnel  $t0, $t2, .L00487A1C
/* 004879F8 24010003 */   li    $at, 3
/* 004879FC 908B0006 */  lbu   $t3, 6($a0)
/* 00487A00 24010074 */  li    $at, 116
/* 00487A04 55610005 */  bnel  $t3, $at, .L00487A1C
/* 00487A08 24010003 */   li    $at, 3
/* 00487A0C 908C0007 */  lbu   $t4, 7($a0)
/* 00487A10 24010079 */  li    $at, 121
/* 00487A14 1181000E */  beq   $t4, $at, .L00487A50
/* 00487A18 24010003 */   li    $at, 3
.L00487A1C:
/* 00487A1C 2406006E */  li    $a2, 110
/* 00487A20 24070066 */  li    $a3, 102
/* 00487A24 14410017 */  bne   $v0, $at, .L00487A84
/* 00487A28 24080069 */   li    $t0, 105
/* 00487A2C 908D0000 */  lbu   $t5, ($a0)
/* 00487A30 550D0015 */  bnel  $t0, $t5, .L00487A88
/* 00487A34 24030009 */   li    $v1, 9
/* 00487A38 908E0001 */  lbu   $t6, 1($a0)
/* 00487A3C 54CE0012 */  bnel  $a2, $t6, .L00487A88
/* 00487A40 24030009 */   li    $v1, 9
/* 00487A44 908F0002 */  lbu   $t7, 2($a0)
/* 00487A48 54EF000F */  bnel  $a3, $t7, .L00487A88
/* 00487A4C 24030009 */   li    $v1, 9
.L00487A50:
/* 00487A50 24020039 */  li    $v0, 57
/* 00487A54 2418002E */  li    $t8, 46
/* 00487A58 24190065 */  li    $t9, 101
/* 00487A5C A0820000 */  sb    $v0, ($a0)
/* 00487A60 A0820001 */  sb    $v0, 1($a0)
/* 00487A64 A0980002 */  sb    $t8, 2($a0)
/* 00487A68 A0820003 */  sb    $v0, 3($a0)
/* 00487A6C A0990004 */  sb    $t9, 4($a0)
/* 00487A70 A0820005 */  sb    $v0, 5($a0)
/* 00487A74 A0820006 */  sb    $v0, 6($a0)
/* 00487A78 A0820007 */  sb    $v0, 7($a0)
/* 00487A7C 03E00008 */  jr    $ra
/* 00487A80 ACA30000 */   sw    $v1, ($a1)

.L00487A84:
/* 00487A84 24030009 */  li    $v1, 9
.L00487A88:
/* 00487A88 54620020 */  bnel  $v1, $v0, .L00487B0C
/* 00487A8C 24010004 */   li    $at, 4
/* 00487A90 90890000 */  lbu   $t1, ($a0)
/* 00487A94 2401002D */  li    $at, 45
/* 00487A98 5521001C */  bnel  $t1, $at, .L00487B0C
/* 00487A9C 24010004 */   li    $at, 4
/* 00487AA0 908A0001 */  lbu   $t2, 1($a0)
/* 00487AA4 24010049 */  li    $at, 73
/* 00487AA8 55410018 */  bnel  $t2, $at, .L00487B0C
/* 00487AAC 24010004 */   li    $at, 4
/* 00487AB0 908B0002 */  lbu   $t3, 2($a0)
/* 00487AB4 54CB0015 */  bnel  $a2, $t3, .L00487B0C
/* 00487AB8 24010004 */   li    $at, 4
/* 00487ABC 908C0003 */  lbu   $t4, 3($a0)
/* 00487AC0 54EC0012 */  bnel  $a3, $t4, .L00487B0C
/* 00487AC4 24010004 */   li    $at, 4
/* 00487AC8 908D0004 */  lbu   $t5, 4($a0)
/* 00487ACC 550D000F */  bnel  $t0, $t5, .L00487B0C
/* 00487AD0 24010004 */   li    $at, 4
/* 00487AD4 908E0005 */  lbu   $t6, 5($a0)
/* 00487AD8 54CE000C */  bnel  $a2, $t6, .L00487B0C
/* 00487ADC 24010004 */   li    $at, 4
/* 00487AE0 908F0006 */  lbu   $t7, 6($a0)
/* 00487AE4 550F0009 */  bnel  $t0, $t7, .L00487B0C
/* 00487AE8 24010004 */   li    $at, 4
/* 00487AEC 90980007 */  lbu   $t8, 7($a0)
/* 00487AF0 24010074 */  li    $at, 116
/* 00487AF4 57010005 */  bnel  $t8, $at, .L00487B0C
/* 00487AF8 24010004 */   li    $at, 4
/* 00487AFC 90990008 */  lbu   $t9, 8($a0)
/* 00487B00 24010079 */  li    $at, 121
/* 00487B04 1321000F */  beq   $t9, $at, .L00487B44
/* 00487B08 24010004 */   li    $at, 4
.L00487B0C:
/* 00487B0C 14410019 */  bne   $v0, $at, .L00487B74
/* 00487B10 00000000 */   nop   
/* 00487B14 90890000 */  lbu   $t1, ($a0)
/* 00487B18 2401002D */  li    $at, 45
/* 00487B1C 15210015 */  bne   $t1, $at, .L00487B74
/* 00487B20 00000000 */   nop   
/* 00487B24 908A0001 */  lbu   $t2, 1($a0)
/* 00487B28 150A0012 */  bne   $t0, $t2, .L00487B74
/* 00487B2C 00000000 */   nop   
/* 00487B30 908B0002 */  lbu   $t3, 2($a0)
/* 00487B34 14CB000F */  bne   $a2, $t3, .L00487B74
/* 00487B38 00000000 */   nop   
/* 00487B3C 908C0003 */  lbu   $t4, 3($a0)
/* 00487B40 14EC000C */  bne   $a3, $t4, .L00487B74
.L00487B44:
/* 00487B44 24020039 */   li    $v0, 57
/* 00487B48 240D002E */  li    $t5, 46
/* 00487B4C 240E0065 */  li    $t6, 101
/* 00487B50 A0820001 */  sb    $v0, 1($a0)
/* 00487B54 A0820002 */  sb    $v0, 2($a0)
/* 00487B58 A08D0003 */  sb    $t5, 3($a0)
/* 00487B5C A0820004 */  sb    $v0, 4($a0)
/* 00487B60 A08E0005 */  sb    $t6, 5($a0)
/* 00487B64 A0820006 */  sb    $v0, 6($a0)
/* 00487B68 A0820007 */  sb    $v0, 7($a0)
/* 00487B6C A0820008 */  sb    $v0, 8($a0)
/* 00487B70 ACA30000 */  sw    $v1, ($a1)
.L00487B74:
/* 00487B74 03E00008 */  jr    $ra
/* 00487B78 00000000 */   nop   

glabel readuinstr
    .ent readuinstr
    # 00439C40 getop
    # 0045806C main
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 0047FF7C skipproc
/* 00487B7C 3C1C0FB9 */  .cpload $t9
/* 00487B80 279C2714 */  
/* 00487B84 0399E021 */  
/* 00487B88 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 00487B8C 8F998760 */  lw    $t9, %call16(ugeteof)($gp)
/* 00487B90 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00487B94 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00487B98 00809025 */  move  $s2, $a0
/* 00487B9C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00487BA0 AFB10018 */  sw    $s1, 0x18($sp)
/* 00487BA4 AFB00014 */  sw    $s0, 0x14($sp)
/* 00487BA8 0320F809 */  jalr  $t9
/* 00487BAC AFA50064 */   sw    $a1, 0x64($sp)
/* 00487BB0 24010001 */  li    $at, 1
/* 00487BB4 14410004 */  bne   $v0, $at, .L00487BC8
/* 00487BB8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00487BBC 240E0022 */  li    $t6, 34
/* 00487BC0 1000009B */  b     .L00487E30
/* 00487BC4 A24E0000 */   sb    $t6, ($s2)
.L00487BC8:
/* 00487BC8 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487BCC 0320F809 */  jalr  $t9
/* 00487BD0 00000000 */   nop   
/* 00487BD4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487BD8 AE420000 */  sw    $v0, ($s2)
/* 00487BDC 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487BE0 0320F809 */  jalr  $t9
/* 00487BE4 00000000 */   nop   
/* 00487BE8 92580000 */  lbu   $t8, ($s2)
/* 00487BEC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487BF0 AE420004 */  sw    $v0, 4($s2)
/* 00487BF4 0018C880 */  sll   $t9, $t8, 2
/* 00487BF8 8F888DEC */  lw     $t0, %got(utab)($gp)
/* 00487BFC 0338C821 */  addu  $t9, $t9, $t8
/* 00487C00 0019C880 */  sll   $t9, $t9, 2
/* 00487C04 0338C823 */  subu  $t9, $t9, $t8
/* 00487C08 03284821 */  addu  $t1, $t9, $t0
/* 00487C0C 892B0000 */  lwl   $t3, ($t1)
/* 00487C10 992B0003 */  lwr   $t3, 3($t1)
/* 00487C14 27AF0041 */  addiu $t7, $sp, 0x41
/* 00487C18 24010002 */  li    $at, 2
/* 00487C1C A9EB0000 */  swl   $t3, ($t7)
/* 00487C20 B9EB0003 */  swr   $t3, 3($t7)
/* 00487C24 892A0004 */  lwl   $t2, 4($t1)
/* 00487C28 992A0007 */  lwr   $t2, 7($t1)
/* 00487C2C 2650000C */  addiu $s0, $s2, 0xc
/* 00487C30 A9EA0004 */  swl   $t2, 4($t7)
/* 00487C34 B9EA0007 */  swr   $t2, 7($t7)
/* 00487C38 892B0008 */  lwl   $t3, 8($t1)
/* 00487C3C 992B000B */  lwr   $t3, 0xb($t1)
/* 00487C40 A9EB0008 */  swl   $t3, 8($t7)
/* 00487C44 B9EB000B */  swr   $t3, 0xb($t7)
/* 00487C48 892A000C */  lwl   $t2, 0xc($t1)
/* 00487C4C 992A000F */  lwr   $t2, 0xf($t1)
/* 00487C50 A9EA000C */  swl   $t2, 0xc($t7)
/* 00487C54 B9EA000F */  swr   $t2, 0xf($t7)
/* 00487C58 912B0010 */  lbu   $t3, 0x10($t1)
/* 00487C5C A1EB0010 */  sb    $t3, 0x10($t7)
/* 00487C60 912A0011 */  lbu   $t2, 0x11($t1)
/* 00487C64 A1EA0011 */  sb    $t2, 0x11($t7)
/* 00487C68 912B0012 */  lbu   $t3, 0x12($t1)
/* 00487C6C A1EB0012 */  sb    $t3, 0x12($t7)
/* 00487C70 93A30051 */  lbu   $v1, 0x51($sp)
/* 00487C74 10610010 */  beq   $v1, $at, .L00487CB8
/* 00487C78 AFA30058 */   sw    $v1, 0x58($sp)
/* 00487C7C 24620001 */  addiu $v0, $v1, 1
/* 00487C80 00026080 */  sll   $t4, $v0, 2
/* 00487C84 01928821 */  addu  $s1, $t4, $s2
.L00487C88:
/* 00487C88 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487C8C 0320F809 */  jalr  $t9
/* 00487C90 00000000 */   nop   
/* 00487C94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487C98 AE02FFFC */  sw    $v0, -4($s0)
/* 00487C9C 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487CA0 0320F809 */  jalr  $t9
/* 00487CA4 00000000 */   nop   
/* 00487CA8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487CAC 26100008 */  addiu $s0, $s0, 8
/* 00487CB0 1611FFF5 */  bne   $s0, $s1, .L00487C88
/* 00487CB4 AE02FFF8 */   sw    $v0, -8($s0)
.L00487CB8:
/* 00487CB8 93AD0050 */  lbu   $t5, 0x50($sp)
/* 00487CBC 51A0005D */  beql  $t5, $zero, .L00487E34
/* 00487CC0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00487CC4 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487CC8 0320F809 */  jalr  $t9
/* 00487CCC 00000000 */   nop   
/* 00487CD0 8FAE0058 */  lw    $t6, 0x58($sp)
/* 00487CD4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487CD8 000EC080 */  sll   $t8, $t6, 2
/* 00487CDC 02588021 */  addu  $s0, $s2, $t8
/* 00487CE0 AE020000 */  sw    $v0, ($s0)
/* 00487CE4 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487CE8 0320F809 */  jalr  $t9
/* 00487CEC 00000000 */   nop   
/* 00487CF0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487CF4 AE020004 */  sw    $v0, 4($s0)
/* 00487CF8 92440001 */  lbu   $a0, 1($s2)
/* 00487CFC 3C01004E */  lui   $at, 0x4e
/* 00487D00 34218000 */  ori   $at, $at, 0x8000
/* 00487D04 3084001F */  andi  $a0, $a0, 0x1f
/* 00487D08 2C990020 */  sltiu $t9, $a0, 0x20
/* 00487D0C 00194023 */  negu  $t0, $t9
/* 00487D10 01017824 */  and   $t7, $t0, $at
/* 00487D14 008F4804 */  sllv  $t1, $t7, $a0
/* 00487D18 05220006 */  bltzl $t1, .L00487D34
/* 00487D1C 8E020000 */   lw    $v0, ($s0)
/* 00487D20 924A0000 */  lbu   $t2, ($s2)
/* 00487D24 24010013 */  li    $at, 19
/* 00487D28 55410042 */  bnel  $t2, $at, .L00487E34
/* 00487D2C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00487D30 8E020000 */  lw    $v0, ($s0)
.L00487D34:
/* 00487D34 24420003 */  addiu $v0, $v0, 3
/* 00487D38 04410002 */  bgez  $v0, .L00487D44
/* 00487D3C 00400821 */   move  $at, $v0
/* 00487D40 24410003 */  addiu $at, $v0, 3
.L00487D44:
/* 00487D44 00011083 */  sra   $v0, $at, 2
/* 00487D48 304B0001 */  andi  $t3, $v0, 1
/* 00487D4C 11600002 */  beqz  $t3, .L00487D58
/* 00487D50 24010001 */   li    $at, 1
/* 00487D54 24420001 */  addiu $v0, $v0, 1
.L00487D58:
/* 00487D58 24430001 */  addiu $v1, $v0, 1
/* 00487D5C 10610012 */  beq   $v1, $at, .L00487DA8
/* 00487D60 8FA20064 */   lw    $v0, 0x64($sp)
/* 00487D64 00036080 */  sll   $t4, $v1, 2
/* 00487D68 01828821 */  addu  $s1, $t4, $v0
/* 00487D6C 24500004 */  addiu $s0, $v0, 4
.L00487D70:
/* 00487D70 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487D74 0320F809 */  jalr  $t9
/* 00487D78 00000000 */   nop   
/* 00487D7C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487D80 AE02FFFC */  sw    $v0, -4($s0)
/* 00487D84 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487D88 0320F809 */  jalr  $t9
/* 00487D8C 00000000 */   nop   
/* 00487D90 26100008 */  addiu $s0, $s0, 8
/* 00487D94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487D98 1611FFF5 */  bne   $s0, $s1, .L00487D70
/* 00487D9C AE02FFF8 */   sw    $v0, -8($s0)
/* 00487DA0 92440001 */  lbu   $a0, 1($s2)
/* 00487DA4 3084001F */  andi  $a0, $a0, 0x1f
.L00487DA8:
/* 00487DA8 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 00487DAC 000D7023 */  negu  $t6, $t5
/* 00487DB0 3C01000C */  lui   $at, 0xc
/* 00487DB4 01C1C024 */  and   $t8, $t6, $at
/* 00487DB8 0098C804 */  sllv  $t9, $t8, $a0
/* 00487DBC 07210015 */  bgez  $t9, .L00487E14
/* 00487DC0 92420000 */   lbu   $v0, ($s2)
/* 00487DC4 24010039 */  li    $at, 57
/* 00487DC8 1041000A */  beq   $v0, $at, .L00487DF4
/* 00487DCC 00000000 */   nop   
/* 00487DD0 8F998034 */  lw    $t9, %got(func_00487994)($gp)
/* 00487DD4 8FA40064 */  lw    $a0, 0x64($sp)
/* 00487DD8 26450010 */  addiu $a1, $s2, 0x10
/* 00487DDC 27397994 */  addiu $t9, %lo(func_00487994) # addiu $t9, $t9, 0x7994
/* 00487DE0 0320F809 */  jalr  $t9
/* 00487DE4 27A20060 */   addiu $v0, $sp, 0x60
/* 00487DE8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487DEC 10000009 */  b     .L00487E14
/* 00487DF0 92420000 */   lbu   $v0, ($s2)
.L00487DF4:
/* 00487DF4 8F998034 */  lw    $t9, %got(func_00487994)($gp)
/* 00487DF8 8FA40064 */  lw    $a0, 0x64($sp)
/* 00487DFC 26450018 */  addiu $a1, $s2, 0x18
/* 00487E00 27397994 */  addiu $t9, %lo(func_00487994) # addiu $t9, $t9, 0x7994
/* 00487E04 0320F809 */  jalr  $t9
/* 00487E08 27A20060 */   addiu $v0, $sp, 0x60
/* 00487E0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00487E10 92420000 */  lbu   $v0, ($s2)
.L00487E14:
/* 00487E14 24010039 */  li    $at, 57
/* 00487E18 10410004 */  beq   $v0, $at, .L00487E2C
/* 00487E1C 8FAF0064 */   lw    $t7, 0x64($sp)
/* 00487E20 8FA80064 */  lw    $t0, 0x64($sp)
/* 00487E24 10000002 */  b     .L00487E30
/* 00487E28 AE480014 */   sw    $t0, 0x14($s2)
.L00487E2C:
/* 00487E2C AE4F001C */  sw    $t7, 0x1c($s2)
.L00487E30:
/* 00487E30 8FBF0024 */  lw    $ra, 0x24($sp)
.L00487E34:
/* 00487E34 8FB00014 */  lw    $s0, 0x14($sp)
/* 00487E38 8FB10018 */  lw    $s1, 0x18($sp)
/* 00487E3C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00487E40 03E00008 */  jr    $ra
/* 00487E44 27BD0060 */   addiu $sp, $sp, 0x60
    .type readuinstr, @function
    .size readuinstr, .-readuinstr
    .end readuinstr

glabel initur
    .ent initur
    # 00434720 processargs
    # 0045C150 prepass
    # 0047FF7C skipproc
/* 00487E48 3C1C0FB9 */  .cpload $t9
/* 00487E4C 279C2448 */  
/* 00487E50 0399E021 */  
/* 00487E54 8F998758 */  lw    $t9, %call16(ugetinit)($gp)
/* 00487E58 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00487E5C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487E60 0320F809 */  jalr  $t9
/* 00487E64 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00487E68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487E6C 3C0E53FE */  lui   $t6, 0x53fe
/* 00487E70 35CEF1A0 */  ori   $t6, $t6, 0xf1a0
/* 00487E74 8F818CB4 */  lw     $at, %got(datachars)($gp)
/* 00487E78 3C0F4004 */  lui   $t7, 0x4004
/* 00487E7C 35EFB020 */  ori   $t7, $t7, 0xb020
/* 00487E80 AC2E0000 */  sw    $t6, ($at)
/* 00487E84 8F818CB0 */  lw     $at, %got(memorychars)($gp)
/* 00487E88 3418FFC0 */  li    $t8, 65472
/* 00487E8C 3C197E00 */  lui   $t9, 0x7e00
/* 00487E90 AC2F0000 */  sw    $t7, ($at)
/* 00487E94 8F818D70 */  lw     $at, %got(setconstantchars)($gp)
/* 00487E98 8F828D9C */  lw     $v0, %got(dtytype)($gp)
/* 00487E9C 8F838DA0 */  lw     $v1, %got(mtytype)($gp)
/* 00487EA0 AC380000 */  sw    $t8, ($at)
/* 00487EA4 8F818D70 */  lw     $at, %got(setconstantchars)($gp)
/* 00487EA8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00487EAC 24090006 */  li    $t1, 6
/* 00487EB0 AC390004 */  sw    $t9, 4($at)
/* 00487EB4 240A0007 */  li    $t2, 7
/* 00487EB8 A0490009 */  sb    $t1, 9($v0)
/* 00487EBC A04A000A */  sb    $t2, 0xa($v0)
/* 00487EC0 24040001 */  li    $a0, 1
/* 00487EC4 24050002 */  li    $a1, 2
/* 00487EC8 24060003 */  li    $a2, 3
/* 00487ECC 24070004 */  li    $a3, 4
/* 00487ED0 24080005 */  li    $t0, 5
/* 00487ED4 240B0008 */  li    $t3, 8
/* 00487ED8 240C0009 */  li    $t4, 9
/* 00487EDC 240D000A */  li    $t5, 10
/* 00487EE0 240E000B */  li    $t6, 11
/* 00487EE4 240F000C */  li    $t7, 12
/* 00487EE8 2418000D */  li    $t8, 13
/* 00487EEC 2419000E */  li    $t9, 14
/* 00487EF0 2409000F */  li    $t1, 15
/* 00487EF4 240A0010 */  li    $t2, 16
/* 00487EF8 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487EFC A0400000 */  sb    $zero, ($v0)
/* 00487F00 A0440002 */  sb    $a0, 2($v0)
/* 00487F04 A0450005 */  sb    $a1, 5($v0)
/* 00487F08 A0460006 */  sb    $a2, 6($v0)
/* 00487F0C A0470007 */  sb    $a3, 7($v0)
/* 00487F10 A0480008 */  sb    $t0, 8($v0)
/* 00487F14 A04B000B */  sb    $t3, 0xb($v0)
/* 00487F18 A04C000C */  sb    $t4, 0xc($v0)
/* 00487F1C A04D000D */  sb    $t5, 0xd($v0)
/* 00487F20 A04E000F */  sb    $t6, 0xf($v0)
/* 00487F24 A04F0010 */  sb    $t7, 0x10($v0)
/* 00487F28 A0580011 */  sb    $t8, 0x11($v0)
/* 00487F2C A0590012 */  sb    $t9, 0x12($v0)
/* 00487F30 A0490016 */  sb    $t1, 0x16($v0)
/* 00487F34 A04A0017 */  sb    $t2, 0x17($v0)
/* 00487F38 A0600019 */  sb    $zero, 0x19($v1)
/* 00487F3C A064000C */  sb    $a0, 0xc($v1)
/* 00487F40 A065000F */  sb    $a1, 0xf($v1)
/* 00487F44 A0660011 */  sb    $a2, 0x11($v1)
/* 00487F48 A0670012 */  sb    $a3, 0x12($v1)
/* 00487F4C 03E00008 */  jr    $ra
/* 00487F50 A0680000 */   sb    $t0, ($v1)
    .type initur, @function
    .size initur, .-initur
    .end initur

glabel ubytetobit
    .ent ubytetobit
/* 00487F54 90820000 */  lbu   $v0, ($a0)
/* 00487F58 2C4E00A0 */  sltiu $t6, $v0, 0xa0
/* 00487F5C 11C00009 */  beqz  $t6, .L00487F84
/* 00487F60 2443FFE0 */   addiu $v1, $v0, -0x20
/* 00487F64 8F998044 */  lw    $t9, %got(D_1001192C)($gp)
/* 00487F68 00027943 */  sra   $t7, $v0, 5
/* 00487F6C 000FC080 */  sll   $t8, $t7, 2
/* 00487F70 2739192C */  addiu $t9, %lo(D_1001192C) # addiu $t9, $t9, 0x192c
/* 00487F74 03384021 */  addu  $t0, $t9, $t8
/* 00487F78 8D090000 */  lw    $t1, ($t0)
/* 00487F7C 00495004 */  sllv  $t2, $t1, $v0
/* 00487F80 294E0000 */  slti  $t6, $t2, 0
.L00487F84:
/* 00487F84 11C00008 */  beqz  $t6, .L00487FA8
/* 00487F88 2C780060 */   sltiu $t8, $v1, 0x60
/* 00487F8C 8C8C000C */  lw    $t4, 0xc($a0)
/* 00487F90 8C8F0008 */  lw    $t7, 8($a0)
/* 00487F94 000C68C0 */  sll   $t5, $t4, 3
/* 00487F98 000FC8C0 */  sll   $t9, $t7, 3
/* 00487F9C AC8D000C */  sw    $t5, 0xc($a0)
/* 00487FA0 03E00008 */  jr    $ra
/* 00487FA4 AC990008 */   sw    $t9, 8($a0)

.L00487FA8:
/* 00487FA8 13000009 */  beqz  $t8, .L00487FD0
/* 00487FAC 00000000 */   nop   
/* 00487FB0 8F8A8044 */  lw    $t2, %got(D_10011920)($gp)
/* 00487FB4 00034143 */  sra   $t0, $v1, 5
/* 00487FB8 00084880 */  sll   $t1, $t0, 2
/* 00487FBC 254A1920 */  addiu $t2, %lo(D_10011920) # addiu $t2, $t2, 0x1920
/* 00487FC0 01495821 */  addu  $t3, $t2, $t1
/* 00487FC4 8D6E0000 */  lw    $t6, ($t3)
/* 00487FC8 006E6004 */  sllv  $t4, $t6, $v1
/* 00487FCC 29980000 */  slti  $t8, $t4, 0
.L00487FD0:
/* 00487FD0 13000008 */  beqz  $t8, .L00487FF4
/* 00487FD4 2C690060 */   sltiu $t1, $v1, 0x60
/* 00487FD8 8C8F0004 */  lw    $t7, 4($a0)
/* 00487FDC 8C880008 */  lw    $t0, 8($a0)
/* 00487FE0 000FC8C0 */  sll   $t9, $t7, 3
/* 00487FE4 000850C0 */  sll   $t2, $t0, 3
/* 00487FE8 AC990004 */  sw    $t9, 4($a0)
/* 00487FEC 03E00008 */  jr    $ra
/* 00487FF0 AC8A0008 */   sw    $t2, 8($a0)

.L00487FF4:
/* 00487FF4 1120000A */  beqz  $t1, .L00488020
/* 00487FF8 24010041 */   li    $at, 65
/* 00487FFC 8F8C8044 */  lw    $t4, %got(D_10011914)($gp)
/* 00488000 00035943 */  sra   $t3, $v1, 5
/* 00488004 000B7080 */  sll   $t6, $t3, 2
/* 00488008 258C1914 */  addiu $t4, %lo(D_10011914) # addiu $t4, $t4, 0x1914
/* 0048800C 018E6821 */  addu  $t5, $t4, $t6
/* 00488010 8DB80000 */  lw    $t8, ($t5)
/* 00488014 00787804 */  sllv  $t7, $t8, $v1
/* 00488018 29F90000 */  slti  $t9, $t7, 0
/* 0048801C 03204825 */  move  $t1, $t9
.L00488020:
/* 00488020 1120000B */  beqz  $t1, .L00488050
/* 00488024 00000000 */   nop   
/* 00488028 8C88000C */  lw    $t0, 0xc($a0)
/* 0048802C 8C8B0008 */  lw    $t3, 8($a0)
/* 00488030 8C8E0010 */  lw    $t6, 0x10($a0)
/* 00488034 000850C0 */  sll   $t2, $t0, 3
/* 00488038 000B60C0 */  sll   $t4, $t3, 3
/* 0048803C 000E68C0 */  sll   $t5, $t6, 3
/* 00488040 AC8A000C */  sw    $t2, 0xc($a0)
/* 00488044 AC8C0008 */  sw    $t4, 8($a0)
/* 00488048 03E00008 */  jr    $ra
/* 0048804C AC8D0010 */   sw    $t5, 0x10($a0)

.L00488050:
/* 00488050 54410006 */  bnel  $v0, $at, .L0048806C
/* 00488054 2C5900A0 */   sltiu $t9, $v0, 0xa0
/* 00488058 8C980004 */  lw    $t8, 4($a0)
/* 0048805C 001878C0 */  sll   $t7, $t8, 3
/* 00488060 03E00008 */  jr    $ra
/* 00488064 AC8F0004 */   sw    $t7, 4($a0)

/* 00488068 2C5900A0 */  sltiu $t9, $v0, 0xa0
.L0048806C:
/* 0048806C 13200009 */  beqz  $t9, .L00488094
/* 00488070 24010039 */   li    $at, 57
/* 00488074 8F8A8044 */  lw    $t2, %got(D_10011900)($gp)
/* 00488078 00024943 */  sra   $t1, $v0, 5
/* 0048807C 00094080 */  sll   $t0, $t1, 2
/* 00488080 254A1900 */  addiu $t2, %lo(D_10011900) # addiu $t2, $t2, 0x1900
/* 00488084 01485821 */  addu  $t3, $t2, $t0
/* 00488088 8D6C0000 */  lw    $t4, ($t3)
/* 0048808C 004C7004 */  sllv  $t6, $t4, $v0
/* 00488090 29D90000 */  slti  $t9, $t6, 0
.L00488094:
/* 00488094 13200005 */  beqz  $t9, .L004880AC
/* 00488098 00000000 */   nop   
/* 0048809C 8C980008 */  lw    $t8, 8($a0)
/* 004880A0 001878C0 */  sll   $t7, $t8, 3
/* 004880A4 03E00008 */  jr    $ra
/* 004880A8 AC8F0008 */   sw    $t7, 8($a0)

.L004880AC:
/* 004880AC 5441000F */  bnel  $v0, $at, .L004880EC
/* 004880B0 24010063 */   li    $at, 99
/* 004880B4 8C89000C */  lw    $t1, 0xc($a0)
/* 004880B8 8C880008 */  lw    $t0, 8($a0)
/* 004880BC 8C8C0010 */  lw    $t4, 0x10($a0)
/* 004880C0 8C8D0014 */  lw    $t5, 0x14($a0)
/* 004880C4 000950C0 */  sll   $t2, $t1, 3
/* 004880C8 000858C0 */  sll   $t3, $t0, 3
/* 004880CC 000C70C0 */  sll   $t6, $t4, 3
/* 004880D0 000DC8C0 */  sll   $t9, $t5, 3
/* 004880D4 AC8A000C */  sw    $t2, 0xc($a0)
/* 004880D8 AC8B0008 */  sw    $t3, 8($a0)
/* 004880DC AC8E0010 */  sw    $t6, 0x10($a0)
/* 004880E0 03E00008 */  jr    $ra
/* 004880E4 AC990014 */   sw    $t9, 0x14($a0)

/* 004880E8 24010063 */  li    $at, 99
.L004880EC:
/* 004880EC 14410008 */  bne   $v0, $at, .L00488110
/* 004880F0 00000000 */   nop   
/* 004880F4 8C980004 */  lw    $t8, 4($a0)
/* 004880F8 24010001 */  li    $at, 1
/* 004880FC 17010004 */  bne   $t8, $at, .L00488110
/* 00488100 00000000 */   nop   
/* 00488104 8C8F0008 */  lw    $t7, 8($a0)
/* 00488108 000F48C0 */  sll   $t1, $t7, 3
/* 0048810C AC890008 */  sw    $t1, 8($a0)
.L00488110:
/* 00488110 03E00008 */  jr    $ra
/* 00488114 00000000 */   nop   
    .type ubytetobit, @function
    .size ubytetobit, .-ubytetobit
    .end ubytetobit
)"");