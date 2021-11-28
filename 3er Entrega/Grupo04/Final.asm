include macros2.asm
include number.asm
.MODEL LARGE	; Modelo de Memoria
.386	        ; Tipo de Procesador
.STACK 200h		; Bytes en el Stack

.DATA 

_1                            dd                            1                             ;Constante  Const_Int
_12                           dd                            12                            ;Constante  Const_Int
_2                            dd                            2                             ;Constante  Const_Int
_30                           dd                            30                            ;Constante  Const_Int
_7                            dd                            7                             ;Constante  Const_Int
_Entrega final                dd                            Entrega final                 ;Constante  Const_String
cad                           dd                            ?                             ;Variable String
var                           dd                            ?                             ;Variable Int
var1                          dd                            ?                             ;Variable Int
var2                          dd                            ?                             ;Variable Int
@Aux1                         dd                            ?                             ;Variable Float
@Aux2                         dd                            ?                             ;Variable Float
@Aux3                         dd                            ?                             ;Variable Float
@Aux4                         dd                            ?                             ;Variable Float


.CODE

mov AX,@DATA    ; Se inicializa el segmento de datos
mov DS,AX
mov es,ax ;

FLD var1
FSTP var
FFREE
FLD var3
FLD 7
FMUL 
FSTP @Aux1
FFREE
FLD @Aux1
FSTP var
FFREE
FLD id2
FLD cte1
FMUL 
FSTP @Aux2
FFREE
FLD @Aux2
FLD cte2
FADD 
FSTP @Aux3
FFREE
FLD @Aux3
FSTP id1
FFREE
FLD var1
FCOMP var2
FSTSW ax
SAHF
JNA saltoelse1
FLD 30
FSTP var2
FFREE
saltoelse1
FFREE
FLD var2
FLD 2
FMUL 
FSTP @Aux4
FFREE
FLD var1
FCOMP @Aux4
FSTSW ax
SAHF
JNBE saltoelse2
FLD a
FSTP var4
FFREE
JMP fin_if1
saltoelse2
FLD var2
FSTP var4
FFREE
fin_if1
displayString Entrega final
displayString cad
FLD var
FSTP @emax
FFREE
FLD 1
FSTP @max
FFREE
FLD 12
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
saltoelse5
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
saltoelse6
FFREE
FLD @emax
FCOMP @max
FSTSW ax
SAHF
JNE saltoelse7
FLD var1
FSTP maximo
FFREE
saltoelse7
FFREE
FLD var
FSTP @emin
FFREE
FLD 1
FSTP @min
FFREE
FLD 12
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
saltoelse8
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
saltoelse9
FFREE
FLD @emin
FCOMP @min
FSTSW ax
SAHF
JNE saltoelse10
FLD var1
FSTP minimo
FFREE
saltoelse10
FFREE



mov ax,4c00h	; Se indica fin de ejecucion
int 21h

End