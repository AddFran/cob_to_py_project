       IDENTIFICATION DIVISION.
       PROGRAM-ID. PRUEBA-TRADUCCION.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 DATOS.
           02 AGE       PIC 9 VALUE 19.
           02 NOMBRE    PIC A(30).
           02 APELLIDO  PIC A(30).
           02 NUMBER    PIC S9(5) VALUE 20.
           02 NUM1      PIC 9(10) VALUE 12.
           02 NUM2      PIC 9(10) VALUE 14.
           02 VARIABLE  PIC 9(10) VALUE 14.
           02 NUMBER2   PIC 9(10)  VALUE 12.
           02 CHAR      PIC X(10)  VALUE "Hola mundo".
           02 IDT       PIC S9(10) VALUE 1.
           02 FACTOR1   PIC S9(10) VALUE 1.
           02 FACTOR2   PIC S9(10) VALUE 1.
           02 VARI-PR   PIC A(12) VALUE "SAD".
       LOCAL-STORAGE SECTION.
           77 APELLIDO-USUARIO PIC A(30).
       LINKAGE SECTION.

       PROCEDURE DIVISION.
           DISPLay NUM2.
           display 'Ingrese su nombre: '.
           ACCEPT NOMBRE.
           DISPLAY "Ingrese su edad: ".
           ACCEPT AGE.
           DISPLAY "Ingrese su apellido: ".
           ACCEPT APELLIDO.
           DISPLAY VARI-PR.

           ADD 12 TO 12 GIVING AGE
           ADD 12 TO NUMBER GIVING AGE
           ADD NUMBER TO 12 GIVING AGE 
           ADD NUMBER TO NUMBER2 GIVING AGE

           SUBTRACT 5 FROM 10 GIVING RESULT
           SUBTRACT NUMBER FROM 20 GIVING TOTAL
           SUBTRACT 15 FROM VARIABLE GIVING DIFFERENCE
           SUBTRACT NUM1 FROM NUM2 GIVING OUTPUT

           MULTIPLY 2 BY 5 GIVING RESULT
           MULTIPLY NUMBER BY 10 GIVING PRODUCT
           MULTIPLY 4 BY VARIABLE GIVING OUTPUT
           MULTIPLY FACTOR1 BY FACTOR2 GIVING RESULTADO

           DIVIDE 2 INTO 10 GIVING RESULT
           DIVIDE NUMBER INTO 100 GIVING QUOTIENT

           MOVE 12 TO NUM2

           IF NOMBRE = "ADRIANO"
               DISPLAY "YO TE CONOZCO"
               IF NOMBRE = "ADRIANO"
                   DISPLAY "YO TE CONOZCO DE NUEVO"
                   IF NUM1 = 30
                       DISPLAY "INGENIERIA DE SISTEMAS"
                       DISPLAY "COMPILADORES"
                   END-IF
               ELSE
                   DISPLAY "HOLA MUNDO"
               END-IF
               IF NUM1 = 12
                   DISPLAY "NUM1 VALE 12"
                   DISPLAY "NUM1 ES MAYOR A 10"
               END-IF
           ELSE
               DISPLAY "QUIEN ERES"
           END-IF.

           IF NOMBRE = "FRAN"
               DISPLAY "KAJSLDKA"
               DISPLAY "KSAJLDAJKSLDJAL" 
               IF NOMBRE = "KAJSDLKASJ"
                   DISPLAY NOMBRE 
               END-IF
               IF NOMBRE = "SADASDA"
                   DISPLAY "SALKDJSALDJKLASADAS"
                   DISPLAY "SKLADJLSDKJALDJ"
               ELSE
                   DISPLAY "KSAJLDSAJKL"
                   DISPLAY "SKAJDLSAKJDLAJLKSAJLD"          
               END-IF
           END-IF.

           DISPLAY "JELOU"

           PERFORM 10 TIMES
               DISPLAY "HOLA MUNDO"
               DISPLAY "HOLA MUNDO OTRA VEZ"
               PERFORM 5 TIMES
                   ADD 12 TO NUM2 GIVING NUM
                   DISPLAY "COMPILADORES"
                   DISPLAY NUM2
               END-PERFORM.
           END-PERFORM. 

           PERFORM NUM TIMES
               DISPLAY NUM
               DISPLAY "THIS IS A NUMERO"
           END-PERFORM

           PERFORM UNTIL NUM2 < 12
               DISPLAY NUM2
               DISPLAY "MENSAHE SKAJDÑA" 
               IF NUM2 = 14
                   DISPLAY "SHUADH"
                   DISPLAY NUM2
                   PERFORM NUM2 TIMES
                       DISPLAY NUM
                       DISPLAY "SDADSA"
                       ACCEPT NUM2
                   END-PERFORM.
               END-IF.
           END-PERFORM. 

           PERFORM VARYING IDT FROM 0 BY 1 UNTIL IDT > 9
               DISPLAY "Valor de IDT: "
               DISPLAY IDT
           END-PERFORM. 

           STOP RUN.
       END PROGRAM PRUEBA-TRADUCCION.