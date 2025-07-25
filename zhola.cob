       IDENTIFICATION DIVISION.
       PROGRAM-ID. PRUEBA-TRADUCCION.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 DATOS.
           02 AGE        PIC 9      VALUE 1.
           02 NOMBRE     PIC A(30).
           02 APELLIDO   PIC A(30).
           02 NUMBER1    PIC S9(5)  VALUE 20.
           02 NUM        PIC S9(12) VALUE 13.
           02 NUM1       PIC 9(10)  VALUE 12.
           02 NUM2       PIC 9(10)  VALUE 14.
           02 VARIABLE1  PIC 9(10)  VALUE 14.
           02 NUMBER2    PIC 9(10)  VALUE 12.
           02 CHAR       PIC X(10)  VALUE "Hola mundo".
           02 IDT        PIC S9(10) VALUE 1.
           02 FACTOR1    PIC S9(10) VALUE 1.
           02 FACTOR2    PIC S9(10) VALUE 1.
           02 VARI-PR    PIC A(12)  VALUE "SAD".
           02 AGE2       PIC A.
           02 RESULTADO  PIC 9(10)  VALUE 0.
           02 RESULTADO2 PIC 9(10)  VALUE 0.
           02 TOTAL      PIC 99.
           02 PRODUCTO   PIC 99.
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
           ADD 12 TO NUMBER1 GIVING AGE
           ADD NUMBER1 TO 12 GIVING AGE
           ADD NUMBER1 TO NUMBER2 GIVING AGE

           SUBTRACT 5 FROM 10 GIVING RESULTADO
           SUBTRACT NUMBER1 FROM 20 GIVING TOTAL
           SUBTRACT 15 FROM VARIABLE1 GIVING RESULTADO2
           SUBTRACT NUM1 FROM NUM2 GIVING TOTAL

           MULTIPLY 2 BY 5 GIVING RESULTADO
           MULTIPLY NUMBER1 BY 10 GIVING PRODUCTO
           MULTIPLY 4 BY VARIABLE1 GIVING TOTAL
           MULTIPLY FACTOR1 BY FACTOR2 GIVING RESULTADO

           DIVIDE 2 INTO 10 GIVING RESULTADO
           DIVIDE NUMBER1 INTO 100 GIVING TOTAL

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

           IF NOMBRE = "FRANCESCO" THEN
               DISPLAY "HOLA FRANCESCO"
               DISPLAY "HOLA FRANCESCO"
               DISPLAY "HOLA FRANCESCO"
           ELSE IF NOMBRE = "PAUL"
               DISPLAY "HOLA PAUL"
               DISPLAY "HOLA PAUL"
               DISPLAY "HOLA PAUL"
           ELSE IF NOMBRE = "SADDSA"
               DISPLAY "DSADSADAS"
           ELSE IF NOMBRE = "SADDSA"
               DISPLAY "DSADS"
           ELSE IF NOMBRE = "zSADDSA"
               DISPLAY "zzzzzzzzzzzADAS"
           ELSE
               DISPLAY "HOLA DESCONOCIDO"
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
               END-PERFORM
           END-PERFORM.

           PERFORM NUM TIMES THEN
               DISPLAY NUM
               DISPLAY "THIS IS A NUMERO"
           END-PERFORM

           PERFORM UNTIL NUM2 < 12 THEN
               DISPLAY NUM2
               DISPLAY "MENSAHE SKAJDÑA"
               IF NUM2 = 14
                   DISPLAY "SHUADH"
                   DISPLAY NUM2
                   PERFORM NUM2 TIMES
                       DISPLAY NUM
                       DISPLAY "SDADSA"
                       ACCEPT NUM2
                   END-PERFORM
               END-IF
           END-PERFORM.

           PERFORM VARYING IDT FROM 0 BY 1 UNTIL IDT > 9 THEN
               DISPLAY "Valor de IDT: "
               DISPLAY IDT
           END-PERFORM.

           COMPUTE RESULTADO = (12 + 14) * 2 - NUM2 / 3
           COMPUTE RESULTADO = 12 + 14.

           IF (RESULTADO > 20 AND IDT = 10) OR NUM2 = 22
               DISPLAY "PRUEBA"
               DISPLAY "PRUEBA2"
               DISPLAY "PRUEBA3"
           END-IF

           STOP RUN.
       END PROGRAM PRUEBA-TRADUCCION.
