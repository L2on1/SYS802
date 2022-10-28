#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "hvt4qmismz" , 17 , 112 }
, { "struct_ff17RBsHiE1KY9IM9WM50C" , 18 , 1440008 } , {
"struct_Nw7lzYsm91LvJphZ8uWoND" , 19 , 2880016 } , { "uint64_T" , 20 , 8 } ,
{ "int64_T" , 21 , 8 } , { "char_T" , 22 , 8 } , { "uchar_T" , 23 , 8 } , {
"time_T" , 24 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) , sizeof ( hvt4qmismz )
, sizeof ( struct_ff17RBsHiE1KY9IM9WM50C ) , sizeof (
struct_Nw7lzYsm91LvJphZ8uWoND ) , sizeof ( uint64_T ) , sizeof ( int64_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "hvt4qmismz" ,
"struct_ff17RBsHiE1KY9IM9WM50C" , "struct_Nw7lzYsm91LvJphZ8uWoND" ,
"uint64_T" , "int64_T" , "char_T" , "uchar_T" , "time_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . kusgqhxytc
[ 0 ] ) , 0 , 0 , 15 } , { ( char_T * ) ( & rtDW . mo5w51i13m ) , 17 , 0 , 1
} , { ( char_T * ) ( & rtDW . a1zmwvov3f [ 0 ] ) , 0 , 0 , 3 } , { ( char_T *
) ( & rtDW . fe5uc1bie0 . LoggedData [ 0 ] ) , 11 , 0 , 19 } , { ( char_T * )
( & rtDW . jexlkyqrpd . PrevIndex ) , 10 , 0 , 2 } , { ( char_T * ) ( & rtDW
. p0fcrc55ex ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable rtBTransTable
= { 6U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = {
{ ( char_T * ) ( & rtP . L ) , 0 , 0 , 720017 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
