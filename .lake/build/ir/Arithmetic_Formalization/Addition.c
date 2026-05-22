// Lean compiler output
// Module: Arithmetic_Formalization.Addition
// Imports: public import Init public import Mathlib.Tactic public import Arithmetic_Formalization.Foundations
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_once_cell_t lp_Arithmetic__Formalization_addTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Arithmetic__Formalization_addTable___closed__0;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addTable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addTable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addDigits(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addDigits___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_verticalAdd(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_verticalAdd___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addDigits_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addDigits_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__toNat_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__toNat_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Arithmetic__Formalization_addTable___closed__0(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addTable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 1)
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_2, x_3);
if (x_5 == 1)
{
lean_object* x_6; 
x_6 = lean_obj_once(&lp_Arithmetic__Formalization_addTable___closed__0, &lp_Arithmetic__Formalization_addTable___closed__0_once, _init_lp_Arithmetic__Formalization_addTable___closed__0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
x_9 = lean_nat_dec_eq(x_8, x_3);
if (x_9 == 1)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
x_10 = lean_box(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_nat_sub(x_8, x_7);
lean_dec(x_8);
x_13 = lean_nat_dec_eq(x_12, x_3);
if (x_13 == 1)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_box(x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_nat_sub(x_12, x_7);
lean_dec(x_12);
x_18 = lean_nat_dec_eq(x_17, x_3);
if (x_18 == 1)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(3u);
x_20 = lean_box(x_13);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_nat_sub(x_17, x_7);
lean_dec(x_17);
x_23 = lean_nat_dec_eq(x_22, x_3);
if (x_23 == 1)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(4u);
x_25 = lean_box(x_18);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_nat_sub(x_22, x_7);
lean_dec(x_22);
x_28 = lean_nat_dec_eq(x_27, x_3);
if (x_28 == 1)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
x_29 = lean_unsigned_to_nat(5u);
x_30 = lean_box(x_23);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
else
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_nat_sub(x_27, x_7);
lean_dec(x_27);
x_33 = lean_nat_dec_eq(x_32, x_3);
if (x_33 == 1)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_32);
x_34 = lean_unsigned_to_nat(6u);
x_35 = lean_box(x_28);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_nat_sub(x_32, x_7);
lean_dec(x_32);
x_38 = lean_nat_dec_eq(x_37, x_3);
if (x_38 == 1)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_37);
x_39 = lean_unsigned_to_nat(7u);
x_40 = lean_box(x_33);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
else
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_nat_sub(x_37, x_7);
lean_dec(x_37);
x_43 = lean_nat_dec_eq(x_42, x_3);
if (x_43 == 1)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_42);
x_44 = lean_unsigned_to_nat(8u);
x_45 = lean_box(x_38);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
else
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_nat_sub(x_42, x_7);
lean_dec(x_42);
x_48 = lean_nat_dec_eq(x_47, x_3);
lean_dec(x_47);
x_49 = lean_unsigned_to_nat(9u);
x_50 = lean_box(x_43);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_sub(x_1, x_52);
x_54 = lean_nat_dec_eq(x_53, x_3);
if (x_54 == 1)
{
uint8_t x_55; 
lean_dec(x_53);
x_55 = lean_nat_dec_eq(x_2, x_3);
if (x_55 == 1)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_box(x_4);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_52);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
else
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_nat_sub(x_2, x_52);
x_59 = lean_nat_dec_eq(x_58, x_3);
if (x_59 == 1)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_58);
x_60 = lean_unsigned_to_nat(2u);
x_61 = lean_box(x_55);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_nat_sub(x_58, x_52);
lean_dec(x_58);
x_64 = lean_nat_dec_eq(x_63, x_3);
if (x_64 == 1)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_63);
x_65 = lean_unsigned_to_nat(3u);
x_66 = lean_box(x_59);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
else
{
lean_object* x_68; uint8_t x_69; 
x_68 = lean_nat_sub(x_63, x_52);
lean_dec(x_63);
x_69 = lean_nat_dec_eq(x_68, x_3);
if (x_69 == 1)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_68);
x_70 = lean_unsigned_to_nat(4u);
x_71 = lean_box(x_64);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
else
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_nat_sub(x_68, x_52);
lean_dec(x_68);
x_74 = lean_nat_dec_eq(x_73, x_3);
if (x_74 == 1)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_73);
x_75 = lean_unsigned_to_nat(5u);
x_76 = lean_box(x_69);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
else
{
lean_object* x_78; uint8_t x_79; 
x_78 = lean_nat_sub(x_73, x_52);
lean_dec(x_73);
x_79 = lean_nat_dec_eq(x_78, x_3);
if (x_79 == 1)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_78);
x_80 = lean_unsigned_to_nat(6u);
x_81 = lean_box(x_74);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
else
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_nat_sub(x_78, x_52);
lean_dec(x_78);
x_84 = lean_nat_dec_eq(x_83, x_3);
if (x_84 == 1)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_83);
x_85 = lean_unsigned_to_nat(7u);
x_86 = lean_box(x_79);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
else
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_nat_sub(x_83, x_52);
lean_dec(x_83);
x_89 = lean_nat_dec_eq(x_88, x_3);
if (x_89 == 1)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_88);
x_90 = lean_unsigned_to_nat(8u);
x_91 = lean_box(x_84);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
else
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_nat_sub(x_88, x_52);
lean_dec(x_88);
x_94 = lean_nat_dec_eq(x_93, x_3);
if (x_94 == 1)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_93);
x_95 = lean_unsigned_to_nat(9u);
x_96 = lean_box(x_89);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
else
{
lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; 
x_98 = lean_nat_sub(x_93, x_52);
lean_dec(x_93);
x_99 = lean_nat_dec_eq(x_98, x_3);
lean_dec(x_98);
x_100 = lean_box(x_99);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_3);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_nat_sub(x_53, x_52);
lean_dec(x_53);
x_103 = lean_nat_dec_eq(x_102, x_3);
if (x_103 == 1)
{
uint8_t x_104; 
lean_dec(x_102);
x_104 = lean_nat_dec_eq(x_2, x_3);
if (x_104 == 1)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_unsigned_to_nat(2u);
x_106 = lean_box(x_54);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
else
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_nat_sub(x_2, x_52);
x_109 = lean_nat_dec_eq(x_108, x_3);
if (x_109 == 1)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_108);
x_110 = lean_unsigned_to_nat(3u);
x_111 = lean_box(x_104);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
else
{
lean_object* x_113; uint8_t x_114; 
x_113 = lean_nat_sub(x_108, x_52);
lean_dec(x_108);
x_114 = lean_nat_dec_eq(x_113, x_3);
if (x_114 == 1)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_113);
x_115 = lean_unsigned_to_nat(4u);
x_116 = lean_box(x_109);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
else
{
lean_object* x_118; uint8_t x_119; 
x_118 = lean_nat_sub(x_113, x_52);
lean_dec(x_113);
x_119 = lean_nat_dec_eq(x_118, x_3);
if (x_119 == 1)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_118);
x_120 = lean_unsigned_to_nat(5u);
x_121 = lean_box(x_114);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
else
{
lean_object* x_123; uint8_t x_124; 
x_123 = lean_nat_sub(x_118, x_52);
lean_dec(x_118);
x_124 = lean_nat_dec_eq(x_123, x_3);
if (x_124 == 1)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_123);
x_125 = lean_unsigned_to_nat(6u);
x_126 = lean_box(x_119);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
else
{
lean_object* x_128; uint8_t x_129; 
x_128 = lean_nat_sub(x_123, x_52);
lean_dec(x_123);
x_129 = lean_nat_dec_eq(x_128, x_3);
if (x_129 == 1)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_dec(x_128);
x_130 = lean_unsigned_to_nat(7u);
x_131 = lean_box(x_124);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
else
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_nat_sub(x_128, x_52);
lean_dec(x_128);
x_134 = lean_nat_dec_eq(x_133, x_3);
if (x_134 == 1)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_133);
x_135 = lean_unsigned_to_nat(8u);
x_136 = lean_box(x_129);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
else
{
lean_object* x_138; uint8_t x_139; 
x_138 = lean_nat_sub(x_133, x_52);
lean_dec(x_133);
x_139 = lean_nat_dec_eq(x_138, x_3);
if (x_139 == 1)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_138);
x_140 = lean_unsigned_to_nat(9u);
x_141 = lean_box(x_134);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
else
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_nat_sub(x_138, x_52);
lean_dec(x_138);
x_144 = lean_nat_dec_eq(x_143, x_3);
if (x_144 == 1)
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_143);
x_145 = lean_box(x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_3);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
else
{
lean_object* x_147; uint8_t x_148; lean_object* x_149; lean_object* x_150; 
x_147 = lean_nat_sub(x_143, x_52);
lean_dec(x_143);
x_148 = lean_nat_dec_eq(x_147, x_3);
lean_dec(x_147);
x_149 = lean_box(x_148);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_52);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_151; uint8_t x_152; 
x_151 = lean_nat_sub(x_102, x_52);
lean_dec(x_102);
x_152 = lean_nat_dec_eq(x_151, x_3);
if (x_152 == 1)
{
uint8_t x_153; 
lean_dec(x_151);
x_153 = lean_nat_dec_eq(x_2, x_3);
if (x_153 == 1)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_unsigned_to_nat(3u);
x_155 = lean_box(x_103);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
else
{
lean_object* x_157; uint8_t x_158; 
x_157 = lean_nat_sub(x_2, x_52);
x_158 = lean_nat_dec_eq(x_157, x_3);
if (x_158 == 1)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_157);
x_159 = lean_unsigned_to_nat(4u);
x_160 = lean_box(x_153);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
else
{
lean_object* x_162; uint8_t x_163; 
x_162 = lean_nat_sub(x_157, x_52);
lean_dec(x_157);
x_163 = lean_nat_dec_eq(x_162, x_3);
if (x_163 == 1)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_162);
x_164 = lean_unsigned_to_nat(5u);
x_165 = lean_box(x_158);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
else
{
lean_object* x_167; uint8_t x_168; 
x_167 = lean_nat_sub(x_162, x_52);
lean_dec(x_162);
x_168 = lean_nat_dec_eq(x_167, x_3);
if (x_168 == 1)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec(x_167);
x_169 = lean_unsigned_to_nat(6u);
x_170 = lean_box(x_163);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
else
{
lean_object* x_172; uint8_t x_173; 
x_172 = lean_nat_sub(x_167, x_52);
lean_dec(x_167);
x_173 = lean_nat_dec_eq(x_172, x_3);
if (x_173 == 1)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_172);
x_174 = lean_unsigned_to_nat(7u);
x_175 = lean_box(x_168);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
else
{
lean_object* x_177; uint8_t x_178; 
x_177 = lean_nat_sub(x_172, x_52);
lean_dec(x_172);
x_178 = lean_nat_dec_eq(x_177, x_3);
if (x_178 == 1)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_177);
x_179 = lean_unsigned_to_nat(8u);
x_180 = lean_box(x_173);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
else
{
lean_object* x_182; uint8_t x_183; 
x_182 = lean_nat_sub(x_177, x_52);
lean_dec(x_177);
x_183 = lean_nat_dec_eq(x_182, x_3);
if (x_183 == 1)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_182);
x_184 = lean_unsigned_to_nat(9u);
x_185 = lean_box(x_178);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
else
{
lean_object* x_187; uint8_t x_188; 
x_187 = lean_nat_sub(x_182, x_52);
lean_dec(x_182);
x_188 = lean_nat_dec_eq(x_187, x_3);
if (x_188 == 1)
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_187);
x_189 = lean_box(x_188);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_3);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
else
{
lean_object* x_191; uint8_t x_192; 
x_191 = lean_nat_sub(x_187, x_52);
lean_dec(x_187);
x_192 = lean_nat_dec_eq(x_191, x_3);
if (x_192 == 1)
{
lean_object* x_193; lean_object* x_194; 
lean_dec(x_191);
x_193 = lean_box(x_192);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_52);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
else
{
lean_object* x_195; uint8_t x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_195 = lean_nat_sub(x_191, x_52);
lean_dec(x_191);
x_196 = lean_nat_dec_eq(x_195, x_3);
lean_dec(x_195);
x_197 = lean_unsigned_to_nat(2u);
x_198 = lean_box(x_196);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_200; uint8_t x_201; 
x_200 = lean_nat_sub(x_151, x_52);
lean_dec(x_151);
x_201 = lean_nat_dec_eq(x_200, x_3);
if (x_201 == 1)
{
uint8_t x_202; 
lean_dec(x_200);
x_202 = lean_nat_dec_eq(x_2, x_3);
if (x_202 == 1)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_unsigned_to_nat(4u);
x_204 = lean_box(x_152);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
return x_205;
}
else
{
lean_object* x_206; uint8_t x_207; 
x_206 = lean_nat_sub(x_2, x_52);
x_207 = lean_nat_dec_eq(x_206, x_3);
if (x_207 == 1)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_206);
x_208 = lean_unsigned_to_nat(5u);
x_209 = lean_box(x_202);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
else
{
lean_object* x_211; uint8_t x_212; 
x_211 = lean_nat_sub(x_206, x_52);
lean_dec(x_206);
x_212 = lean_nat_dec_eq(x_211, x_3);
if (x_212 == 1)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_211);
x_213 = lean_unsigned_to_nat(6u);
x_214 = lean_box(x_207);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
else
{
lean_object* x_216; uint8_t x_217; 
x_216 = lean_nat_sub(x_211, x_52);
lean_dec(x_211);
x_217 = lean_nat_dec_eq(x_216, x_3);
if (x_217 == 1)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_216);
x_218 = lean_unsigned_to_nat(7u);
x_219 = lean_box(x_212);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
else
{
lean_object* x_221; uint8_t x_222; 
x_221 = lean_nat_sub(x_216, x_52);
lean_dec(x_216);
x_222 = lean_nat_dec_eq(x_221, x_3);
if (x_222 == 1)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
lean_dec(x_221);
x_223 = lean_unsigned_to_nat(8u);
x_224 = lean_box(x_217);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
else
{
lean_object* x_226; uint8_t x_227; 
x_226 = lean_nat_sub(x_221, x_52);
lean_dec(x_221);
x_227 = lean_nat_dec_eq(x_226, x_3);
if (x_227 == 1)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec(x_226);
x_228 = lean_unsigned_to_nat(9u);
x_229 = lean_box(x_222);
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_228);
lean_ctor_set(x_230, 1, x_229);
return x_230;
}
else
{
lean_object* x_231; uint8_t x_232; 
x_231 = lean_nat_sub(x_226, x_52);
lean_dec(x_226);
x_232 = lean_nat_dec_eq(x_231, x_3);
if (x_232 == 1)
{
lean_object* x_233; lean_object* x_234; 
lean_dec(x_231);
x_233 = lean_box(x_232);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_3);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
else
{
lean_object* x_235; uint8_t x_236; 
x_235 = lean_nat_sub(x_231, x_52);
lean_dec(x_231);
x_236 = lean_nat_dec_eq(x_235, x_3);
if (x_236 == 1)
{
lean_object* x_237; lean_object* x_238; 
lean_dec(x_235);
x_237 = lean_box(x_236);
x_238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_238, 0, x_52);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
else
{
lean_object* x_239; uint8_t x_240; 
x_239 = lean_nat_sub(x_235, x_52);
lean_dec(x_235);
x_240 = lean_nat_dec_eq(x_239, x_3);
if (x_240 == 1)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_239);
x_241 = lean_unsigned_to_nat(2u);
x_242 = lean_box(x_240);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
else
{
lean_object* x_244; uint8_t x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_244 = lean_nat_sub(x_239, x_52);
lean_dec(x_239);
x_245 = lean_nat_dec_eq(x_244, x_3);
lean_dec(x_244);
x_246 = lean_unsigned_to_nat(3u);
x_247 = lean_box(x_245);
x_248 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_248, 0, x_246);
lean_ctor_set(x_248, 1, x_247);
return x_248;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_249; uint8_t x_250; 
x_249 = lean_nat_sub(x_200, x_52);
lean_dec(x_200);
x_250 = lean_nat_dec_eq(x_249, x_3);
if (x_250 == 1)
{
uint8_t x_251; 
lean_dec(x_249);
x_251 = lean_nat_dec_eq(x_2, x_3);
if (x_251 == 1)
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_252 = lean_unsigned_to_nat(5u);
x_253 = lean_box(x_201);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_252);
lean_ctor_set(x_254, 1, x_253);
return x_254;
}
else
{
lean_object* x_255; uint8_t x_256; 
x_255 = lean_nat_sub(x_2, x_52);
x_256 = lean_nat_dec_eq(x_255, x_3);
if (x_256 == 1)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_255);
x_257 = lean_unsigned_to_nat(6u);
x_258 = lean_box(x_251);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_257);
lean_ctor_set(x_259, 1, x_258);
return x_259;
}
else
{
lean_object* x_260; uint8_t x_261; 
x_260 = lean_nat_sub(x_255, x_52);
lean_dec(x_255);
x_261 = lean_nat_dec_eq(x_260, x_3);
if (x_261 == 1)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
lean_dec(x_260);
x_262 = lean_unsigned_to_nat(7u);
x_263 = lean_box(x_256);
x_264 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
return x_264;
}
else
{
lean_object* x_265; uint8_t x_266; 
x_265 = lean_nat_sub(x_260, x_52);
lean_dec(x_260);
x_266 = lean_nat_dec_eq(x_265, x_3);
if (x_266 == 1)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
lean_dec(x_265);
x_267 = lean_unsigned_to_nat(8u);
x_268 = lean_box(x_261);
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
else
{
lean_object* x_270; uint8_t x_271; 
x_270 = lean_nat_sub(x_265, x_52);
lean_dec(x_265);
x_271 = lean_nat_dec_eq(x_270, x_3);
if (x_271 == 1)
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_270);
x_272 = lean_unsigned_to_nat(9u);
x_273 = lean_box(x_266);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_273);
return x_274;
}
else
{
lean_object* x_275; uint8_t x_276; 
x_275 = lean_nat_sub(x_270, x_52);
lean_dec(x_270);
x_276 = lean_nat_dec_eq(x_275, x_3);
if (x_276 == 1)
{
lean_object* x_277; lean_object* x_278; 
lean_dec(x_275);
x_277 = lean_box(x_276);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_3);
lean_ctor_set(x_278, 1, x_277);
return x_278;
}
else
{
lean_object* x_279; uint8_t x_280; 
x_279 = lean_nat_sub(x_275, x_52);
lean_dec(x_275);
x_280 = lean_nat_dec_eq(x_279, x_3);
if (x_280 == 1)
{
lean_object* x_281; lean_object* x_282; 
lean_dec(x_279);
x_281 = lean_box(x_280);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_52);
lean_ctor_set(x_282, 1, x_281);
return x_282;
}
else
{
lean_object* x_283; uint8_t x_284; 
x_283 = lean_nat_sub(x_279, x_52);
lean_dec(x_279);
x_284 = lean_nat_dec_eq(x_283, x_3);
if (x_284 == 1)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_283);
x_285 = lean_unsigned_to_nat(2u);
x_286 = lean_box(x_284);
x_287 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_287, 0, x_285);
lean_ctor_set(x_287, 1, x_286);
return x_287;
}
else
{
lean_object* x_288; uint8_t x_289; 
x_288 = lean_nat_sub(x_283, x_52);
lean_dec(x_283);
x_289 = lean_nat_dec_eq(x_288, x_3);
if (x_289 == 1)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; 
lean_dec(x_288);
x_290 = lean_unsigned_to_nat(3u);
x_291 = lean_box(x_289);
x_292 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
return x_292;
}
else
{
lean_object* x_293; uint8_t x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_293 = lean_nat_sub(x_288, x_52);
lean_dec(x_288);
x_294 = lean_nat_dec_eq(x_293, x_3);
lean_dec(x_293);
x_295 = lean_unsigned_to_nat(4u);
x_296 = lean_box(x_294);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_296);
return x_297;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_298; uint8_t x_299; 
x_298 = lean_nat_sub(x_249, x_52);
lean_dec(x_249);
x_299 = lean_nat_dec_eq(x_298, x_3);
if (x_299 == 1)
{
uint8_t x_300; 
lean_dec(x_298);
x_300 = lean_nat_dec_eq(x_2, x_3);
if (x_300 == 1)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_301 = lean_unsigned_to_nat(6u);
x_302 = lean_box(x_250);
x_303 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_303, 0, x_301);
lean_ctor_set(x_303, 1, x_302);
return x_303;
}
else
{
lean_object* x_304; uint8_t x_305; 
x_304 = lean_nat_sub(x_2, x_52);
x_305 = lean_nat_dec_eq(x_304, x_3);
if (x_305 == 1)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; 
lean_dec(x_304);
x_306 = lean_unsigned_to_nat(7u);
x_307 = lean_box(x_300);
x_308 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_308, 0, x_306);
lean_ctor_set(x_308, 1, x_307);
return x_308;
}
else
{
lean_object* x_309; uint8_t x_310; 
x_309 = lean_nat_sub(x_304, x_52);
lean_dec(x_304);
x_310 = lean_nat_dec_eq(x_309, x_3);
if (x_310 == 1)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; 
lean_dec(x_309);
x_311 = lean_unsigned_to_nat(8u);
x_312 = lean_box(x_305);
x_313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
return x_313;
}
else
{
lean_object* x_314; uint8_t x_315; 
x_314 = lean_nat_sub(x_309, x_52);
lean_dec(x_309);
x_315 = lean_nat_dec_eq(x_314, x_3);
if (x_315 == 1)
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_314);
x_316 = lean_unsigned_to_nat(9u);
x_317 = lean_box(x_310);
x_318 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_318, 0, x_316);
lean_ctor_set(x_318, 1, x_317);
return x_318;
}
else
{
lean_object* x_319; uint8_t x_320; 
x_319 = lean_nat_sub(x_314, x_52);
lean_dec(x_314);
x_320 = lean_nat_dec_eq(x_319, x_3);
if (x_320 == 1)
{
lean_object* x_321; lean_object* x_322; 
lean_dec(x_319);
x_321 = lean_box(x_320);
x_322 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_322, 0, x_3);
lean_ctor_set(x_322, 1, x_321);
return x_322;
}
else
{
lean_object* x_323; uint8_t x_324; 
x_323 = lean_nat_sub(x_319, x_52);
lean_dec(x_319);
x_324 = lean_nat_dec_eq(x_323, x_3);
if (x_324 == 1)
{
lean_object* x_325; lean_object* x_326; 
lean_dec(x_323);
x_325 = lean_box(x_324);
x_326 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_326, 0, x_52);
lean_ctor_set(x_326, 1, x_325);
return x_326;
}
else
{
lean_object* x_327; uint8_t x_328; 
x_327 = lean_nat_sub(x_323, x_52);
lean_dec(x_323);
x_328 = lean_nat_dec_eq(x_327, x_3);
if (x_328 == 1)
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_327);
x_329 = lean_unsigned_to_nat(2u);
x_330 = lean_box(x_328);
x_331 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_330);
return x_331;
}
else
{
lean_object* x_332; uint8_t x_333; 
x_332 = lean_nat_sub(x_327, x_52);
lean_dec(x_327);
x_333 = lean_nat_dec_eq(x_332, x_3);
if (x_333 == 1)
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
lean_dec(x_332);
x_334 = lean_unsigned_to_nat(3u);
x_335 = lean_box(x_333);
x_336 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_336, 0, x_334);
lean_ctor_set(x_336, 1, x_335);
return x_336;
}
else
{
lean_object* x_337; uint8_t x_338; 
x_337 = lean_nat_sub(x_332, x_52);
lean_dec(x_332);
x_338 = lean_nat_dec_eq(x_337, x_3);
if (x_338 == 1)
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; 
lean_dec(x_337);
x_339 = lean_unsigned_to_nat(4u);
x_340 = lean_box(x_338);
x_341 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_341, 0, x_339);
lean_ctor_set(x_341, 1, x_340);
return x_341;
}
else
{
lean_object* x_342; uint8_t x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_342 = lean_nat_sub(x_337, x_52);
lean_dec(x_337);
x_343 = lean_nat_dec_eq(x_342, x_3);
lean_dec(x_342);
x_344 = lean_unsigned_to_nat(5u);
x_345 = lean_box(x_343);
x_346 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_346, 0, x_344);
lean_ctor_set(x_346, 1, x_345);
return x_346;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_347; uint8_t x_348; 
x_347 = lean_nat_sub(x_298, x_52);
lean_dec(x_298);
x_348 = lean_nat_dec_eq(x_347, x_3);
if (x_348 == 1)
{
uint8_t x_349; 
lean_dec(x_347);
x_349 = lean_nat_dec_eq(x_2, x_3);
if (x_349 == 1)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_unsigned_to_nat(7u);
x_351 = lean_box(x_299);
x_352 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
else
{
lean_object* x_353; uint8_t x_354; 
x_353 = lean_nat_sub(x_2, x_52);
x_354 = lean_nat_dec_eq(x_353, x_3);
if (x_354 == 1)
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; 
lean_dec(x_353);
x_355 = lean_unsigned_to_nat(8u);
x_356 = lean_box(x_349);
x_357 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_357, 0, x_355);
lean_ctor_set(x_357, 1, x_356);
return x_357;
}
else
{
lean_object* x_358; uint8_t x_359; 
x_358 = lean_nat_sub(x_353, x_52);
lean_dec(x_353);
x_359 = lean_nat_dec_eq(x_358, x_3);
if (x_359 == 1)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_358);
x_360 = lean_unsigned_to_nat(9u);
x_361 = lean_box(x_354);
x_362 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_362, 0, x_360);
lean_ctor_set(x_362, 1, x_361);
return x_362;
}
else
{
lean_object* x_363; uint8_t x_364; 
x_363 = lean_nat_sub(x_358, x_52);
lean_dec(x_358);
x_364 = lean_nat_dec_eq(x_363, x_3);
if (x_364 == 1)
{
lean_object* x_365; lean_object* x_366; 
lean_dec(x_363);
x_365 = lean_box(x_364);
x_366 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_366, 0, x_3);
lean_ctor_set(x_366, 1, x_365);
return x_366;
}
else
{
lean_object* x_367; uint8_t x_368; 
x_367 = lean_nat_sub(x_363, x_52);
lean_dec(x_363);
x_368 = lean_nat_dec_eq(x_367, x_3);
if (x_368 == 1)
{
lean_object* x_369; lean_object* x_370; 
lean_dec(x_367);
x_369 = lean_box(x_368);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_52);
lean_ctor_set(x_370, 1, x_369);
return x_370;
}
else
{
lean_object* x_371; uint8_t x_372; 
x_371 = lean_nat_sub(x_367, x_52);
lean_dec(x_367);
x_372 = lean_nat_dec_eq(x_371, x_3);
if (x_372 == 1)
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_371);
x_373 = lean_unsigned_to_nat(2u);
x_374 = lean_box(x_372);
x_375 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_375, 0, x_373);
lean_ctor_set(x_375, 1, x_374);
return x_375;
}
else
{
lean_object* x_376; uint8_t x_377; 
x_376 = lean_nat_sub(x_371, x_52);
lean_dec(x_371);
x_377 = lean_nat_dec_eq(x_376, x_3);
if (x_377 == 1)
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; 
lean_dec(x_376);
x_378 = lean_unsigned_to_nat(3u);
x_379 = lean_box(x_377);
x_380 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_380, 0, x_378);
lean_ctor_set(x_380, 1, x_379);
return x_380;
}
else
{
lean_object* x_381; uint8_t x_382; 
x_381 = lean_nat_sub(x_376, x_52);
lean_dec(x_376);
x_382 = lean_nat_dec_eq(x_381, x_3);
if (x_382 == 1)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_381);
x_383 = lean_unsigned_to_nat(4u);
x_384 = lean_box(x_382);
x_385 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
return x_385;
}
else
{
lean_object* x_386; uint8_t x_387; 
x_386 = lean_nat_sub(x_381, x_52);
lean_dec(x_381);
x_387 = lean_nat_dec_eq(x_386, x_3);
if (x_387 == 1)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
lean_dec(x_386);
x_388 = lean_unsigned_to_nat(5u);
x_389 = lean_box(x_387);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_388);
lean_ctor_set(x_390, 1, x_389);
return x_390;
}
else
{
lean_object* x_391; uint8_t x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_391 = lean_nat_sub(x_386, x_52);
lean_dec(x_386);
x_392 = lean_nat_dec_eq(x_391, x_3);
lean_dec(x_391);
x_393 = lean_unsigned_to_nat(6u);
x_394 = lean_box(x_392);
x_395 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
return x_395;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_396; uint8_t x_397; 
x_396 = lean_nat_sub(x_347, x_52);
lean_dec(x_347);
x_397 = lean_nat_dec_eq(x_396, x_3);
if (x_397 == 1)
{
uint8_t x_398; 
lean_dec(x_396);
x_398 = lean_nat_dec_eq(x_2, x_3);
if (x_398 == 1)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; 
x_399 = lean_unsigned_to_nat(8u);
x_400 = lean_box(x_348);
x_401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_401, 0, x_399);
lean_ctor_set(x_401, 1, x_400);
return x_401;
}
else
{
lean_object* x_402; uint8_t x_403; 
x_402 = lean_nat_sub(x_2, x_52);
x_403 = lean_nat_dec_eq(x_402, x_3);
if (x_403 == 1)
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; 
lean_dec(x_402);
x_404 = lean_unsigned_to_nat(9u);
x_405 = lean_box(x_398);
x_406 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_406, 0, x_404);
lean_ctor_set(x_406, 1, x_405);
return x_406;
}
else
{
lean_object* x_407; uint8_t x_408; 
x_407 = lean_nat_sub(x_402, x_52);
lean_dec(x_402);
x_408 = lean_nat_dec_eq(x_407, x_3);
if (x_408 == 1)
{
lean_object* x_409; lean_object* x_410; 
lean_dec(x_407);
x_409 = lean_box(x_408);
x_410 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_410, 0, x_3);
lean_ctor_set(x_410, 1, x_409);
return x_410;
}
else
{
lean_object* x_411; uint8_t x_412; 
x_411 = lean_nat_sub(x_407, x_52);
lean_dec(x_407);
x_412 = lean_nat_dec_eq(x_411, x_3);
if (x_412 == 1)
{
lean_object* x_413; lean_object* x_414; 
lean_dec(x_411);
x_413 = lean_box(x_412);
x_414 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_414, 0, x_52);
lean_ctor_set(x_414, 1, x_413);
return x_414;
}
else
{
lean_object* x_415; uint8_t x_416; 
x_415 = lean_nat_sub(x_411, x_52);
lean_dec(x_411);
x_416 = lean_nat_dec_eq(x_415, x_3);
if (x_416 == 1)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; 
lean_dec(x_415);
x_417 = lean_unsigned_to_nat(2u);
x_418 = lean_box(x_416);
x_419 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_419, 0, x_417);
lean_ctor_set(x_419, 1, x_418);
return x_419;
}
else
{
lean_object* x_420; uint8_t x_421; 
x_420 = lean_nat_sub(x_415, x_52);
lean_dec(x_415);
x_421 = lean_nat_dec_eq(x_420, x_3);
if (x_421 == 1)
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; 
lean_dec(x_420);
x_422 = lean_unsigned_to_nat(3u);
x_423 = lean_box(x_421);
x_424 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_424, 0, x_422);
lean_ctor_set(x_424, 1, x_423);
return x_424;
}
else
{
lean_object* x_425; uint8_t x_426; 
x_425 = lean_nat_sub(x_420, x_52);
lean_dec(x_420);
x_426 = lean_nat_dec_eq(x_425, x_3);
if (x_426 == 1)
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
lean_dec(x_425);
x_427 = lean_unsigned_to_nat(4u);
x_428 = lean_box(x_426);
x_429 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_429, 0, x_427);
lean_ctor_set(x_429, 1, x_428);
return x_429;
}
else
{
lean_object* x_430; uint8_t x_431; 
x_430 = lean_nat_sub(x_425, x_52);
lean_dec(x_425);
x_431 = lean_nat_dec_eq(x_430, x_3);
if (x_431 == 1)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; 
lean_dec(x_430);
x_432 = lean_unsigned_to_nat(5u);
x_433 = lean_box(x_431);
x_434 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_434, 0, x_432);
lean_ctor_set(x_434, 1, x_433);
return x_434;
}
else
{
lean_object* x_435; uint8_t x_436; 
x_435 = lean_nat_sub(x_430, x_52);
lean_dec(x_430);
x_436 = lean_nat_dec_eq(x_435, x_3);
if (x_436 == 1)
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; 
lean_dec(x_435);
x_437 = lean_unsigned_to_nat(6u);
x_438 = lean_box(x_436);
x_439 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_439, 0, x_437);
lean_ctor_set(x_439, 1, x_438);
return x_439;
}
else
{
lean_object* x_440; uint8_t x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; 
x_440 = lean_nat_sub(x_435, x_52);
lean_dec(x_435);
x_441 = lean_nat_dec_eq(x_440, x_3);
lean_dec(x_440);
x_442 = lean_unsigned_to_nat(7u);
x_443 = lean_box(x_441);
x_444 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_444, 0, x_442);
lean_ctor_set(x_444, 1, x_443);
return x_444;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_445; uint8_t x_446; uint8_t x_447; 
x_445 = lean_nat_sub(x_396, x_52);
lean_dec(x_396);
x_446 = lean_nat_dec_eq(x_445, x_3);
lean_dec(x_445);
x_447 = lean_nat_dec_eq(x_2, x_3);
if (x_447 == 1)
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_448 = lean_unsigned_to_nat(9u);
x_449 = lean_box(x_397);
x_450 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_450, 0, x_448);
lean_ctor_set(x_450, 1, x_449);
return x_450;
}
else
{
lean_object* x_451; uint8_t x_452; 
x_451 = lean_nat_sub(x_2, x_52);
x_452 = lean_nat_dec_eq(x_451, x_3);
if (x_452 == 1)
{
lean_object* x_453; lean_object* x_454; 
lean_dec(x_451);
x_453 = lean_box(x_452);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_3);
lean_ctor_set(x_454, 1, x_453);
return x_454;
}
else
{
lean_object* x_455; uint8_t x_456; 
x_455 = lean_nat_sub(x_451, x_52);
lean_dec(x_451);
x_456 = lean_nat_dec_eq(x_455, x_3);
if (x_456 == 1)
{
lean_object* x_457; lean_object* x_458; 
lean_dec(x_455);
x_457 = lean_box(x_456);
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_52);
lean_ctor_set(x_458, 1, x_457);
return x_458;
}
else
{
lean_object* x_459; uint8_t x_460; 
x_459 = lean_nat_sub(x_455, x_52);
lean_dec(x_455);
x_460 = lean_nat_dec_eq(x_459, x_3);
if (x_460 == 1)
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_459);
x_461 = lean_unsigned_to_nat(2u);
x_462 = lean_box(x_460);
x_463 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_463, 0, x_461);
lean_ctor_set(x_463, 1, x_462);
return x_463;
}
else
{
lean_object* x_464; uint8_t x_465; 
x_464 = lean_nat_sub(x_459, x_52);
lean_dec(x_459);
x_465 = lean_nat_dec_eq(x_464, x_3);
if (x_465 == 1)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; 
lean_dec(x_464);
x_466 = lean_unsigned_to_nat(3u);
x_467 = lean_box(x_465);
x_468 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_468, 0, x_466);
lean_ctor_set(x_468, 1, x_467);
return x_468;
}
else
{
lean_object* x_469; uint8_t x_470; 
x_469 = lean_nat_sub(x_464, x_52);
lean_dec(x_464);
x_470 = lean_nat_dec_eq(x_469, x_3);
if (x_470 == 1)
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; 
lean_dec(x_469);
x_471 = lean_unsigned_to_nat(4u);
x_472 = lean_box(x_470);
x_473 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_473, 0, x_471);
lean_ctor_set(x_473, 1, x_472);
return x_473;
}
else
{
lean_object* x_474; uint8_t x_475; 
x_474 = lean_nat_sub(x_469, x_52);
lean_dec(x_469);
x_475 = lean_nat_dec_eq(x_474, x_3);
if (x_475 == 1)
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; 
lean_dec(x_474);
x_476 = lean_unsigned_to_nat(5u);
x_477 = lean_box(x_475);
x_478 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_478, 0, x_476);
lean_ctor_set(x_478, 1, x_477);
return x_478;
}
else
{
lean_object* x_479; uint8_t x_480; 
x_479 = lean_nat_sub(x_474, x_52);
lean_dec(x_474);
x_480 = lean_nat_dec_eq(x_479, x_3);
if (x_480 == 1)
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; 
lean_dec(x_479);
x_481 = lean_unsigned_to_nat(6u);
x_482 = lean_box(x_480);
x_483 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_483, 0, x_481);
lean_ctor_set(x_483, 1, x_482);
return x_483;
}
else
{
lean_object* x_484; uint8_t x_485; 
x_484 = lean_nat_sub(x_479, x_52);
lean_dec(x_479);
x_485 = lean_nat_dec_eq(x_484, x_3);
if (x_485 == 1)
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; 
lean_dec(x_484);
x_486 = lean_unsigned_to_nat(7u);
x_487 = lean_box(x_485);
x_488 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_488, 0, x_486);
lean_ctor_set(x_488, 1, x_487);
return x_488;
}
else
{
lean_object* x_489; uint8_t x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; 
x_489 = lean_nat_sub(x_484, x_52);
lean_dec(x_484);
x_490 = lean_nat_dec_eq(x_489, x_3);
lean_dec(x_489);
x_491 = lean_unsigned_to_nat(8u);
x_492 = lean_box(x_490);
x_493 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_493, 0, x_491);
lean_ctor_set(x_493, 1, x_492);
return x_493;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addTable___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_Arithmetic__Formalization_addTable(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addDigits(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_Arithmetic__Formalization_addTable(x_1, x_2);
if (x_3 == 0)
{
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec_ref(x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lp_Arithmetic__Formalization_addTable(x_5, x_7);
lean_dec(x_5);
x_9 = lean_unbox(x_6);
if (x_9 == 0)
{
lean_dec(x_6);
return x_8;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 1);
lean_dec(x_11);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_addDigits___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
x_5 = lp_Arithmetic__Formalization_addDigits(x_1, x_2, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33, lean_object* x_34, lean_object* x_35, lean_object* x_36, lean_object* x_37, lean_object* x_38, lean_object* x_39, lean_object* x_40, lean_object* x_41, lean_object* x_42, lean_object* x_43, lean_object* x_44, lean_object* x_45, lean_object* x_46, lean_object* x_47, lean_object* x_48, lean_object* x_49, lean_object* x_50, lean_object* x_51, lean_object* x_52, lean_object* x_53, lean_object* x_54, lean_object* x_55, lean_object* x_56, lean_object* x_57, lean_object* x_58, lean_object* x_59, lean_object* x_60, lean_object* x_61, lean_object* x_62, lean_object* x_63, lean_object* x_64, lean_object* x_65, lean_object* x_66, lean_object* x_67, lean_object* x_68, lean_object* x_69, lean_object* x_70, lean_object* x_71, lean_object* x_72, lean_object* x_73, lean_object* x_74, lean_object* x_75, lean_object* x_76, lean_object* x_77, lean_object* x_78, lean_object* x_79, lean_object* x_80, lean_object* x_81, lean_object* x_82, lean_object* x_83, lean_object* x_84, lean_object* x_85, lean_object* x_86, lean_object* x_87, lean_object* x_88, lean_object* x_89, lean_object* x_90, lean_object* x_91, lean_object* x_92, lean_object* x_93, lean_object* x_94, lean_object* x_95, lean_object* x_96, lean_object* x_97, lean_object* x_98, lean_object* x_99, lean_object* x_100, lean_object* x_101, lean_object* x_102, lean_object* x_103, lean_object* x_104) {
_start:
{
lean_object* x_105; uint8_t x_106; 
x_105 = lean_unsigned_to_nat(0u);
x_106 = lean_nat_dec_eq(x_1, x_105);
if (x_106 == 1)
{
uint8_t x_107; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_107 = lean_nat_dec_eq(x_2, x_105);
if (x_107 == 1)
{
lean_object* x_108; 
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_108 = lean_apply_2(x_3, lean_box(0), lean_box(0));
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; uint8_t x_111; 
lean_dec(x_3);
x_109 = lean_unsigned_to_nat(1u);
x_110 = lean_nat_sub(x_2, x_109);
lean_dec(x_2);
x_111 = lean_nat_dec_eq(x_110, x_105);
if (x_111 == 1)
{
lean_object* x_112; 
lean_dec(x_110);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_112 = lean_apply_2(x_4, lean_box(0), lean_box(0));
return x_112;
}
else
{
lean_object* x_113; uint8_t x_114; 
lean_dec(x_4);
x_113 = lean_nat_sub(x_110, x_109);
lean_dec(x_110);
x_114 = lean_nat_dec_eq(x_113, x_105);
if (x_114 == 1)
{
lean_object* x_115; 
lean_dec(x_113);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_115 = lean_apply_2(x_5, lean_box(0), lean_box(0));
return x_115;
}
else
{
lean_object* x_116; uint8_t x_117; 
lean_dec(x_5);
x_116 = lean_nat_sub(x_113, x_109);
lean_dec(x_113);
x_117 = lean_nat_dec_eq(x_116, x_105);
if (x_117 == 1)
{
lean_object* x_118; 
lean_dec(x_116);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_118 = lean_apply_2(x_6, lean_box(0), lean_box(0));
return x_118;
}
else
{
lean_object* x_119; uint8_t x_120; 
lean_dec(x_6);
x_119 = lean_nat_sub(x_116, x_109);
lean_dec(x_116);
x_120 = lean_nat_dec_eq(x_119, x_105);
if (x_120 == 1)
{
lean_object* x_121; 
lean_dec(x_119);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_121 = lean_apply_2(x_7, lean_box(0), lean_box(0));
return x_121;
}
else
{
lean_object* x_122; uint8_t x_123; 
lean_dec(x_7);
x_122 = lean_nat_sub(x_119, x_109);
lean_dec(x_119);
x_123 = lean_nat_dec_eq(x_122, x_105);
if (x_123 == 1)
{
lean_object* x_124; 
lean_dec(x_122);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_124 = lean_apply_2(x_8, lean_box(0), lean_box(0));
return x_124;
}
else
{
lean_object* x_125; uint8_t x_126; 
lean_dec(x_8);
x_125 = lean_nat_sub(x_122, x_109);
lean_dec(x_122);
x_126 = lean_nat_dec_eq(x_125, x_105);
if (x_126 == 1)
{
lean_object* x_127; 
lean_dec(x_125);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_127 = lean_apply_2(x_9, lean_box(0), lean_box(0));
return x_127;
}
else
{
lean_object* x_128; uint8_t x_129; 
lean_dec(x_9);
x_128 = lean_nat_sub(x_125, x_109);
lean_dec(x_125);
x_129 = lean_nat_dec_eq(x_128, x_105);
if (x_129 == 1)
{
lean_object* x_130; 
lean_dec(x_128);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_1);
x_130 = lean_apply_2(x_10, lean_box(0), lean_box(0));
return x_130;
}
else
{
lean_object* x_131; uint8_t x_132; 
lean_dec(x_10);
x_131 = lean_nat_sub(x_128, x_109);
lean_dec(x_128);
x_132 = lean_nat_dec_eq(x_131, x_105);
if (x_132 == 1)
{
lean_object* x_133; 
lean_dec(x_131);
lean_dec(x_104);
lean_dec(x_12);
lean_dec(x_1);
x_133 = lean_apply_2(x_11, lean_box(0), lean_box(0));
return x_133;
}
else
{
lean_object* x_134; uint8_t x_135; 
lean_dec(x_11);
x_134 = lean_nat_sub(x_131, x_109);
lean_dec(x_131);
x_135 = lean_nat_dec_eq(x_134, x_105);
if (x_135 == 1)
{
lean_object* x_136; 
lean_dec(x_134);
lean_dec(x_104);
lean_dec(x_1);
x_136 = lean_apply_2(x_12, lean_box(0), lean_box(0));
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; 
lean_dec(x_12);
x_137 = lean_nat_sub(x_134, x_109);
lean_dec(x_134);
x_138 = lean_apply_4(x_104, x_1, x_137, lean_box(0), lean_box(0));
return x_138;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_139; lean_object* x_140; uint8_t x_141; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_139 = lean_unsigned_to_nat(1u);
x_140 = lean_nat_sub(x_1, x_139);
x_141 = lean_nat_dec_eq(x_140, x_105);
if (x_141 == 1)
{
uint8_t x_142; 
lean_dec(x_140);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
x_142 = lean_nat_dec_eq(x_2, x_105);
if (x_142 == 1)
{
lean_object* x_143; 
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_143 = lean_apply_2(x_13, lean_box(0), lean_box(0));
return x_143;
}
else
{
lean_object* x_144; uint8_t x_145; 
lean_dec(x_13);
x_144 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_145 = lean_nat_dec_eq(x_144, x_105);
if (x_145 == 1)
{
lean_object* x_146; 
lean_dec(x_144);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_1);
x_146 = lean_apply_2(x_14, lean_box(0), lean_box(0));
return x_146;
}
else
{
lean_object* x_147; uint8_t x_148; 
lean_dec(x_14);
x_147 = lean_nat_sub(x_144, x_139);
lean_dec(x_144);
x_148 = lean_nat_dec_eq(x_147, x_105);
if (x_148 == 1)
{
lean_object* x_149; 
lean_dec(x_147);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_1);
x_149 = lean_apply_2(x_15, lean_box(0), lean_box(0));
return x_149;
}
else
{
lean_object* x_150; uint8_t x_151; 
lean_dec(x_15);
x_150 = lean_nat_sub(x_147, x_139);
lean_dec(x_147);
x_151 = lean_nat_dec_eq(x_150, x_105);
if (x_151 == 1)
{
lean_object* x_152; 
lean_dec(x_150);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_1);
x_152 = lean_apply_2(x_16, lean_box(0), lean_box(0));
return x_152;
}
else
{
lean_object* x_153; uint8_t x_154; 
lean_dec(x_16);
x_153 = lean_nat_sub(x_150, x_139);
lean_dec(x_150);
x_154 = lean_nat_dec_eq(x_153, x_105);
if (x_154 == 1)
{
lean_object* x_155; 
lean_dec(x_153);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_1);
x_155 = lean_apply_2(x_17, lean_box(0), lean_box(0));
return x_155;
}
else
{
lean_object* x_156; uint8_t x_157; 
lean_dec(x_17);
x_156 = lean_nat_sub(x_153, x_139);
lean_dec(x_153);
x_157 = lean_nat_dec_eq(x_156, x_105);
if (x_157 == 1)
{
lean_object* x_158; 
lean_dec(x_156);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_1);
x_158 = lean_apply_2(x_18, lean_box(0), lean_box(0));
return x_158;
}
else
{
lean_object* x_159; uint8_t x_160; 
lean_dec(x_18);
x_159 = lean_nat_sub(x_156, x_139);
lean_dec(x_156);
x_160 = lean_nat_dec_eq(x_159, x_105);
if (x_160 == 1)
{
lean_object* x_161; 
lean_dec(x_159);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_1);
x_161 = lean_apply_2(x_19, lean_box(0), lean_box(0));
return x_161;
}
else
{
lean_object* x_162; uint8_t x_163; 
lean_dec(x_19);
x_162 = lean_nat_sub(x_159, x_139);
lean_dec(x_159);
x_163 = lean_nat_dec_eq(x_162, x_105);
if (x_163 == 1)
{
lean_object* x_164; 
lean_dec(x_162);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_1);
x_164 = lean_apply_2(x_20, lean_box(0), lean_box(0));
return x_164;
}
else
{
lean_object* x_165; uint8_t x_166; 
lean_dec(x_20);
x_165 = lean_nat_sub(x_162, x_139);
lean_dec(x_162);
x_166 = lean_nat_dec_eq(x_165, x_105);
if (x_166 == 1)
{
lean_object* x_167; 
lean_dec(x_165);
lean_dec(x_104);
lean_dec(x_22);
lean_dec(x_1);
x_167 = lean_apply_2(x_21, lean_box(0), lean_box(0));
return x_167;
}
else
{
lean_object* x_168; uint8_t x_169; 
lean_dec(x_21);
x_168 = lean_nat_sub(x_165, x_139);
lean_dec(x_165);
x_169 = lean_nat_dec_eq(x_168, x_105);
if (x_169 == 1)
{
lean_object* x_170; 
lean_dec(x_168);
lean_dec(x_104);
lean_dec(x_1);
x_170 = lean_apply_2(x_22, lean_box(0), lean_box(0));
return x_170;
}
else
{
lean_object* x_171; lean_object* x_172; 
lean_dec(x_22);
x_171 = lean_nat_sub(x_168, x_139);
lean_dec(x_168);
x_172 = lean_apply_4(x_104, x_1, x_171, lean_box(0), lean_box(0));
return x_172;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_173; uint8_t x_174; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_173 = lean_nat_sub(x_140, x_139);
lean_dec(x_140);
x_174 = lean_nat_dec_eq(x_173, x_105);
if (x_174 == 1)
{
uint8_t x_175; 
lean_dec(x_173);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
x_175 = lean_nat_dec_eq(x_2, x_105);
if (x_175 == 1)
{
lean_object* x_176; 
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_1);
x_176 = lean_apply_2(x_23, lean_box(0), lean_box(0));
return x_176;
}
else
{
lean_object* x_177; uint8_t x_178; 
lean_dec(x_23);
x_177 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_178 = lean_nat_dec_eq(x_177, x_105);
if (x_178 == 1)
{
lean_object* x_179; 
lean_dec(x_177);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_1);
x_179 = lean_apply_2(x_24, lean_box(0), lean_box(0));
return x_179;
}
else
{
lean_object* x_180; uint8_t x_181; 
lean_dec(x_24);
x_180 = lean_nat_sub(x_177, x_139);
lean_dec(x_177);
x_181 = lean_nat_dec_eq(x_180, x_105);
if (x_181 == 1)
{
lean_object* x_182; 
lean_dec(x_180);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_1);
x_182 = lean_apply_2(x_25, lean_box(0), lean_box(0));
return x_182;
}
else
{
lean_object* x_183; uint8_t x_184; 
lean_dec(x_25);
x_183 = lean_nat_sub(x_180, x_139);
lean_dec(x_180);
x_184 = lean_nat_dec_eq(x_183, x_105);
if (x_184 == 1)
{
lean_object* x_185; 
lean_dec(x_183);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_1);
x_185 = lean_apply_2(x_26, lean_box(0), lean_box(0));
return x_185;
}
else
{
lean_object* x_186; uint8_t x_187; 
lean_dec(x_26);
x_186 = lean_nat_sub(x_183, x_139);
lean_dec(x_183);
x_187 = lean_nat_dec_eq(x_186, x_105);
if (x_187 == 1)
{
lean_object* x_188; 
lean_dec(x_186);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_188 = lean_apply_2(x_27, lean_box(0), lean_box(0));
return x_188;
}
else
{
lean_object* x_189; uint8_t x_190; 
lean_dec(x_27);
x_189 = lean_nat_sub(x_186, x_139);
lean_dec(x_186);
x_190 = lean_nat_dec_eq(x_189, x_105);
if (x_190 == 1)
{
lean_object* x_191; 
lean_dec(x_189);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_1);
x_191 = lean_apply_2(x_28, lean_box(0), lean_box(0));
return x_191;
}
else
{
lean_object* x_192; uint8_t x_193; 
lean_dec(x_28);
x_192 = lean_nat_sub(x_189, x_139);
lean_dec(x_189);
x_193 = lean_nat_dec_eq(x_192, x_105);
if (x_193 == 1)
{
lean_object* x_194; 
lean_dec(x_192);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_1);
x_194 = lean_apply_2(x_29, lean_box(0), lean_box(0));
return x_194;
}
else
{
lean_object* x_195; uint8_t x_196; 
lean_dec(x_29);
x_195 = lean_nat_sub(x_192, x_139);
lean_dec(x_192);
x_196 = lean_nat_dec_eq(x_195, x_105);
if (x_196 == 1)
{
lean_object* x_197; 
lean_dec(x_195);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_1);
x_197 = lean_apply_2(x_30, lean_box(0), lean_box(0));
return x_197;
}
else
{
lean_object* x_198; uint8_t x_199; 
lean_dec(x_30);
x_198 = lean_nat_sub(x_195, x_139);
lean_dec(x_195);
x_199 = lean_nat_dec_eq(x_198, x_105);
if (x_199 == 1)
{
lean_object* x_200; 
lean_dec(x_198);
lean_dec(x_104);
lean_dec(x_32);
lean_dec(x_1);
x_200 = lean_apply_2(x_31, lean_box(0), lean_box(0));
return x_200;
}
else
{
lean_object* x_201; uint8_t x_202; 
lean_dec(x_31);
x_201 = lean_nat_sub(x_198, x_139);
lean_dec(x_198);
x_202 = lean_nat_dec_eq(x_201, x_105);
if (x_202 == 1)
{
lean_object* x_203; 
lean_dec(x_201);
lean_dec(x_104);
lean_dec(x_1);
x_203 = lean_apply_2(x_32, lean_box(0), lean_box(0));
return x_203;
}
else
{
lean_object* x_204; lean_object* x_205; 
lean_dec(x_32);
x_204 = lean_nat_sub(x_201, x_139);
lean_dec(x_201);
x_205 = lean_apply_4(x_104, x_1, x_204, lean_box(0), lean_box(0));
return x_205;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_206; uint8_t x_207; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
x_206 = lean_nat_sub(x_173, x_139);
lean_dec(x_173);
x_207 = lean_nat_dec_eq(x_206, x_105);
if (x_207 == 1)
{
uint8_t x_208; 
lean_dec(x_206);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
x_208 = lean_nat_dec_eq(x_2, x_105);
if (x_208 == 1)
{
lean_object* x_209; 
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_2);
lean_dec(x_1);
x_209 = lean_apply_2(x_33, lean_box(0), lean_box(0));
return x_209;
}
else
{
lean_object* x_210; uint8_t x_211; 
lean_dec(x_33);
x_210 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_211 = lean_nat_dec_eq(x_210, x_105);
if (x_211 == 1)
{
lean_object* x_212; 
lean_dec(x_210);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_1);
x_212 = lean_apply_2(x_34, lean_box(0), lean_box(0));
return x_212;
}
else
{
lean_object* x_213; uint8_t x_214; 
lean_dec(x_34);
x_213 = lean_nat_sub(x_210, x_139);
lean_dec(x_210);
x_214 = lean_nat_dec_eq(x_213, x_105);
if (x_214 == 1)
{
lean_object* x_215; 
lean_dec(x_213);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_1);
x_215 = lean_apply_2(x_35, lean_box(0), lean_box(0));
return x_215;
}
else
{
lean_object* x_216; uint8_t x_217; 
lean_dec(x_35);
x_216 = lean_nat_sub(x_213, x_139);
lean_dec(x_213);
x_217 = lean_nat_dec_eq(x_216, x_105);
if (x_217 == 1)
{
lean_object* x_218; 
lean_dec(x_216);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_1);
x_218 = lean_apply_2(x_36, lean_box(0), lean_box(0));
return x_218;
}
else
{
lean_object* x_219; uint8_t x_220; 
lean_dec(x_36);
x_219 = lean_nat_sub(x_216, x_139);
lean_dec(x_216);
x_220 = lean_nat_dec_eq(x_219, x_105);
if (x_220 == 1)
{
lean_object* x_221; 
lean_dec(x_219);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_1);
x_221 = lean_apply_2(x_37, lean_box(0), lean_box(0));
return x_221;
}
else
{
lean_object* x_222; uint8_t x_223; 
lean_dec(x_37);
x_222 = lean_nat_sub(x_219, x_139);
lean_dec(x_219);
x_223 = lean_nat_dec_eq(x_222, x_105);
if (x_223 == 1)
{
lean_object* x_224; 
lean_dec(x_222);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_1);
x_224 = lean_apply_2(x_38, lean_box(0), lean_box(0));
return x_224;
}
else
{
lean_object* x_225; uint8_t x_226; 
lean_dec(x_38);
x_225 = lean_nat_sub(x_222, x_139);
lean_dec(x_222);
x_226 = lean_nat_dec_eq(x_225, x_105);
if (x_226 == 1)
{
lean_object* x_227; 
lean_dec(x_225);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_227 = lean_apply_2(x_39, lean_box(0), lean_box(0));
return x_227;
}
else
{
lean_object* x_228; uint8_t x_229; 
lean_dec(x_39);
x_228 = lean_nat_sub(x_225, x_139);
lean_dec(x_225);
x_229 = lean_nat_dec_eq(x_228, x_105);
if (x_229 == 1)
{
lean_object* x_230; 
lean_dec(x_228);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_1);
x_230 = lean_apply_2(x_40, lean_box(0), lean_box(0));
return x_230;
}
else
{
lean_object* x_231; uint8_t x_232; 
lean_dec(x_40);
x_231 = lean_nat_sub(x_228, x_139);
lean_dec(x_228);
x_232 = lean_nat_dec_eq(x_231, x_105);
if (x_232 == 1)
{
lean_object* x_233; 
lean_dec(x_231);
lean_dec(x_104);
lean_dec(x_42);
lean_dec(x_1);
x_233 = lean_apply_2(x_41, lean_box(0), lean_box(0));
return x_233;
}
else
{
lean_object* x_234; uint8_t x_235; 
lean_dec(x_41);
x_234 = lean_nat_sub(x_231, x_139);
lean_dec(x_231);
x_235 = lean_nat_dec_eq(x_234, x_105);
if (x_235 == 1)
{
lean_object* x_236; 
lean_dec(x_234);
lean_dec(x_104);
lean_dec(x_1);
x_236 = lean_apply_2(x_42, lean_box(0), lean_box(0));
return x_236;
}
else
{
lean_object* x_237; lean_object* x_238; 
lean_dec(x_42);
x_237 = lean_nat_sub(x_234, x_139);
lean_dec(x_234);
x_238 = lean_apply_4(x_104, x_1, x_237, lean_box(0), lean_box(0));
return x_238;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_239; uint8_t x_240; 
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
x_239 = lean_nat_sub(x_206, x_139);
lean_dec(x_206);
x_240 = lean_nat_dec_eq(x_239, x_105);
if (x_240 == 1)
{
uint8_t x_241; 
lean_dec(x_239);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
x_241 = lean_nat_dec_eq(x_2, x_105);
if (x_241 == 1)
{
lean_object* x_242; 
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_2);
lean_dec(x_1);
x_242 = lean_apply_2(x_43, lean_box(0), lean_box(0));
return x_242;
}
else
{
lean_object* x_243; uint8_t x_244; 
lean_dec(x_43);
x_243 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_244 = lean_nat_dec_eq(x_243, x_105);
if (x_244 == 1)
{
lean_object* x_245; 
lean_dec(x_243);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_1);
x_245 = lean_apply_2(x_44, lean_box(0), lean_box(0));
return x_245;
}
else
{
lean_object* x_246; uint8_t x_247; 
lean_dec(x_44);
x_246 = lean_nat_sub(x_243, x_139);
lean_dec(x_243);
x_247 = lean_nat_dec_eq(x_246, x_105);
if (x_247 == 1)
{
lean_object* x_248; 
lean_dec(x_246);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_1);
x_248 = lean_apply_2(x_45, lean_box(0), lean_box(0));
return x_248;
}
else
{
lean_object* x_249; uint8_t x_250; 
lean_dec(x_45);
x_249 = lean_nat_sub(x_246, x_139);
lean_dec(x_246);
x_250 = lean_nat_dec_eq(x_249, x_105);
if (x_250 == 1)
{
lean_object* x_251; 
lean_dec(x_249);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_1);
x_251 = lean_apply_2(x_46, lean_box(0), lean_box(0));
return x_251;
}
else
{
lean_object* x_252; uint8_t x_253; 
lean_dec(x_46);
x_252 = lean_nat_sub(x_249, x_139);
lean_dec(x_249);
x_253 = lean_nat_dec_eq(x_252, x_105);
if (x_253 == 1)
{
lean_object* x_254; 
lean_dec(x_252);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_1);
x_254 = lean_apply_2(x_47, lean_box(0), lean_box(0));
return x_254;
}
else
{
lean_object* x_255; uint8_t x_256; 
lean_dec(x_47);
x_255 = lean_nat_sub(x_252, x_139);
lean_dec(x_252);
x_256 = lean_nat_dec_eq(x_255, x_105);
if (x_256 == 1)
{
lean_object* x_257; 
lean_dec(x_255);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_1);
x_257 = lean_apply_2(x_48, lean_box(0), lean_box(0));
return x_257;
}
else
{
lean_object* x_258; uint8_t x_259; 
lean_dec(x_48);
x_258 = lean_nat_sub(x_255, x_139);
lean_dec(x_255);
x_259 = lean_nat_dec_eq(x_258, x_105);
if (x_259 == 1)
{
lean_object* x_260; 
lean_dec(x_258);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_1);
x_260 = lean_apply_2(x_49, lean_box(0), lean_box(0));
return x_260;
}
else
{
lean_object* x_261; uint8_t x_262; 
lean_dec(x_49);
x_261 = lean_nat_sub(x_258, x_139);
lean_dec(x_258);
x_262 = lean_nat_dec_eq(x_261, x_105);
if (x_262 == 1)
{
lean_object* x_263; 
lean_dec(x_261);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_1);
x_263 = lean_apply_2(x_50, lean_box(0), lean_box(0));
return x_263;
}
else
{
lean_object* x_264; uint8_t x_265; 
lean_dec(x_50);
x_264 = lean_nat_sub(x_261, x_139);
lean_dec(x_261);
x_265 = lean_nat_dec_eq(x_264, x_105);
if (x_265 == 1)
{
lean_object* x_266; 
lean_dec(x_264);
lean_dec(x_104);
lean_dec(x_52);
lean_dec(x_1);
x_266 = lean_apply_2(x_51, lean_box(0), lean_box(0));
return x_266;
}
else
{
lean_object* x_267; uint8_t x_268; 
lean_dec(x_51);
x_267 = lean_nat_sub(x_264, x_139);
lean_dec(x_264);
x_268 = lean_nat_dec_eq(x_267, x_105);
if (x_268 == 1)
{
lean_object* x_269; 
lean_dec(x_267);
lean_dec(x_104);
lean_dec(x_1);
x_269 = lean_apply_2(x_52, lean_box(0), lean_box(0));
return x_269;
}
else
{
lean_object* x_270; lean_object* x_271; 
lean_dec(x_52);
x_270 = lean_nat_sub(x_267, x_139);
lean_dec(x_267);
x_271 = lean_apply_4(x_104, x_1, x_270, lean_box(0), lean_box(0));
return x_271;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_272; uint8_t x_273; 
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
x_272 = lean_nat_sub(x_239, x_139);
lean_dec(x_239);
x_273 = lean_nat_dec_eq(x_272, x_105);
if (x_273 == 1)
{
uint8_t x_274; 
lean_dec(x_272);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
x_274 = lean_nat_dec_eq(x_2, x_105);
if (x_274 == 1)
{
lean_object* x_275; 
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_2);
lean_dec(x_1);
x_275 = lean_apply_2(x_53, lean_box(0), lean_box(0));
return x_275;
}
else
{
lean_object* x_276; uint8_t x_277; 
lean_dec(x_53);
x_276 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_277 = lean_nat_dec_eq(x_276, x_105);
if (x_277 == 1)
{
lean_object* x_278; 
lean_dec(x_276);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_1);
x_278 = lean_apply_2(x_54, lean_box(0), lean_box(0));
return x_278;
}
else
{
lean_object* x_279; uint8_t x_280; 
lean_dec(x_54);
x_279 = lean_nat_sub(x_276, x_139);
lean_dec(x_276);
x_280 = lean_nat_dec_eq(x_279, x_105);
if (x_280 == 1)
{
lean_object* x_281; 
lean_dec(x_279);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_1);
x_281 = lean_apply_2(x_55, lean_box(0), lean_box(0));
return x_281;
}
else
{
lean_object* x_282; uint8_t x_283; 
lean_dec(x_55);
x_282 = lean_nat_sub(x_279, x_139);
lean_dec(x_279);
x_283 = lean_nat_dec_eq(x_282, x_105);
if (x_283 == 1)
{
lean_object* x_284; 
lean_dec(x_282);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_1);
x_284 = lean_apply_2(x_56, lean_box(0), lean_box(0));
return x_284;
}
else
{
lean_object* x_285; uint8_t x_286; 
lean_dec(x_56);
x_285 = lean_nat_sub(x_282, x_139);
lean_dec(x_282);
x_286 = lean_nat_dec_eq(x_285, x_105);
if (x_286 == 1)
{
lean_object* x_287; 
lean_dec(x_285);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_1);
x_287 = lean_apply_2(x_57, lean_box(0), lean_box(0));
return x_287;
}
else
{
lean_object* x_288; uint8_t x_289; 
lean_dec(x_57);
x_288 = lean_nat_sub(x_285, x_139);
lean_dec(x_285);
x_289 = lean_nat_dec_eq(x_288, x_105);
if (x_289 == 1)
{
lean_object* x_290; 
lean_dec(x_288);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_1);
x_290 = lean_apply_2(x_58, lean_box(0), lean_box(0));
return x_290;
}
else
{
lean_object* x_291; uint8_t x_292; 
lean_dec(x_58);
x_291 = lean_nat_sub(x_288, x_139);
lean_dec(x_288);
x_292 = lean_nat_dec_eq(x_291, x_105);
if (x_292 == 1)
{
lean_object* x_293; 
lean_dec(x_291);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_1);
x_293 = lean_apply_2(x_59, lean_box(0), lean_box(0));
return x_293;
}
else
{
lean_object* x_294; uint8_t x_295; 
lean_dec(x_59);
x_294 = lean_nat_sub(x_291, x_139);
lean_dec(x_291);
x_295 = lean_nat_dec_eq(x_294, x_105);
if (x_295 == 1)
{
lean_object* x_296; 
lean_dec(x_294);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_1);
x_296 = lean_apply_2(x_60, lean_box(0), lean_box(0));
return x_296;
}
else
{
lean_object* x_297; uint8_t x_298; 
lean_dec(x_60);
x_297 = lean_nat_sub(x_294, x_139);
lean_dec(x_294);
x_298 = lean_nat_dec_eq(x_297, x_105);
if (x_298 == 1)
{
lean_object* x_299; 
lean_dec(x_297);
lean_dec(x_104);
lean_dec(x_62);
lean_dec(x_1);
x_299 = lean_apply_2(x_61, lean_box(0), lean_box(0));
return x_299;
}
else
{
lean_object* x_300; uint8_t x_301; 
lean_dec(x_61);
x_300 = lean_nat_sub(x_297, x_139);
lean_dec(x_297);
x_301 = lean_nat_dec_eq(x_300, x_105);
if (x_301 == 1)
{
lean_object* x_302; 
lean_dec(x_300);
lean_dec(x_104);
lean_dec(x_1);
x_302 = lean_apply_2(x_62, lean_box(0), lean_box(0));
return x_302;
}
else
{
lean_object* x_303; lean_object* x_304; 
lean_dec(x_62);
x_303 = lean_nat_sub(x_300, x_139);
lean_dec(x_300);
x_304 = lean_apply_4(x_104, x_1, x_303, lean_box(0), lean_box(0));
return x_304;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_305; uint8_t x_306; 
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
x_305 = lean_nat_sub(x_272, x_139);
lean_dec(x_272);
x_306 = lean_nat_dec_eq(x_305, x_105);
if (x_306 == 1)
{
uint8_t x_307; 
lean_dec(x_305);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
x_307 = lean_nat_dec_eq(x_2, x_105);
if (x_307 == 1)
{
lean_object* x_308; 
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_2);
lean_dec(x_1);
x_308 = lean_apply_2(x_63, lean_box(0), lean_box(0));
return x_308;
}
else
{
lean_object* x_309; uint8_t x_310; 
lean_dec(x_63);
x_309 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_310 = lean_nat_dec_eq(x_309, x_105);
if (x_310 == 1)
{
lean_object* x_311; 
lean_dec(x_309);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_1);
x_311 = lean_apply_2(x_64, lean_box(0), lean_box(0));
return x_311;
}
else
{
lean_object* x_312; uint8_t x_313; 
lean_dec(x_64);
x_312 = lean_nat_sub(x_309, x_139);
lean_dec(x_309);
x_313 = lean_nat_dec_eq(x_312, x_105);
if (x_313 == 1)
{
lean_object* x_314; 
lean_dec(x_312);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_1);
x_314 = lean_apply_2(x_65, lean_box(0), lean_box(0));
return x_314;
}
else
{
lean_object* x_315; uint8_t x_316; 
lean_dec(x_65);
x_315 = lean_nat_sub(x_312, x_139);
lean_dec(x_312);
x_316 = lean_nat_dec_eq(x_315, x_105);
if (x_316 == 1)
{
lean_object* x_317; 
lean_dec(x_315);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_1);
x_317 = lean_apply_2(x_66, lean_box(0), lean_box(0));
return x_317;
}
else
{
lean_object* x_318; uint8_t x_319; 
lean_dec(x_66);
x_318 = lean_nat_sub(x_315, x_139);
lean_dec(x_315);
x_319 = lean_nat_dec_eq(x_318, x_105);
if (x_319 == 1)
{
lean_object* x_320; 
lean_dec(x_318);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_1);
x_320 = lean_apply_2(x_67, lean_box(0), lean_box(0));
return x_320;
}
else
{
lean_object* x_321; uint8_t x_322; 
lean_dec(x_67);
x_321 = lean_nat_sub(x_318, x_139);
lean_dec(x_318);
x_322 = lean_nat_dec_eq(x_321, x_105);
if (x_322 == 1)
{
lean_object* x_323; 
lean_dec(x_321);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_1);
x_323 = lean_apply_2(x_68, lean_box(0), lean_box(0));
return x_323;
}
else
{
lean_object* x_324; uint8_t x_325; 
lean_dec(x_68);
x_324 = lean_nat_sub(x_321, x_139);
lean_dec(x_321);
x_325 = lean_nat_dec_eq(x_324, x_105);
if (x_325 == 1)
{
lean_object* x_326; 
lean_dec(x_324);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_1);
x_326 = lean_apply_2(x_69, lean_box(0), lean_box(0));
return x_326;
}
else
{
lean_object* x_327; uint8_t x_328; 
lean_dec(x_69);
x_327 = lean_nat_sub(x_324, x_139);
lean_dec(x_324);
x_328 = lean_nat_dec_eq(x_327, x_105);
if (x_328 == 1)
{
lean_object* x_329; 
lean_dec(x_327);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_1);
x_329 = lean_apply_2(x_70, lean_box(0), lean_box(0));
return x_329;
}
else
{
lean_object* x_330; uint8_t x_331; 
lean_dec(x_70);
x_330 = lean_nat_sub(x_327, x_139);
lean_dec(x_327);
x_331 = lean_nat_dec_eq(x_330, x_105);
if (x_331 == 1)
{
lean_object* x_332; 
lean_dec(x_330);
lean_dec(x_104);
lean_dec(x_72);
lean_dec(x_1);
x_332 = lean_apply_2(x_71, lean_box(0), lean_box(0));
return x_332;
}
else
{
lean_object* x_333; uint8_t x_334; 
lean_dec(x_71);
x_333 = lean_nat_sub(x_330, x_139);
lean_dec(x_330);
x_334 = lean_nat_dec_eq(x_333, x_105);
if (x_334 == 1)
{
lean_object* x_335; 
lean_dec(x_333);
lean_dec(x_104);
lean_dec(x_1);
x_335 = lean_apply_2(x_72, lean_box(0), lean_box(0));
return x_335;
}
else
{
lean_object* x_336; lean_object* x_337; 
lean_dec(x_72);
x_336 = lean_nat_sub(x_333, x_139);
lean_dec(x_333);
x_337 = lean_apply_4(x_104, x_1, x_336, lean_box(0), lean_box(0));
return x_337;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_338; uint8_t x_339; 
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
x_338 = lean_nat_sub(x_305, x_139);
lean_dec(x_305);
x_339 = lean_nat_dec_eq(x_338, x_105);
if (x_339 == 1)
{
uint8_t x_340; 
lean_dec(x_338);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
x_340 = lean_nat_dec_eq(x_2, x_105);
if (x_340 == 1)
{
lean_object* x_341; 
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_2);
lean_dec(x_1);
x_341 = lean_apply_2(x_73, lean_box(0), lean_box(0));
return x_341;
}
else
{
lean_object* x_342; uint8_t x_343; 
lean_dec(x_73);
x_342 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_343 = lean_nat_dec_eq(x_342, x_105);
if (x_343 == 1)
{
lean_object* x_344; 
lean_dec(x_342);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_1);
x_344 = lean_apply_2(x_74, lean_box(0), lean_box(0));
return x_344;
}
else
{
lean_object* x_345; uint8_t x_346; 
lean_dec(x_74);
x_345 = lean_nat_sub(x_342, x_139);
lean_dec(x_342);
x_346 = lean_nat_dec_eq(x_345, x_105);
if (x_346 == 1)
{
lean_object* x_347; 
lean_dec(x_345);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_1);
x_347 = lean_apply_2(x_75, lean_box(0), lean_box(0));
return x_347;
}
else
{
lean_object* x_348; uint8_t x_349; 
lean_dec(x_75);
x_348 = lean_nat_sub(x_345, x_139);
lean_dec(x_345);
x_349 = lean_nat_dec_eq(x_348, x_105);
if (x_349 == 1)
{
lean_object* x_350; 
lean_dec(x_348);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_1);
x_350 = lean_apply_2(x_76, lean_box(0), lean_box(0));
return x_350;
}
else
{
lean_object* x_351; uint8_t x_352; 
lean_dec(x_76);
x_351 = lean_nat_sub(x_348, x_139);
lean_dec(x_348);
x_352 = lean_nat_dec_eq(x_351, x_105);
if (x_352 == 1)
{
lean_object* x_353; 
lean_dec(x_351);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_1);
x_353 = lean_apply_2(x_77, lean_box(0), lean_box(0));
return x_353;
}
else
{
lean_object* x_354; uint8_t x_355; 
lean_dec(x_77);
x_354 = lean_nat_sub(x_351, x_139);
lean_dec(x_351);
x_355 = lean_nat_dec_eq(x_354, x_105);
if (x_355 == 1)
{
lean_object* x_356; 
lean_dec(x_354);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_1);
x_356 = lean_apply_2(x_78, lean_box(0), lean_box(0));
return x_356;
}
else
{
lean_object* x_357; uint8_t x_358; 
lean_dec(x_78);
x_357 = lean_nat_sub(x_354, x_139);
lean_dec(x_354);
x_358 = lean_nat_dec_eq(x_357, x_105);
if (x_358 == 1)
{
lean_object* x_359; 
lean_dec(x_357);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_1);
x_359 = lean_apply_2(x_79, lean_box(0), lean_box(0));
return x_359;
}
else
{
lean_object* x_360; uint8_t x_361; 
lean_dec(x_79);
x_360 = lean_nat_sub(x_357, x_139);
lean_dec(x_357);
x_361 = lean_nat_dec_eq(x_360, x_105);
if (x_361 == 1)
{
lean_object* x_362; 
lean_dec(x_360);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_1);
x_362 = lean_apply_2(x_80, lean_box(0), lean_box(0));
return x_362;
}
else
{
lean_object* x_363; uint8_t x_364; 
lean_dec(x_80);
x_363 = lean_nat_sub(x_360, x_139);
lean_dec(x_360);
x_364 = lean_nat_dec_eq(x_363, x_105);
if (x_364 == 1)
{
lean_object* x_365; 
lean_dec(x_363);
lean_dec(x_104);
lean_dec(x_82);
lean_dec(x_1);
x_365 = lean_apply_2(x_81, lean_box(0), lean_box(0));
return x_365;
}
else
{
lean_object* x_366; uint8_t x_367; 
lean_dec(x_81);
x_366 = lean_nat_sub(x_363, x_139);
lean_dec(x_363);
x_367 = lean_nat_dec_eq(x_366, x_105);
if (x_367 == 1)
{
lean_object* x_368; 
lean_dec(x_366);
lean_dec(x_104);
lean_dec(x_1);
x_368 = lean_apply_2(x_82, lean_box(0), lean_box(0));
return x_368;
}
else
{
lean_object* x_369; lean_object* x_370; 
lean_dec(x_82);
x_369 = lean_nat_sub(x_366, x_139);
lean_dec(x_366);
x_370 = lean_apply_4(x_104, x_1, x_369, lean_box(0), lean_box(0));
return x_370;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_371; uint8_t x_372; 
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
x_371 = lean_nat_sub(x_338, x_139);
lean_dec(x_338);
x_372 = lean_nat_dec_eq(x_371, x_105);
if (x_372 == 1)
{
uint8_t x_373; 
lean_dec(x_371);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
x_373 = lean_nat_dec_eq(x_2, x_105);
if (x_373 == 1)
{
lean_object* x_374; 
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_2);
lean_dec(x_1);
x_374 = lean_apply_2(x_83, lean_box(0), lean_box(0));
return x_374;
}
else
{
lean_object* x_375; uint8_t x_376; 
lean_dec(x_83);
x_375 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_376 = lean_nat_dec_eq(x_375, x_105);
if (x_376 == 1)
{
lean_object* x_377; 
lean_dec(x_375);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_1);
x_377 = lean_apply_2(x_84, lean_box(0), lean_box(0));
return x_377;
}
else
{
lean_object* x_378; uint8_t x_379; 
lean_dec(x_84);
x_378 = lean_nat_sub(x_375, x_139);
lean_dec(x_375);
x_379 = lean_nat_dec_eq(x_378, x_105);
if (x_379 == 1)
{
lean_object* x_380; 
lean_dec(x_378);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_1);
x_380 = lean_apply_2(x_85, lean_box(0), lean_box(0));
return x_380;
}
else
{
lean_object* x_381; uint8_t x_382; 
lean_dec(x_85);
x_381 = lean_nat_sub(x_378, x_139);
lean_dec(x_378);
x_382 = lean_nat_dec_eq(x_381, x_105);
if (x_382 == 1)
{
lean_object* x_383; 
lean_dec(x_381);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_1);
x_383 = lean_apply_2(x_86, lean_box(0), lean_box(0));
return x_383;
}
else
{
lean_object* x_384; uint8_t x_385; 
lean_dec(x_86);
x_384 = lean_nat_sub(x_381, x_139);
lean_dec(x_381);
x_385 = lean_nat_dec_eq(x_384, x_105);
if (x_385 == 1)
{
lean_object* x_386; 
lean_dec(x_384);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_1);
x_386 = lean_apply_2(x_87, lean_box(0), lean_box(0));
return x_386;
}
else
{
lean_object* x_387; uint8_t x_388; 
lean_dec(x_87);
x_387 = lean_nat_sub(x_384, x_139);
lean_dec(x_384);
x_388 = lean_nat_dec_eq(x_387, x_105);
if (x_388 == 1)
{
lean_object* x_389; 
lean_dec(x_387);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_1);
x_389 = lean_apply_2(x_88, lean_box(0), lean_box(0));
return x_389;
}
else
{
lean_object* x_390; uint8_t x_391; 
lean_dec(x_88);
x_390 = lean_nat_sub(x_387, x_139);
lean_dec(x_387);
x_391 = lean_nat_dec_eq(x_390, x_105);
if (x_391 == 1)
{
lean_object* x_392; 
lean_dec(x_390);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_1);
x_392 = lean_apply_2(x_89, lean_box(0), lean_box(0));
return x_392;
}
else
{
lean_object* x_393; uint8_t x_394; 
lean_dec(x_89);
x_393 = lean_nat_sub(x_390, x_139);
lean_dec(x_390);
x_394 = lean_nat_dec_eq(x_393, x_105);
if (x_394 == 1)
{
lean_object* x_395; 
lean_dec(x_393);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_1);
x_395 = lean_apply_2(x_90, lean_box(0), lean_box(0));
return x_395;
}
else
{
lean_object* x_396; uint8_t x_397; 
lean_dec(x_90);
x_396 = lean_nat_sub(x_393, x_139);
lean_dec(x_393);
x_397 = lean_nat_dec_eq(x_396, x_105);
if (x_397 == 1)
{
lean_object* x_398; 
lean_dec(x_396);
lean_dec(x_104);
lean_dec(x_92);
lean_dec(x_1);
x_398 = lean_apply_2(x_91, lean_box(0), lean_box(0));
return x_398;
}
else
{
lean_object* x_399; uint8_t x_400; 
lean_dec(x_91);
x_399 = lean_nat_sub(x_396, x_139);
lean_dec(x_396);
x_400 = lean_nat_dec_eq(x_399, x_105);
if (x_400 == 1)
{
lean_object* x_401; 
lean_dec(x_399);
lean_dec(x_104);
lean_dec(x_1);
x_401 = lean_apply_2(x_92, lean_box(0), lean_box(0));
return x_401;
}
else
{
lean_object* x_402; lean_object* x_403; 
lean_dec(x_92);
x_402 = lean_nat_sub(x_399, x_139);
lean_dec(x_399);
x_403 = lean_apply_4(x_104, x_1, x_402, lean_box(0), lean_box(0));
return x_403;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_404; uint8_t x_405; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
x_404 = lean_nat_sub(x_371, x_139);
lean_dec(x_371);
x_405 = lean_nat_dec_eq(x_404, x_105);
if (x_405 == 1)
{
uint8_t x_406; 
lean_dec(x_404);
lean_dec(x_103);
x_406 = lean_nat_dec_eq(x_2, x_105);
if (x_406 == 1)
{
lean_object* x_407; 
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_2);
lean_dec(x_1);
x_407 = lean_apply_2(x_93, lean_box(0), lean_box(0));
return x_407;
}
else
{
lean_object* x_408; uint8_t x_409; 
lean_dec(x_93);
x_408 = lean_nat_sub(x_2, x_139);
lean_dec(x_2);
x_409 = lean_nat_dec_eq(x_408, x_105);
if (x_409 == 1)
{
lean_object* x_410; 
lean_dec(x_408);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_1);
x_410 = lean_apply_2(x_94, lean_box(0), lean_box(0));
return x_410;
}
else
{
lean_object* x_411; uint8_t x_412; 
lean_dec(x_94);
x_411 = lean_nat_sub(x_408, x_139);
lean_dec(x_408);
x_412 = lean_nat_dec_eq(x_411, x_105);
if (x_412 == 1)
{
lean_object* x_413; 
lean_dec(x_411);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_1);
x_413 = lean_apply_2(x_95, lean_box(0), lean_box(0));
return x_413;
}
else
{
lean_object* x_414; uint8_t x_415; 
lean_dec(x_95);
x_414 = lean_nat_sub(x_411, x_139);
lean_dec(x_411);
x_415 = lean_nat_dec_eq(x_414, x_105);
if (x_415 == 1)
{
lean_object* x_416; 
lean_dec(x_414);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_1);
x_416 = lean_apply_2(x_96, lean_box(0), lean_box(0));
return x_416;
}
else
{
lean_object* x_417; uint8_t x_418; 
lean_dec(x_96);
x_417 = lean_nat_sub(x_414, x_139);
lean_dec(x_414);
x_418 = lean_nat_dec_eq(x_417, x_105);
if (x_418 == 1)
{
lean_object* x_419; 
lean_dec(x_417);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_1);
x_419 = lean_apply_2(x_97, lean_box(0), lean_box(0));
return x_419;
}
else
{
lean_object* x_420; uint8_t x_421; 
lean_dec(x_97);
x_420 = lean_nat_sub(x_417, x_139);
lean_dec(x_417);
x_421 = lean_nat_dec_eq(x_420, x_105);
if (x_421 == 1)
{
lean_object* x_422; 
lean_dec(x_420);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_1);
x_422 = lean_apply_2(x_98, lean_box(0), lean_box(0));
return x_422;
}
else
{
lean_object* x_423; uint8_t x_424; 
lean_dec(x_98);
x_423 = lean_nat_sub(x_420, x_139);
lean_dec(x_420);
x_424 = lean_nat_dec_eq(x_423, x_105);
if (x_424 == 1)
{
lean_object* x_425; 
lean_dec(x_423);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_1);
x_425 = lean_apply_2(x_99, lean_box(0), lean_box(0));
return x_425;
}
else
{
lean_object* x_426; uint8_t x_427; 
lean_dec(x_99);
x_426 = lean_nat_sub(x_423, x_139);
lean_dec(x_423);
x_427 = lean_nat_dec_eq(x_426, x_105);
if (x_427 == 1)
{
lean_object* x_428; 
lean_dec(x_426);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_1);
x_428 = lean_apply_2(x_100, lean_box(0), lean_box(0));
return x_428;
}
else
{
lean_object* x_429; uint8_t x_430; 
lean_dec(x_100);
x_429 = lean_nat_sub(x_426, x_139);
lean_dec(x_426);
x_430 = lean_nat_dec_eq(x_429, x_105);
if (x_430 == 1)
{
lean_object* x_431; 
lean_dec(x_429);
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_1);
x_431 = lean_apply_2(x_101, lean_box(0), lean_box(0));
return x_431;
}
else
{
lean_object* x_432; uint8_t x_433; 
lean_dec(x_101);
x_432 = lean_nat_sub(x_429, x_139);
lean_dec(x_429);
x_433 = lean_nat_dec_eq(x_432, x_105);
if (x_433 == 1)
{
lean_object* x_434; 
lean_dec(x_432);
lean_dec(x_104);
lean_dec(x_1);
x_434 = lean_apply_2(x_102, lean_box(0), lean_box(0));
return x_434;
}
else
{
lean_object* x_435; lean_object* x_436; 
lean_dec(x_102);
x_435 = lean_nat_sub(x_432, x_139);
lean_dec(x_432);
x_436 = lean_apply_4(x_104, x_1, x_435, lean_box(0), lean_box(0));
return x_436;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_437; lean_object* x_438; 
lean_dec(x_104);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_1);
x_437 = lean_nat_sub(x_404, x_139);
lean_dec(x_404);
x_438 = lean_apply_3(x_103, x_437, lean_box(0), x_2);
return x_438;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___redArg___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
lean_object* x_33 = _args[32];
lean_object* x_34 = _args[33];
lean_object* x_35 = _args[34];
lean_object* x_36 = _args[35];
lean_object* x_37 = _args[36];
lean_object* x_38 = _args[37];
lean_object* x_39 = _args[38];
lean_object* x_40 = _args[39];
lean_object* x_41 = _args[40];
lean_object* x_42 = _args[41];
lean_object* x_43 = _args[42];
lean_object* x_44 = _args[43];
lean_object* x_45 = _args[44];
lean_object* x_46 = _args[45];
lean_object* x_47 = _args[46];
lean_object* x_48 = _args[47];
lean_object* x_49 = _args[48];
lean_object* x_50 = _args[49];
lean_object* x_51 = _args[50];
lean_object* x_52 = _args[51];
lean_object* x_53 = _args[52];
lean_object* x_54 = _args[53];
lean_object* x_55 = _args[54];
lean_object* x_56 = _args[55];
lean_object* x_57 = _args[56];
lean_object* x_58 = _args[57];
lean_object* x_59 = _args[58];
lean_object* x_60 = _args[59];
lean_object* x_61 = _args[60];
lean_object* x_62 = _args[61];
lean_object* x_63 = _args[62];
lean_object* x_64 = _args[63];
lean_object* x_65 = _args[64];
lean_object* x_66 = _args[65];
lean_object* x_67 = _args[66];
lean_object* x_68 = _args[67];
lean_object* x_69 = _args[68];
lean_object* x_70 = _args[69];
lean_object* x_71 = _args[70];
lean_object* x_72 = _args[71];
lean_object* x_73 = _args[72];
lean_object* x_74 = _args[73];
lean_object* x_75 = _args[74];
lean_object* x_76 = _args[75];
lean_object* x_77 = _args[76];
lean_object* x_78 = _args[77];
lean_object* x_79 = _args[78];
lean_object* x_80 = _args[79];
lean_object* x_81 = _args[80];
lean_object* x_82 = _args[81];
lean_object* x_83 = _args[82];
lean_object* x_84 = _args[83];
lean_object* x_85 = _args[84];
lean_object* x_86 = _args[85];
lean_object* x_87 = _args[86];
lean_object* x_88 = _args[87];
lean_object* x_89 = _args[88];
lean_object* x_90 = _args[89];
lean_object* x_91 = _args[90];
lean_object* x_92 = _args[91];
lean_object* x_93 = _args[92];
lean_object* x_94 = _args[93];
lean_object* x_95 = _args[94];
lean_object* x_96 = _args[95];
lean_object* x_97 = _args[96];
lean_object* x_98 = _args[97];
lean_object* x_99 = _args[98];
lean_object* x_100 = _args[99];
lean_object* x_101 = _args[100];
lean_object* x_102 = _args[101];
lean_object* x_103 = _args[102];
lean_object* x_104 = _args[103];
_start:
{
lean_object* x_105; 
x_105 = lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33, x_34, x_35, x_36, x_37, x_38, x_39, x_40, x_41, x_42, x_43, x_44, x_45, x_46, x_47, x_48, x_49, x_50, x_51, x_52, x_53, x_54, x_55, x_56, x_57, x_58, x_59, x_60, x_61, x_62, x_63, x_64, x_65, x_66, x_67, x_68, x_69, x_70, x_71, x_72, x_73, x_74, x_75, x_76, x_77, x_78, x_79, x_80, x_81, x_82, x_83, x_84, x_85, x_86, x_87, x_88, x_89, x_90, x_91, x_92, x_93, x_94, x_95, x_96, x_97, x_98, x_99, x_100, x_101, x_102, x_103, x_104);
return x_105;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27, lean_object* x_28, lean_object* x_29, lean_object* x_30, lean_object* x_31, lean_object* x_32, lean_object* x_33, lean_object* x_34, lean_object* x_35, lean_object* x_36, lean_object* x_37, lean_object* x_38, lean_object* x_39, lean_object* x_40, lean_object* x_41, lean_object* x_42, lean_object* x_43, lean_object* x_44, lean_object* x_45, lean_object* x_46, lean_object* x_47, lean_object* x_48, lean_object* x_49, lean_object* x_50, lean_object* x_51, lean_object* x_52, lean_object* x_53, lean_object* x_54, lean_object* x_55, lean_object* x_56, lean_object* x_57, lean_object* x_58, lean_object* x_59, lean_object* x_60, lean_object* x_61, lean_object* x_62, lean_object* x_63, lean_object* x_64, lean_object* x_65, lean_object* x_66, lean_object* x_67, lean_object* x_68, lean_object* x_69, lean_object* x_70, lean_object* x_71, lean_object* x_72, lean_object* x_73, lean_object* x_74, lean_object* x_75, lean_object* x_76, lean_object* x_77, lean_object* x_78, lean_object* x_79, lean_object* x_80, lean_object* x_81, lean_object* x_82, lean_object* x_83, lean_object* x_84, lean_object* x_85, lean_object* x_86, lean_object* x_87, lean_object* x_88, lean_object* x_89, lean_object* x_90, lean_object* x_91, lean_object* x_92, lean_object* x_93, lean_object* x_94, lean_object* x_95, lean_object* x_96, lean_object* x_97, lean_object* x_98, lean_object* x_99, lean_object* x_100, lean_object* x_101, lean_object* x_102, lean_object* x_103, lean_object* x_104, lean_object* x_105) {
_start:
{
lean_object* x_106; uint8_t x_107; 
x_106 = lean_unsigned_to_nat(0u);
x_107 = lean_nat_dec_eq(x_2, x_106);
if (x_107 == 1)
{
uint8_t x_108; 
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_108 = lean_nat_dec_eq(x_3, x_106);
if (x_108 == 1)
{
lean_object* x_109; 
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_109 = lean_apply_2(x_4, lean_box(0), lean_box(0));
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; 
lean_dec(x_4);
x_110 = lean_unsigned_to_nat(1u);
x_111 = lean_nat_sub(x_3, x_110);
lean_dec(x_3);
x_112 = lean_nat_dec_eq(x_111, x_106);
if (x_112 == 1)
{
lean_object* x_113; 
lean_dec(x_111);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_113 = lean_apply_2(x_5, lean_box(0), lean_box(0));
return x_113;
}
else
{
lean_object* x_114; uint8_t x_115; 
lean_dec(x_5);
x_114 = lean_nat_sub(x_111, x_110);
lean_dec(x_111);
x_115 = lean_nat_dec_eq(x_114, x_106);
if (x_115 == 1)
{
lean_object* x_116; 
lean_dec(x_114);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_116 = lean_apply_2(x_6, lean_box(0), lean_box(0));
return x_116;
}
else
{
lean_object* x_117; uint8_t x_118; 
lean_dec(x_6);
x_117 = lean_nat_sub(x_114, x_110);
lean_dec(x_114);
x_118 = lean_nat_dec_eq(x_117, x_106);
if (x_118 == 1)
{
lean_object* x_119; 
lean_dec(x_117);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_119 = lean_apply_2(x_7, lean_box(0), lean_box(0));
return x_119;
}
else
{
lean_object* x_120; uint8_t x_121; 
lean_dec(x_7);
x_120 = lean_nat_sub(x_117, x_110);
lean_dec(x_117);
x_121 = lean_nat_dec_eq(x_120, x_106);
if (x_121 == 1)
{
lean_object* x_122; 
lean_dec(x_120);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_122 = lean_apply_2(x_8, lean_box(0), lean_box(0));
return x_122;
}
else
{
lean_object* x_123; uint8_t x_124; 
lean_dec(x_8);
x_123 = lean_nat_sub(x_120, x_110);
lean_dec(x_120);
x_124 = lean_nat_dec_eq(x_123, x_106);
if (x_124 == 1)
{
lean_object* x_125; 
lean_dec(x_123);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
x_125 = lean_apply_2(x_9, lean_box(0), lean_box(0));
return x_125;
}
else
{
lean_object* x_126; uint8_t x_127; 
lean_dec(x_9);
x_126 = lean_nat_sub(x_123, x_110);
lean_dec(x_123);
x_127 = lean_nat_dec_eq(x_126, x_106);
if (x_127 == 1)
{
lean_object* x_128; 
lean_dec(x_126);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
x_128 = lean_apply_2(x_10, lean_box(0), lean_box(0));
return x_128;
}
else
{
lean_object* x_129; uint8_t x_130; 
lean_dec(x_10);
x_129 = lean_nat_sub(x_126, x_110);
lean_dec(x_126);
x_130 = lean_nat_dec_eq(x_129, x_106);
if (x_130 == 1)
{
lean_object* x_131; 
lean_dec(x_129);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
x_131 = lean_apply_2(x_11, lean_box(0), lean_box(0));
return x_131;
}
else
{
lean_object* x_132; uint8_t x_133; 
lean_dec(x_11);
x_132 = lean_nat_sub(x_129, x_110);
lean_dec(x_129);
x_133 = lean_nat_dec_eq(x_132, x_106);
if (x_133 == 1)
{
lean_object* x_134; 
lean_dec(x_132);
lean_dec(x_105);
lean_dec(x_13);
lean_dec(x_2);
x_134 = lean_apply_2(x_12, lean_box(0), lean_box(0));
return x_134;
}
else
{
lean_object* x_135; uint8_t x_136; 
lean_dec(x_12);
x_135 = lean_nat_sub(x_132, x_110);
lean_dec(x_132);
x_136 = lean_nat_dec_eq(x_135, x_106);
if (x_136 == 1)
{
lean_object* x_137; 
lean_dec(x_135);
lean_dec(x_105);
lean_dec(x_2);
x_137 = lean_apply_2(x_13, lean_box(0), lean_box(0));
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_13);
x_138 = lean_nat_sub(x_135, x_110);
lean_dec(x_135);
x_139 = lean_apply_4(x_105, x_2, x_138, lean_box(0), lean_box(0));
return x_139;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_140; lean_object* x_141; uint8_t x_142; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_140 = lean_unsigned_to_nat(1u);
x_141 = lean_nat_sub(x_2, x_140);
x_142 = lean_nat_dec_eq(x_141, x_106);
if (x_142 == 1)
{
uint8_t x_143; 
lean_dec(x_141);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
x_143 = lean_nat_dec_eq(x_3, x_106);
if (x_143 == 1)
{
lean_object* x_144; 
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_144 = lean_apply_2(x_14, lean_box(0), lean_box(0));
return x_144;
}
else
{
lean_object* x_145; uint8_t x_146; 
lean_dec(x_14);
x_145 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_146 = lean_nat_dec_eq(x_145, x_106);
if (x_146 == 1)
{
lean_object* x_147; 
lean_dec(x_145);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_2);
x_147 = lean_apply_2(x_15, lean_box(0), lean_box(0));
return x_147;
}
else
{
lean_object* x_148; uint8_t x_149; 
lean_dec(x_15);
x_148 = lean_nat_sub(x_145, x_140);
lean_dec(x_145);
x_149 = lean_nat_dec_eq(x_148, x_106);
if (x_149 == 1)
{
lean_object* x_150; 
lean_dec(x_148);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_2);
x_150 = lean_apply_2(x_16, lean_box(0), lean_box(0));
return x_150;
}
else
{
lean_object* x_151; uint8_t x_152; 
lean_dec(x_16);
x_151 = lean_nat_sub(x_148, x_140);
lean_dec(x_148);
x_152 = lean_nat_dec_eq(x_151, x_106);
if (x_152 == 1)
{
lean_object* x_153; 
lean_dec(x_151);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_2);
x_153 = lean_apply_2(x_17, lean_box(0), lean_box(0));
return x_153;
}
else
{
lean_object* x_154; uint8_t x_155; 
lean_dec(x_17);
x_154 = lean_nat_sub(x_151, x_140);
lean_dec(x_151);
x_155 = lean_nat_dec_eq(x_154, x_106);
if (x_155 == 1)
{
lean_object* x_156; 
lean_dec(x_154);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_2);
x_156 = lean_apply_2(x_18, lean_box(0), lean_box(0));
return x_156;
}
else
{
lean_object* x_157; uint8_t x_158; 
lean_dec(x_18);
x_157 = lean_nat_sub(x_154, x_140);
lean_dec(x_154);
x_158 = lean_nat_dec_eq(x_157, x_106);
if (x_158 == 1)
{
lean_object* x_159; 
lean_dec(x_157);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_2);
x_159 = lean_apply_2(x_19, lean_box(0), lean_box(0));
return x_159;
}
else
{
lean_object* x_160; uint8_t x_161; 
lean_dec(x_19);
x_160 = lean_nat_sub(x_157, x_140);
lean_dec(x_157);
x_161 = lean_nat_dec_eq(x_160, x_106);
if (x_161 == 1)
{
lean_object* x_162; 
lean_dec(x_160);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_2);
x_162 = lean_apply_2(x_20, lean_box(0), lean_box(0));
return x_162;
}
else
{
lean_object* x_163; uint8_t x_164; 
lean_dec(x_20);
x_163 = lean_nat_sub(x_160, x_140);
lean_dec(x_160);
x_164 = lean_nat_dec_eq(x_163, x_106);
if (x_164 == 1)
{
lean_object* x_165; 
lean_dec(x_163);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_2);
x_165 = lean_apply_2(x_21, lean_box(0), lean_box(0));
return x_165;
}
else
{
lean_object* x_166; uint8_t x_167; 
lean_dec(x_21);
x_166 = lean_nat_sub(x_163, x_140);
lean_dec(x_163);
x_167 = lean_nat_dec_eq(x_166, x_106);
if (x_167 == 1)
{
lean_object* x_168; 
lean_dec(x_166);
lean_dec(x_105);
lean_dec(x_23);
lean_dec(x_2);
x_168 = lean_apply_2(x_22, lean_box(0), lean_box(0));
return x_168;
}
else
{
lean_object* x_169; uint8_t x_170; 
lean_dec(x_22);
x_169 = lean_nat_sub(x_166, x_140);
lean_dec(x_166);
x_170 = lean_nat_dec_eq(x_169, x_106);
if (x_170 == 1)
{
lean_object* x_171; 
lean_dec(x_169);
lean_dec(x_105);
lean_dec(x_2);
x_171 = lean_apply_2(x_23, lean_box(0), lean_box(0));
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; 
lean_dec(x_23);
x_172 = lean_nat_sub(x_169, x_140);
lean_dec(x_169);
x_173 = lean_apply_4(x_105, x_2, x_172, lean_box(0), lean_box(0));
return x_173;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
x_174 = lean_nat_sub(x_141, x_140);
lean_dec(x_141);
x_175 = lean_nat_dec_eq(x_174, x_106);
if (x_175 == 1)
{
uint8_t x_176; 
lean_dec(x_174);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
x_176 = lean_nat_dec_eq(x_3, x_106);
if (x_176 == 1)
{
lean_object* x_177; 
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_3);
lean_dec(x_2);
x_177 = lean_apply_2(x_24, lean_box(0), lean_box(0));
return x_177;
}
else
{
lean_object* x_178; uint8_t x_179; 
lean_dec(x_24);
x_178 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_179 = lean_nat_dec_eq(x_178, x_106);
if (x_179 == 1)
{
lean_object* x_180; 
lean_dec(x_178);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_2);
x_180 = lean_apply_2(x_25, lean_box(0), lean_box(0));
return x_180;
}
else
{
lean_object* x_181; uint8_t x_182; 
lean_dec(x_25);
x_181 = lean_nat_sub(x_178, x_140);
lean_dec(x_178);
x_182 = lean_nat_dec_eq(x_181, x_106);
if (x_182 == 1)
{
lean_object* x_183; 
lean_dec(x_181);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_2);
x_183 = lean_apply_2(x_26, lean_box(0), lean_box(0));
return x_183;
}
else
{
lean_object* x_184; uint8_t x_185; 
lean_dec(x_26);
x_184 = lean_nat_sub(x_181, x_140);
lean_dec(x_181);
x_185 = lean_nat_dec_eq(x_184, x_106);
if (x_185 == 1)
{
lean_object* x_186; 
lean_dec(x_184);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_2);
x_186 = lean_apply_2(x_27, lean_box(0), lean_box(0));
return x_186;
}
else
{
lean_object* x_187; uint8_t x_188; 
lean_dec(x_27);
x_187 = lean_nat_sub(x_184, x_140);
lean_dec(x_184);
x_188 = lean_nat_dec_eq(x_187, x_106);
if (x_188 == 1)
{
lean_object* x_189; 
lean_dec(x_187);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_2);
x_189 = lean_apply_2(x_28, lean_box(0), lean_box(0));
return x_189;
}
else
{
lean_object* x_190; uint8_t x_191; 
lean_dec(x_28);
x_190 = lean_nat_sub(x_187, x_140);
lean_dec(x_187);
x_191 = lean_nat_dec_eq(x_190, x_106);
if (x_191 == 1)
{
lean_object* x_192; 
lean_dec(x_190);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_2);
x_192 = lean_apply_2(x_29, lean_box(0), lean_box(0));
return x_192;
}
else
{
lean_object* x_193; uint8_t x_194; 
lean_dec(x_29);
x_193 = lean_nat_sub(x_190, x_140);
lean_dec(x_190);
x_194 = lean_nat_dec_eq(x_193, x_106);
if (x_194 == 1)
{
lean_object* x_195; 
lean_dec(x_193);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_2);
x_195 = lean_apply_2(x_30, lean_box(0), lean_box(0));
return x_195;
}
else
{
lean_object* x_196; uint8_t x_197; 
lean_dec(x_30);
x_196 = lean_nat_sub(x_193, x_140);
lean_dec(x_193);
x_197 = lean_nat_dec_eq(x_196, x_106);
if (x_197 == 1)
{
lean_object* x_198; 
lean_dec(x_196);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_2);
x_198 = lean_apply_2(x_31, lean_box(0), lean_box(0));
return x_198;
}
else
{
lean_object* x_199; uint8_t x_200; 
lean_dec(x_31);
x_199 = lean_nat_sub(x_196, x_140);
lean_dec(x_196);
x_200 = lean_nat_dec_eq(x_199, x_106);
if (x_200 == 1)
{
lean_object* x_201; 
lean_dec(x_199);
lean_dec(x_105);
lean_dec(x_33);
lean_dec(x_2);
x_201 = lean_apply_2(x_32, lean_box(0), lean_box(0));
return x_201;
}
else
{
lean_object* x_202; uint8_t x_203; 
lean_dec(x_32);
x_202 = lean_nat_sub(x_199, x_140);
lean_dec(x_199);
x_203 = lean_nat_dec_eq(x_202, x_106);
if (x_203 == 1)
{
lean_object* x_204; 
lean_dec(x_202);
lean_dec(x_105);
lean_dec(x_2);
x_204 = lean_apply_2(x_33, lean_box(0), lean_box(0));
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; 
lean_dec(x_33);
x_205 = lean_nat_sub(x_202, x_140);
lean_dec(x_202);
x_206 = lean_apply_4(x_105, x_2, x_205, lean_box(0), lean_box(0));
return x_206;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_207; uint8_t x_208; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
x_207 = lean_nat_sub(x_174, x_140);
lean_dec(x_174);
x_208 = lean_nat_dec_eq(x_207, x_106);
if (x_208 == 1)
{
uint8_t x_209; 
lean_dec(x_207);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
x_209 = lean_nat_dec_eq(x_3, x_106);
if (x_209 == 1)
{
lean_object* x_210; 
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_3);
lean_dec(x_2);
x_210 = lean_apply_2(x_34, lean_box(0), lean_box(0));
return x_210;
}
else
{
lean_object* x_211; uint8_t x_212; 
lean_dec(x_34);
x_211 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_212 = lean_nat_dec_eq(x_211, x_106);
if (x_212 == 1)
{
lean_object* x_213; 
lean_dec(x_211);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_2);
x_213 = lean_apply_2(x_35, lean_box(0), lean_box(0));
return x_213;
}
else
{
lean_object* x_214; uint8_t x_215; 
lean_dec(x_35);
x_214 = lean_nat_sub(x_211, x_140);
lean_dec(x_211);
x_215 = lean_nat_dec_eq(x_214, x_106);
if (x_215 == 1)
{
lean_object* x_216; 
lean_dec(x_214);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_2);
x_216 = lean_apply_2(x_36, lean_box(0), lean_box(0));
return x_216;
}
else
{
lean_object* x_217; uint8_t x_218; 
lean_dec(x_36);
x_217 = lean_nat_sub(x_214, x_140);
lean_dec(x_214);
x_218 = lean_nat_dec_eq(x_217, x_106);
if (x_218 == 1)
{
lean_object* x_219; 
lean_dec(x_217);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_2);
x_219 = lean_apply_2(x_37, lean_box(0), lean_box(0));
return x_219;
}
else
{
lean_object* x_220; uint8_t x_221; 
lean_dec(x_37);
x_220 = lean_nat_sub(x_217, x_140);
lean_dec(x_217);
x_221 = lean_nat_dec_eq(x_220, x_106);
if (x_221 == 1)
{
lean_object* x_222; 
lean_dec(x_220);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_2);
x_222 = lean_apply_2(x_38, lean_box(0), lean_box(0));
return x_222;
}
else
{
lean_object* x_223; uint8_t x_224; 
lean_dec(x_38);
x_223 = lean_nat_sub(x_220, x_140);
lean_dec(x_220);
x_224 = lean_nat_dec_eq(x_223, x_106);
if (x_224 == 1)
{
lean_object* x_225; 
lean_dec(x_223);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_2);
x_225 = lean_apply_2(x_39, lean_box(0), lean_box(0));
return x_225;
}
else
{
lean_object* x_226; uint8_t x_227; 
lean_dec(x_39);
x_226 = lean_nat_sub(x_223, x_140);
lean_dec(x_223);
x_227 = lean_nat_dec_eq(x_226, x_106);
if (x_227 == 1)
{
lean_object* x_228; 
lean_dec(x_226);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_2);
x_228 = lean_apply_2(x_40, lean_box(0), lean_box(0));
return x_228;
}
else
{
lean_object* x_229; uint8_t x_230; 
lean_dec(x_40);
x_229 = lean_nat_sub(x_226, x_140);
lean_dec(x_226);
x_230 = lean_nat_dec_eq(x_229, x_106);
if (x_230 == 1)
{
lean_object* x_231; 
lean_dec(x_229);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_2);
x_231 = lean_apply_2(x_41, lean_box(0), lean_box(0));
return x_231;
}
else
{
lean_object* x_232; uint8_t x_233; 
lean_dec(x_41);
x_232 = lean_nat_sub(x_229, x_140);
lean_dec(x_229);
x_233 = lean_nat_dec_eq(x_232, x_106);
if (x_233 == 1)
{
lean_object* x_234; 
lean_dec(x_232);
lean_dec(x_105);
lean_dec(x_43);
lean_dec(x_2);
x_234 = lean_apply_2(x_42, lean_box(0), lean_box(0));
return x_234;
}
else
{
lean_object* x_235; uint8_t x_236; 
lean_dec(x_42);
x_235 = lean_nat_sub(x_232, x_140);
lean_dec(x_232);
x_236 = lean_nat_dec_eq(x_235, x_106);
if (x_236 == 1)
{
lean_object* x_237; 
lean_dec(x_235);
lean_dec(x_105);
lean_dec(x_2);
x_237 = lean_apply_2(x_43, lean_box(0), lean_box(0));
return x_237;
}
else
{
lean_object* x_238; lean_object* x_239; 
lean_dec(x_43);
x_238 = lean_nat_sub(x_235, x_140);
lean_dec(x_235);
x_239 = lean_apply_4(x_105, x_2, x_238, lean_box(0), lean_box(0));
return x_239;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_240; uint8_t x_241; 
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
x_240 = lean_nat_sub(x_207, x_140);
lean_dec(x_207);
x_241 = lean_nat_dec_eq(x_240, x_106);
if (x_241 == 1)
{
uint8_t x_242; 
lean_dec(x_240);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
x_242 = lean_nat_dec_eq(x_3, x_106);
if (x_242 == 1)
{
lean_object* x_243; 
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_3);
lean_dec(x_2);
x_243 = lean_apply_2(x_44, lean_box(0), lean_box(0));
return x_243;
}
else
{
lean_object* x_244; uint8_t x_245; 
lean_dec(x_44);
x_244 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_245 = lean_nat_dec_eq(x_244, x_106);
if (x_245 == 1)
{
lean_object* x_246; 
lean_dec(x_244);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_2);
x_246 = lean_apply_2(x_45, lean_box(0), lean_box(0));
return x_246;
}
else
{
lean_object* x_247; uint8_t x_248; 
lean_dec(x_45);
x_247 = lean_nat_sub(x_244, x_140);
lean_dec(x_244);
x_248 = lean_nat_dec_eq(x_247, x_106);
if (x_248 == 1)
{
lean_object* x_249; 
lean_dec(x_247);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_2);
x_249 = lean_apply_2(x_46, lean_box(0), lean_box(0));
return x_249;
}
else
{
lean_object* x_250; uint8_t x_251; 
lean_dec(x_46);
x_250 = lean_nat_sub(x_247, x_140);
lean_dec(x_247);
x_251 = lean_nat_dec_eq(x_250, x_106);
if (x_251 == 1)
{
lean_object* x_252; 
lean_dec(x_250);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_2);
x_252 = lean_apply_2(x_47, lean_box(0), lean_box(0));
return x_252;
}
else
{
lean_object* x_253; uint8_t x_254; 
lean_dec(x_47);
x_253 = lean_nat_sub(x_250, x_140);
lean_dec(x_250);
x_254 = lean_nat_dec_eq(x_253, x_106);
if (x_254 == 1)
{
lean_object* x_255; 
lean_dec(x_253);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_2);
x_255 = lean_apply_2(x_48, lean_box(0), lean_box(0));
return x_255;
}
else
{
lean_object* x_256; uint8_t x_257; 
lean_dec(x_48);
x_256 = lean_nat_sub(x_253, x_140);
lean_dec(x_253);
x_257 = lean_nat_dec_eq(x_256, x_106);
if (x_257 == 1)
{
lean_object* x_258; 
lean_dec(x_256);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_2);
x_258 = lean_apply_2(x_49, lean_box(0), lean_box(0));
return x_258;
}
else
{
lean_object* x_259; uint8_t x_260; 
lean_dec(x_49);
x_259 = lean_nat_sub(x_256, x_140);
lean_dec(x_256);
x_260 = lean_nat_dec_eq(x_259, x_106);
if (x_260 == 1)
{
lean_object* x_261; 
lean_dec(x_259);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_2);
x_261 = lean_apply_2(x_50, lean_box(0), lean_box(0));
return x_261;
}
else
{
lean_object* x_262; uint8_t x_263; 
lean_dec(x_50);
x_262 = lean_nat_sub(x_259, x_140);
lean_dec(x_259);
x_263 = lean_nat_dec_eq(x_262, x_106);
if (x_263 == 1)
{
lean_object* x_264; 
lean_dec(x_262);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_2);
x_264 = lean_apply_2(x_51, lean_box(0), lean_box(0));
return x_264;
}
else
{
lean_object* x_265; uint8_t x_266; 
lean_dec(x_51);
x_265 = lean_nat_sub(x_262, x_140);
lean_dec(x_262);
x_266 = lean_nat_dec_eq(x_265, x_106);
if (x_266 == 1)
{
lean_object* x_267; 
lean_dec(x_265);
lean_dec(x_105);
lean_dec(x_53);
lean_dec(x_2);
x_267 = lean_apply_2(x_52, lean_box(0), lean_box(0));
return x_267;
}
else
{
lean_object* x_268; uint8_t x_269; 
lean_dec(x_52);
x_268 = lean_nat_sub(x_265, x_140);
lean_dec(x_265);
x_269 = lean_nat_dec_eq(x_268, x_106);
if (x_269 == 1)
{
lean_object* x_270; 
lean_dec(x_268);
lean_dec(x_105);
lean_dec(x_2);
x_270 = lean_apply_2(x_53, lean_box(0), lean_box(0));
return x_270;
}
else
{
lean_object* x_271; lean_object* x_272; 
lean_dec(x_53);
x_271 = lean_nat_sub(x_268, x_140);
lean_dec(x_268);
x_272 = lean_apply_4(x_105, x_2, x_271, lean_box(0), lean_box(0));
return x_272;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_273; uint8_t x_274; 
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
x_273 = lean_nat_sub(x_240, x_140);
lean_dec(x_240);
x_274 = lean_nat_dec_eq(x_273, x_106);
if (x_274 == 1)
{
uint8_t x_275; 
lean_dec(x_273);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
x_275 = lean_nat_dec_eq(x_3, x_106);
if (x_275 == 1)
{
lean_object* x_276; 
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_3);
lean_dec(x_2);
x_276 = lean_apply_2(x_54, lean_box(0), lean_box(0));
return x_276;
}
else
{
lean_object* x_277; uint8_t x_278; 
lean_dec(x_54);
x_277 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_278 = lean_nat_dec_eq(x_277, x_106);
if (x_278 == 1)
{
lean_object* x_279; 
lean_dec(x_277);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_2);
x_279 = lean_apply_2(x_55, lean_box(0), lean_box(0));
return x_279;
}
else
{
lean_object* x_280; uint8_t x_281; 
lean_dec(x_55);
x_280 = lean_nat_sub(x_277, x_140);
lean_dec(x_277);
x_281 = lean_nat_dec_eq(x_280, x_106);
if (x_281 == 1)
{
lean_object* x_282; 
lean_dec(x_280);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_2);
x_282 = lean_apply_2(x_56, lean_box(0), lean_box(0));
return x_282;
}
else
{
lean_object* x_283; uint8_t x_284; 
lean_dec(x_56);
x_283 = lean_nat_sub(x_280, x_140);
lean_dec(x_280);
x_284 = lean_nat_dec_eq(x_283, x_106);
if (x_284 == 1)
{
lean_object* x_285; 
lean_dec(x_283);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_2);
x_285 = lean_apply_2(x_57, lean_box(0), lean_box(0));
return x_285;
}
else
{
lean_object* x_286; uint8_t x_287; 
lean_dec(x_57);
x_286 = lean_nat_sub(x_283, x_140);
lean_dec(x_283);
x_287 = lean_nat_dec_eq(x_286, x_106);
if (x_287 == 1)
{
lean_object* x_288; 
lean_dec(x_286);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_2);
x_288 = lean_apply_2(x_58, lean_box(0), lean_box(0));
return x_288;
}
else
{
lean_object* x_289; uint8_t x_290; 
lean_dec(x_58);
x_289 = lean_nat_sub(x_286, x_140);
lean_dec(x_286);
x_290 = lean_nat_dec_eq(x_289, x_106);
if (x_290 == 1)
{
lean_object* x_291; 
lean_dec(x_289);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_2);
x_291 = lean_apply_2(x_59, lean_box(0), lean_box(0));
return x_291;
}
else
{
lean_object* x_292; uint8_t x_293; 
lean_dec(x_59);
x_292 = lean_nat_sub(x_289, x_140);
lean_dec(x_289);
x_293 = lean_nat_dec_eq(x_292, x_106);
if (x_293 == 1)
{
lean_object* x_294; 
lean_dec(x_292);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_2);
x_294 = lean_apply_2(x_60, lean_box(0), lean_box(0));
return x_294;
}
else
{
lean_object* x_295; uint8_t x_296; 
lean_dec(x_60);
x_295 = lean_nat_sub(x_292, x_140);
lean_dec(x_292);
x_296 = lean_nat_dec_eq(x_295, x_106);
if (x_296 == 1)
{
lean_object* x_297; 
lean_dec(x_295);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_2);
x_297 = lean_apply_2(x_61, lean_box(0), lean_box(0));
return x_297;
}
else
{
lean_object* x_298; uint8_t x_299; 
lean_dec(x_61);
x_298 = lean_nat_sub(x_295, x_140);
lean_dec(x_295);
x_299 = lean_nat_dec_eq(x_298, x_106);
if (x_299 == 1)
{
lean_object* x_300; 
lean_dec(x_298);
lean_dec(x_105);
lean_dec(x_63);
lean_dec(x_2);
x_300 = lean_apply_2(x_62, lean_box(0), lean_box(0));
return x_300;
}
else
{
lean_object* x_301; uint8_t x_302; 
lean_dec(x_62);
x_301 = lean_nat_sub(x_298, x_140);
lean_dec(x_298);
x_302 = lean_nat_dec_eq(x_301, x_106);
if (x_302 == 1)
{
lean_object* x_303; 
lean_dec(x_301);
lean_dec(x_105);
lean_dec(x_2);
x_303 = lean_apply_2(x_63, lean_box(0), lean_box(0));
return x_303;
}
else
{
lean_object* x_304; lean_object* x_305; 
lean_dec(x_63);
x_304 = lean_nat_sub(x_301, x_140);
lean_dec(x_301);
x_305 = lean_apply_4(x_105, x_2, x_304, lean_box(0), lean_box(0));
return x_305;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_306; uint8_t x_307; 
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
x_306 = lean_nat_sub(x_273, x_140);
lean_dec(x_273);
x_307 = lean_nat_dec_eq(x_306, x_106);
if (x_307 == 1)
{
uint8_t x_308; 
lean_dec(x_306);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
x_308 = lean_nat_dec_eq(x_3, x_106);
if (x_308 == 1)
{
lean_object* x_309; 
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_3);
lean_dec(x_2);
x_309 = lean_apply_2(x_64, lean_box(0), lean_box(0));
return x_309;
}
else
{
lean_object* x_310; uint8_t x_311; 
lean_dec(x_64);
x_310 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_311 = lean_nat_dec_eq(x_310, x_106);
if (x_311 == 1)
{
lean_object* x_312; 
lean_dec(x_310);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_2);
x_312 = lean_apply_2(x_65, lean_box(0), lean_box(0));
return x_312;
}
else
{
lean_object* x_313; uint8_t x_314; 
lean_dec(x_65);
x_313 = lean_nat_sub(x_310, x_140);
lean_dec(x_310);
x_314 = lean_nat_dec_eq(x_313, x_106);
if (x_314 == 1)
{
lean_object* x_315; 
lean_dec(x_313);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_2);
x_315 = lean_apply_2(x_66, lean_box(0), lean_box(0));
return x_315;
}
else
{
lean_object* x_316; uint8_t x_317; 
lean_dec(x_66);
x_316 = lean_nat_sub(x_313, x_140);
lean_dec(x_313);
x_317 = lean_nat_dec_eq(x_316, x_106);
if (x_317 == 1)
{
lean_object* x_318; 
lean_dec(x_316);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_2);
x_318 = lean_apply_2(x_67, lean_box(0), lean_box(0));
return x_318;
}
else
{
lean_object* x_319; uint8_t x_320; 
lean_dec(x_67);
x_319 = lean_nat_sub(x_316, x_140);
lean_dec(x_316);
x_320 = lean_nat_dec_eq(x_319, x_106);
if (x_320 == 1)
{
lean_object* x_321; 
lean_dec(x_319);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_2);
x_321 = lean_apply_2(x_68, lean_box(0), lean_box(0));
return x_321;
}
else
{
lean_object* x_322; uint8_t x_323; 
lean_dec(x_68);
x_322 = lean_nat_sub(x_319, x_140);
lean_dec(x_319);
x_323 = lean_nat_dec_eq(x_322, x_106);
if (x_323 == 1)
{
lean_object* x_324; 
lean_dec(x_322);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_2);
x_324 = lean_apply_2(x_69, lean_box(0), lean_box(0));
return x_324;
}
else
{
lean_object* x_325; uint8_t x_326; 
lean_dec(x_69);
x_325 = lean_nat_sub(x_322, x_140);
lean_dec(x_322);
x_326 = lean_nat_dec_eq(x_325, x_106);
if (x_326 == 1)
{
lean_object* x_327; 
lean_dec(x_325);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_2);
x_327 = lean_apply_2(x_70, lean_box(0), lean_box(0));
return x_327;
}
else
{
lean_object* x_328; uint8_t x_329; 
lean_dec(x_70);
x_328 = lean_nat_sub(x_325, x_140);
lean_dec(x_325);
x_329 = lean_nat_dec_eq(x_328, x_106);
if (x_329 == 1)
{
lean_object* x_330; 
lean_dec(x_328);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_2);
x_330 = lean_apply_2(x_71, lean_box(0), lean_box(0));
return x_330;
}
else
{
lean_object* x_331; uint8_t x_332; 
lean_dec(x_71);
x_331 = lean_nat_sub(x_328, x_140);
lean_dec(x_328);
x_332 = lean_nat_dec_eq(x_331, x_106);
if (x_332 == 1)
{
lean_object* x_333; 
lean_dec(x_331);
lean_dec(x_105);
lean_dec(x_73);
lean_dec(x_2);
x_333 = lean_apply_2(x_72, lean_box(0), lean_box(0));
return x_333;
}
else
{
lean_object* x_334; uint8_t x_335; 
lean_dec(x_72);
x_334 = lean_nat_sub(x_331, x_140);
lean_dec(x_331);
x_335 = lean_nat_dec_eq(x_334, x_106);
if (x_335 == 1)
{
lean_object* x_336; 
lean_dec(x_334);
lean_dec(x_105);
lean_dec(x_2);
x_336 = lean_apply_2(x_73, lean_box(0), lean_box(0));
return x_336;
}
else
{
lean_object* x_337; lean_object* x_338; 
lean_dec(x_73);
x_337 = lean_nat_sub(x_334, x_140);
lean_dec(x_334);
x_338 = lean_apply_4(x_105, x_2, x_337, lean_box(0), lean_box(0));
return x_338;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_339; uint8_t x_340; 
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_68);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
x_339 = lean_nat_sub(x_306, x_140);
lean_dec(x_306);
x_340 = lean_nat_dec_eq(x_339, x_106);
if (x_340 == 1)
{
uint8_t x_341; 
lean_dec(x_339);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
x_341 = lean_nat_dec_eq(x_3, x_106);
if (x_341 == 1)
{
lean_object* x_342; 
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_3);
lean_dec(x_2);
x_342 = lean_apply_2(x_74, lean_box(0), lean_box(0));
return x_342;
}
else
{
lean_object* x_343; uint8_t x_344; 
lean_dec(x_74);
x_343 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_344 = lean_nat_dec_eq(x_343, x_106);
if (x_344 == 1)
{
lean_object* x_345; 
lean_dec(x_343);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_2);
x_345 = lean_apply_2(x_75, lean_box(0), lean_box(0));
return x_345;
}
else
{
lean_object* x_346; uint8_t x_347; 
lean_dec(x_75);
x_346 = lean_nat_sub(x_343, x_140);
lean_dec(x_343);
x_347 = lean_nat_dec_eq(x_346, x_106);
if (x_347 == 1)
{
lean_object* x_348; 
lean_dec(x_346);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_2);
x_348 = lean_apply_2(x_76, lean_box(0), lean_box(0));
return x_348;
}
else
{
lean_object* x_349; uint8_t x_350; 
lean_dec(x_76);
x_349 = lean_nat_sub(x_346, x_140);
lean_dec(x_346);
x_350 = lean_nat_dec_eq(x_349, x_106);
if (x_350 == 1)
{
lean_object* x_351; 
lean_dec(x_349);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_2);
x_351 = lean_apply_2(x_77, lean_box(0), lean_box(0));
return x_351;
}
else
{
lean_object* x_352; uint8_t x_353; 
lean_dec(x_77);
x_352 = lean_nat_sub(x_349, x_140);
lean_dec(x_349);
x_353 = lean_nat_dec_eq(x_352, x_106);
if (x_353 == 1)
{
lean_object* x_354; 
lean_dec(x_352);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_2);
x_354 = lean_apply_2(x_78, lean_box(0), lean_box(0));
return x_354;
}
else
{
lean_object* x_355; uint8_t x_356; 
lean_dec(x_78);
x_355 = lean_nat_sub(x_352, x_140);
lean_dec(x_352);
x_356 = lean_nat_dec_eq(x_355, x_106);
if (x_356 == 1)
{
lean_object* x_357; 
lean_dec(x_355);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_2);
x_357 = lean_apply_2(x_79, lean_box(0), lean_box(0));
return x_357;
}
else
{
lean_object* x_358; uint8_t x_359; 
lean_dec(x_79);
x_358 = lean_nat_sub(x_355, x_140);
lean_dec(x_355);
x_359 = lean_nat_dec_eq(x_358, x_106);
if (x_359 == 1)
{
lean_object* x_360; 
lean_dec(x_358);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_2);
x_360 = lean_apply_2(x_80, lean_box(0), lean_box(0));
return x_360;
}
else
{
lean_object* x_361; uint8_t x_362; 
lean_dec(x_80);
x_361 = lean_nat_sub(x_358, x_140);
lean_dec(x_358);
x_362 = lean_nat_dec_eq(x_361, x_106);
if (x_362 == 1)
{
lean_object* x_363; 
lean_dec(x_361);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_2);
x_363 = lean_apply_2(x_81, lean_box(0), lean_box(0));
return x_363;
}
else
{
lean_object* x_364; uint8_t x_365; 
lean_dec(x_81);
x_364 = lean_nat_sub(x_361, x_140);
lean_dec(x_361);
x_365 = lean_nat_dec_eq(x_364, x_106);
if (x_365 == 1)
{
lean_object* x_366; 
lean_dec(x_364);
lean_dec(x_105);
lean_dec(x_83);
lean_dec(x_2);
x_366 = lean_apply_2(x_82, lean_box(0), lean_box(0));
return x_366;
}
else
{
lean_object* x_367; uint8_t x_368; 
lean_dec(x_82);
x_367 = lean_nat_sub(x_364, x_140);
lean_dec(x_364);
x_368 = lean_nat_dec_eq(x_367, x_106);
if (x_368 == 1)
{
lean_object* x_369; 
lean_dec(x_367);
lean_dec(x_105);
lean_dec(x_2);
x_369 = lean_apply_2(x_83, lean_box(0), lean_box(0));
return x_369;
}
else
{
lean_object* x_370; lean_object* x_371; 
lean_dec(x_83);
x_370 = lean_nat_sub(x_367, x_140);
lean_dec(x_367);
x_371 = lean_apply_4(x_105, x_2, x_370, lean_box(0), lean_box(0));
return x_371;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_372; uint8_t x_373; 
lean_dec(x_83);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
x_372 = lean_nat_sub(x_339, x_140);
lean_dec(x_339);
x_373 = lean_nat_dec_eq(x_372, x_106);
if (x_373 == 1)
{
uint8_t x_374; 
lean_dec(x_372);
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
x_374 = lean_nat_dec_eq(x_3, x_106);
if (x_374 == 1)
{
lean_object* x_375; 
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_3);
lean_dec(x_2);
x_375 = lean_apply_2(x_84, lean_box(0), lean_box(0));
return x_375;
}
else
{
lean_object* x_376; uint8_t x_377; 
lean_dec(x_84);
x_376 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_377 = lean_nat_dec_eq(x_376, x_106);
if (x_377 == 1)
{
lean_object* x_378; 
lean_dec(x_376);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_2);
x_378 = lean_apply_2(x_85, lean_box(0), lean_box(0));
return x_378;
}
else
{
lean_object* x_379; uint8_t x_380; 
lean_dec(x_85);
x_379 = lean_nat_sub(x_376, x_140);
lean_dec(x_376);
x_380 = lean_nat_dec_eq(x_379, x_106);
if (x_380 == 1)
{
lean_object* x_381; 
lean_dec(x_379);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_2);
x_381 = lean_apply_2(x_86, lean_box(0), lean_box(0));
return x_381;
}
else
{
lean_object* x_382; uint8_t x_383; 
lean_dec(x_86);
x_382 = lean_nat_sub(x_379, x_140);
lean_dec(x_379);
x_383 = lean_nat_dec_eq(x_382, x_106);
if (x_383 == 1)
{
lean_object* x_384; 
lean_dec(x_382);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_2);
x_384 = lean_apply_2(x_87, lean_box(0), lean_box(0));
return x_384;
}
else
{
lean_object* x_385; uint8_t x_386; 
lean_dec(x_87);
x_385 = lean_nat_sub(x_382, x_140);
lean_dec(x_382);
x_386 = lean_nat_dec_eq(x_385, x_106);
if (x_386 == 1)
{
lean_object* x_387; 
lean_dec(x_385);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_2);
x_387 = lean_apply_2(x_88, lean_box(0), lean_box(0));
return x_387;
}
else
{
lean_object* x_388; uint8_t x_389; 
lean_dec(x_88);
x_388 = lean_nat_sub(x_385, x_140);
lean_dec(x_385);
x_389 = lean_nat_dec_eq(x_388, x_106);
if (x_389 == 1)
{
lean_object* x_390; 
lean_dec(x_388);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_2);
x_390 = lean_apply_2(x_89, lean_box(0), lean_box(0));
return x_390;
}
else
{
lean_object* x_391; uint8_t x_392; 
lean_dec(x_89);
x_391 = lean_nat_sub(x_388, x_140);
lean_dec(x_388);
x_392 = lean_nat_dec_eq(x_391, x_106);
if (x_392 == 1)
{
lean_object* x_393; 
lean_dec(x_391);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_2);
x_393 = lean_apply_2(x_90, lean_box(0), lean_box(0));
return x_393;
}
else
{
lean_object* x_394; uint8_t x_395; 
lean_dec(x_90);
x_394 = lean_nat_sub(x_391, x_140);
lean_dec(x_391);
x_395 = lean_nat_dec_eq(x_394, x_106);
if (x_395 == 1)
{
lean_object* x_396; 
lean_dec(x_394);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_2);
x_396 = lean_apply_2(x_91, lean_box(0), lean_box(0));
return x_396;
}
else
{
lean_object* x_397; uint8_t x_398; 
lean_dec(x_91);
x_397 = lean_nat_sub(x_394, x_140);
lean_dec(x_394);
x_398 = lean_nat_dec_eq(x_397, x_106);
if (x_398 == 1)
{
lean_object* x_399; 
lean_dec(x_397);
lean_dec(x_105);
lean_dec(x_93);
lean_dec(x_2);
x_399 = lean_apply_2(x_92, lean_box(0), lean_box(0));
return x_399;
}
else
{
lean_object* x_400; uint8_t x_401; 
lean_dec(x_92);
x_400 = lean_nat_sub(x_397, x_140);
lean_dec(x_397);
x_401 = lean_nat_dec_eq(x_400, x_106);
if (x_401 == 1)
{
lean_object* x_402; 
lean_dec(x_400);
lean_dec(x_105);
lean_dec(x_2);
x_402 = lean_apply_2(x_93, lean_box(0), lean_box(0));
return x_402;
}
else
{
lean_object* x_403; lean_object* x_404; 
lean_dec(x_93);
x_403 = lean_nat_sub(x_400, x_140);
lean_dec(x_400);
x_404 = lean_apply_4(x_105, x_2, x_403, lean_box(0), lean_box(0));
return x_404;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_405; uint8_t x_406; 
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
x_405 = lean_nat_sub(x_372, x_140);
lean_dec(x_372);
x_406 = lean_nat_dec_eq(x_405, x_106);
if (x_406 == 1)
{
uint8_t x_407; 
lean_dec(x_405);
lean_dec(x_104);
x_407 = lean_nat_dec_eq(x_3, x_106);
if (x_407 == 1)
{
lean_object* x_408; 
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_3);
lean_dec(x_2);
x_408 = lean_apply_2(x_94, lean_box(0), lean_box(0));
return x_408;
}
else
{
lean_object* x_409; uint8_t x_410; 
lean_dec(x_94);
x_409 = lean_nat_sub(x_3, x_140);
lean_dec(x_3);
x_410 = lean_nat_dec_eq(x_409, x_106);
if (x_410 == 1)
{
lean_object* x_411; 
lean_dec(x_409);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_2);
x_411 = lean_apply_2(x_95, lean_box(0), lean_box(0));
return x_411;
}
else
{
lean_object* x_412; uint8_t x_413; 
lean_dec(x_95);
x_412 = lean_nat_sub(x_409, x_140);
lean_dec(x_409);
x_413 = lean_nat_dec_eq(x_412, x_106);
if (x_413 == 1)
{
lean_object* x_414; 
lean_dec(x_412);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_2);
x_414 = lean_apply_2(x_96, lean_box(0), lean_box(0));
return x_414;
}
else
{
lean_object* x_415; uint8_t x_416; 
lean_dec(x_96);
x_415 = lean_nat_sub(x_412, x_140);
lean_dec(x_412);
x_416 = lean_nat_dec_eq(x_415, x_106);
if (x_416 == 1)
{
lean_object* x_417; 
lean_dec(x_415);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_2);
x_417 = lean_apply_2(x_97, lean_box(0), lean_box(0));
return x_417;
}
else
{
lean_object* x_418; uint8_t x_419; 
lean_dec(x_97);
x_418 = lean_nat_sub(x_415, x_140);
lean_dec(x_415);
x_419 = lean_nat_dec_eq(x_418, x_106);
if (x_419 == 1)
{
lean_object* x_420; 
lean_dec(x_418);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_2);
x_420 = lean_apply_2(x_98, lean_box(0), lean_box(0));
return x_420;
}
else
{
lean_object* x_421; uint8_t x_422; 
lean_dec(x_98);
x_421 = lean_nat_sub(x_418, x_140);
lean_dec(x_418);
x_422 = lean_nat_dec_eq(x_421, x_106);
if (x_422 == 1)
{
lean_object* x_423; 
lean_dec(x_421);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_2);
x_423 = lean_apply_2(x_99, lean_box(0), lean_box(0));
return x_423;
}
else
{
lean_object* x_424; uint8_t x_425; 
lean_dec(x_99);
x_424 = lean_nat_sub(x_421, x_140);
lean_dec(x_421);
x_425 = lean_nat_dec_eq(x_424, x_106);
if (x_425 == 1)
{
lean_object* x_426; 
lean_dec(x_424);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_2);
x_426 = lean_apply_2(x_100, lean_box(0), lean_box(0));
return x_426;
}
else
{
lean_object* x_427; uint8_t x_428; 
lean_dec(x_100);
x_427 = lean_nat_sub(x_424, x_140);
lean_dec(x_424);
x_428 = lean_nat_dec_eq(x_427, x_106);
if (x_428 == 1)
{
lean_object* x_429; 
lean_dec(x_427);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_2);
x_429 = lean_apply_2(x_101, lean_box(0), lean_box(0));
return x_429;
}
else
{
lean_object* x_430; uint8_t x_431; 
lean_dec(x_101);
x_430 = lean_nat_sub(x_427, x_140);
lean_dec(x_427);
x_431 = lean_nat_dec_eq(x_430, x_106);
if (x_431 == 1)
{
lean_object* x_432; 
lean_dec(x_430);
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_2);
x_432 = lean_apply_2(x_102, lean_box(0), lean_box(0));
return x_432;
}
else
{
lean_object* x_433; uint8_t x_434; 
lean_dec(x_102);
x_433 = lean_nat_sub(x_430, x_140);
lean_dec(x_430);
x_434 = lean_nat_dec_eq(x_433, x_106);
if (x_434 == 1)
{
lean_object* x_435; 
lean_dec(x_433);
lean_dec(x_105);
lean_dec(x_2);
x_435 = lean_apply_2(x_103, lean_box(0), lean_box(0));
return x_435;
}
else
{
lean_object* x_436; lean_object* x_437; 
lean_dec(x_103);
x_436 = lean_nat_sub(x_433, x_140);
lean_dec(x_433);
x_437 = lean_apply_4(x_105, x_2, x_436, lean_box(0), lean_box(0));
return x_437;
}
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_438; lean_object* x_439; 
lean_dec(x_105);
lean_dec(x_103);
lean_dec(x_102);
lean_dec(x_101);
lean_dec(x_100);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_96);
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_2);
x_438 = lean_nat_sub(x_405, x_140);
lean_dec(x_405);
x_439 = lean_apply_3(x_104, x_438, lean_box(0), x_3);
return x_439;
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
lean_object* x_28 = _args[27];
lean_object* x_29 = _args[28];
lean_object* x_30 = _args[29];
lean_object* x_31 = _args[30];
lean_object* x_32 = _args[31];
lean_object* x_33 = _args[32];
lean_object* x_34 = _args[33];
lean_object* x_35 = _args[34];
lean_object* x_36 = _args[35];
lean_object* x_37 = _args[36];
lean_object* x_38 = _args[37];
lean_object* x_39 = _args[38];
lean_object* x_40 = _args[39];
lean_object* x_41 = _args[40];
lean_object* x_42 = _args[41];
lean_object* x_43 = _args[42];
lean_object* x_44 = _args[43];
lean_object* x_45 = _args[44];
lean_object* x_46 = _args[45];
lean_object* x_47 = _args[46];
lean_object* x_48 = _args[47];
lean_object* x_49 = _args[48];
lean_object* x_50 = _args[49];
lean_object* x_51 = _args[50];
lean_object* x_52 = _args[51];
lean_object* x_53 = _args[52];
lean_object* x_54 = _args[53];
lean_object* x_55 = _args[54];
lean_object* x_56 = _args[55];
lean_object* x_57 = _args[56];
lean_object* x_58 = _args[57];
lean_object* x_59 = _args[58];
lean_object* x_60 = _args[59];
lean_object* x_61 = _args[60];
lean_object* x_62 = _args[61];
lean_object* x_63 = _args[62];
lean_object* x_64 = _args[63];
lean_object* x_65 = _args[64];
lean_object* x_66 = _args[65];
lean_object* x_67 = _args[66];
lean_object* x_68 = _args[67];
lean_object* x_69 = _args[68];
lean_object* x_70 = _args[69];
lean_object* x_71 = _args[70];
lean_object* x_72 = _args[71];
lean_object* x_73 = _args[72];
lean_object* x_74 = _args[73];
lean_object* x_75 = _args[74];
lean_object* x_76 = _args[75];
lean_object* x_77 = _args[76];
lean_object* x_78 = _args[77];
lean_object* x_79 = _args[78];
lean_object* x_80 = _args[79];
lean_object* x_81 = _args[80];
lean_object* x_82 = _args[81];
lean_object* x_83 = _args[82];
lean_object* x_84 = _args[83];
lean_object* x_85 = _args[84];
lean_object* x_86 = _args[85];
lean_object* x_87 = _args[86];
lean_object* x_88 = _args[87];
lean_object* x_89 = _args[88];
lean_object* x_90 = _args[89];
lean_object* x_91 = _args[90];
lean_object* x_92 = _args[91];
lean_object* x_93 = _args[92];
lean_object* x_94 = _args[93];
lean_object* x_95 = _args[94];
lean_object* x_96 = _args[95];
lean_object* x_97 = _args[96];
lean_object* x_98 = _args[97];
lean_object* x_99 = _args[98];
lean_object* x_100 = _args[99];
lean_object* x_101 = _args[100];
lean_object* x_102 = _args[101];
lean_object* x_103 = _args[102];
lean_object* x_104 = _args[103];
lean_object* x_105 = _args[104];
_start:
{
lean_object* x_106; 
x_106 = lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addTable_match__1_splitter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30, x_31, x_32, x_33, x_34, x_35, x_36, x_37, x_38, x_39, x_40, x_41, x_42, x_43, x_44, x_45, x_46, x_47, x_48, x_49, x_50, x_51, x_52, x_53, x_54, x_55, x_56, x_57, x_58, x_59, x_60, x_61, x_62, x_63, x_64, x_65, x_66, x_67, x_68, x_69, x_70, x_71, x_72, x_73, x_74, x_75, x_76, x_77, x_78, x_79, x_80, x_81, x_82, x_83, x_84, x_85, x_86, x_87, x_88, x_89, x_90, x_91, x_92, x_93, x_94, x_95, x_96, x_97, x_98, x_99, x_100, x_101, x_102, x_103, x_104, x_105);
return x_106;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_verticalAdd(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lp_Arithmetic__Formalization_addDigits(x_9, x_7, x_3);
lean_dec(x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec_ref(x_10);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
x_14 = lp_Arithmetic__Formalization_verticalAdd(x_1, x_8, x_13);
lean_ctor_set(x_2, 1, x_14);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_2);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lp_Arithmetic__Formalization_addDigits(x_17, x_15, x_3);
lean_dec(x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec_ref(x_18);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
x_22 = lp_Arithmetic__Formalization_verticalAdd(x_1, x_16, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lp_Arithmetic__Formalization_addDigits(x_25, x_27, x_3);
lean_dec(x_25);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec_ref(x_28);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_32 = lp_Arithmetic__Formalization_verticalAdd(x_26, x_2, x_31);
lean_ctor_set(x_1, 1, x_32);
lean_ctor_set(x_1, 0, x_29);
return x_1;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_1, 0);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_1);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lp_Arithmetic__Formalization_addDigits(x_33, x_35, x_3);
lean_dec(x_33);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec_ref(x_36);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
x_40 = lp_Arithmetic__Formalization_verticalAdd(x_34, x_2, x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_37);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
lean_dec_ref(x_1);
x_44 = !lean_is_exclusive(x_2);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; 
x_45 = lean_ctor_get(x_2, 0);
x_46 = lean_ctor_get(x_2, 1);
x_47 = lp_Arithmetic__Formalization_addDigits(x_42, x_45, x_3);
lean_dec(x_45);
lean_dec(x_42);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec_ref(x_47);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
x_51 = lp_Arithmetic__Formalization_verticalAdd(x_43, x_46, x_50);
lean_ctor_set(x_2, 1, x_51);
lean_ctor_set(x_2, 0, x_48);
return x_2;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; 
x_52 = lean_ctor_get(x_2, 0);
x_53 = lean_ctor_get(x_2, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_2);
x_54 = lp_Arithmetic__Formalization_addDigits(x_42, x_52, x_3);
lean_dec(x_52);
lean_dec(x_42);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec_ref(x_54);
x_57 = lean_unbox(x_56);
lean_dec(x_56);
x_58 = lp_Arithmetic__Formalization_verticalAdd(x_43, x_53, x_57);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_55);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization_verticalAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
x_5 = lp_Arithmetic__Formalization_verticalAdd(x_1, x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_6);
if (x_3 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_5, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
lean_dec(x_4);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec_ref(x_2);
x_15 = lean_box(x_3);
x_16 = lean_apply_3(x_6, x_13, x_14, x_15);
return x_16;
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_8);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec_ref(x_1);
x_19 = lean_box(x_3);
x_20 = lean_apply_3(x_7, x_17, x_18, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_7);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec_ref(x_1);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec_ref(x_2);
x_25 = lean_box(x_3);
x_26 = lean_apply_5(x_8, x_21, x_22, x_23, x_24, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
x_10 = lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___redArg(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_9);
lean_dec(x_8);
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_7);
if (x_4 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_5, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_6, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_dec_ref(x_3);
x_16 = lean_box(x_4);
x_17 = lean_apply_3(x_7, x_14, x_15, x_16);
return x_17;
}
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_9);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec_ref(x_2);
x_20 = lean_box(x_4);
x_21 = lean_apply_3(x_8, x_18, x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_8);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec_ref(x_2);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 1);
lean_inc(x_25);
lean_dec_ref(x_3);
x_26 = lean_box(x_4);
x_27 = lean_apply_5(x_9, x_22, x_23, x_24, x_25, x_26);
return x_27;
}
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
x_11 = lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__verticalAdd_match__1_splitter(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addDigits_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__addDigits_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec_ref(x_2);
x_6 = lean_apply_2(x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__toNat_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__toNat_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec_ref(x_2);
x_9 = lean_apply_2(x_4, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___redArg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
x_5 = lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___redArg(x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_2 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = lp_Arithmetic__Formalization___private_Arithmetic__Formalization_Addition_0__carryVal_match__1_splitter(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic(uint8_t builtin);
lean_object* initialize_Arithmetic__Formalization_Arithmetic__Formalization_Foundations(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Arithmetic__Formalization_Arithmetic__Formalization_Addition(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Arithmetic__Formalization_Arithmetic__Formalization_Foundations(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
