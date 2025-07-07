       IDENTIFICATION DIVISION.
       PROGRAM-ID. 01HOLA_MUNDO.

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
       LOCAL-STORAGE SECTION.
           77 APELLIDO-USUARIO PIC A(30).
       LINKAGE SECTION.

       PROCEDURE DIVISION.
           DISPLAY NUM2.
           DISPLAY "Ingrese su nombre: ".
           ACCEPT NOMBRE.
           DISPLAY "Ingrese su apellido: ".
           ACCEPT APELLIDO.
           ADD NUM2 TO 24 GIVING NUM.
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
           DISPLAY "JALOU"
       STOP RUN.
