       IDENTIFICATION DIVISION.
       PROGRAM-ID. PRUEBA-TRADUCCION.

       ENVIRONMENT DIVISION.

       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 DATOS.
           02 NOMBRE PIC A(30).
           02 APELLIDO PIC A(30).
           02 NUM PIC 9(10).
           02 NUM2 PIC 9(10) VALUE 12.
           02 CHAR PIC A(10) VALUE "habla caus".
           02 IDT PIC 9(10) VALUE 1.
       LOCAL-STORAGE SECTION.
           77 APELLIDO-USUARIO PIC A(30).
       LINKAGE SECTION.

       PROCEDURE DIVISION.
           DISPLay NUM2.
           display 'Ingrese su nombre: '.
           ACCEPT NOMBRE.
           DISPLAY "Ingrese su apellido: ".
           ACCEPT APELLIDO.
           ADD NUM2 TO 24 GIVING NUM.
           ADD NUM2 TO NUM
           IF NOMBRE = "ADRIANO"
               DISPLAY "YO TE CONOZCO"
               IF NOMBRE = "ADRIANO"
                   DISPLAY "YO TE CONOZCO DE NUEVO"
               ELSE
                   DISPLAY "GLAKLSFKDLASKDLAK"
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
           DISPLAY "JALOU"

           PERFORM 10 TIMES
               DISPLAY "HOLA MUNDO"
               DISPLAY "JSJSJSJSJ"
               PERFORM 5 TIMES
                   ADD 12 TO NUM2 GIVING NUM
                   DISPLAY "OSJADODSJAO"
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
