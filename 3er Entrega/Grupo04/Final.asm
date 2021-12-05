include macros2.asm
include number.asm
.MODEL LARGE	; Modelo de Memoria
.386	        ; Tipo de Procesador
.STACK 200h		; Bytes en el Stack

.DATA 

_100                          dd                            100                           ;Constante  Const_Int
_111                          dd                            111                           ;Constante  Const_Int
_2                            dd                            2                             ;Constante  Const_Int
_20                           dd                            20                            ;Constante  Const_Int
_3                            dd                            3                             ;Constante  Const_Int
_30                           dd                            30                            ;Constante  Const_Int
_7                            dd                            7                             ;Constante  Const_Int
_Entrega                      db                            "Entrega" ,'$', 7 dup(?)
a                             dd                            ?                             ;Variable Int
c                             dd                            ?                             ;Variable Int
maximo                        dd                            ?                             ;Variable Int
minimo                        dd                            ?                             ;Variable Int
var                           dd                            ?                             ;Variable Int
var1                          dd                            ?                             ;Variable Int
@Aux1                         dd                            ?                             ;Variable Float
@Aux2                         dd                            ?                             ;Variable Float
@aux                          dd                            ?                             ;Variable Float
@emax                         dd                            ?                             ;Variable Float
@emin                         dd                            ?                             ;Variable Float
@max                          dd                            ?                             ;Variable Float
@min                          dd                            ?                             ;Variable Float


.CODE

start:
mov AX,@DATA    ; Se inicializa el segmento de datos
mov DS,AX
mov es,ax ;

FLD _20
FSTP a
FFREE
FLD _2
FSTP c
FFREE
FLD a
FLD _7
FMUL 
FSTP @Aux1
FFREE
FLD @Aux1
FSTP a
FFREE
FLD a
FCOMP c
FSTSW ax
SAHF
JNA saltoelse1
FLD _30
FSTP var
FFREE
saltoelse1:
FFREE
FLD a
FLD _3
FMUL 
FSTP @Aux2
FFREE
FLD a
FCOMP @Aux2
FSTSW ax
SAHF
JNBE saltoelse2
FLD a
FSTP var1
FFREE
JMP fin_if1
saltoelse2:
FLD a
FSTP var1
FFREE
fin_if1:
displayString _Entrega
FLD var
FSTP @emax
FFREE
FLD _100
FSTP @max
FFREE
FLD _111
FSTP @aux
FFREE
FLD @aux
FCOMP @max
FSTSW ax
SAHF
JNA saltoelse5
FLD @aux
FSTP @max
FFREE
saltoelse5:
FFREE
FLD var1
FSTP @aux
FFREE
FLD @aux
FCOMP @max
FSTSW ax
SAHF
JNA saltoelse6
FLD @aux
FSTP @max
FFREE
saltoelse6:
FFREE
FLD @emax
FCOMP @max
FSTSW ax
SAHF
JNE saltoelse7
FLD var
FSTP maximo
FFREE
saltoelse7:
FFREE
FLD var
FSTP @emin
FFREE
FLD _100
FSTP @min
FFREE
FLD _111
FSTP @aux
FFREE
FLD @aux
FCOMP @min
FSTSW ax
SAHF
JNB saltoelse8
FLD @aux
FSTP @min
FFREE
saltoelse8:
FFREE
FLD var1
FSTP @aux
FFREE
FLD @aux
FCOMP @min
FSTSW ax
SAHF
JNB saltoelse9
FLD @aux
FSTP @min
FFREE
saltoelse9:
FFREE
FLD @emin
FCOMP @min
FSTSW ax
SAHF
JNE saltoelse10
FLD var
FSTP minimo
FFREE
saltoelse10:
FFREE



mov ax,4c00h
int 21h

END start;