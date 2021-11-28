flex Lexico.l
bison Sintactico.y
bison -dyv Sintactico.y
gcc lex.yy.c y.tab.c -o Grupo04
Grupo04  prueba.txt