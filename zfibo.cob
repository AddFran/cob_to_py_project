       IDENTIFICATION DIVISION.
       PROGRAM-ID. FIBONACCI.

       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01  LIMITE         PIC 99    VALUE 20.
       01  VAR-A          PIC 9(5)  VALUE 0.
       01  VAR-B          PIC 9(5)  VALUE 1.
       01  VAR-C          PIC 9(5)  VALUE 0.
       01  VAR-I          PIC 99    VALUE 1.

       PROCEDURE DIVISION.
       DISPLAY "Serie de Fibonacci (primeros 20 términos):".
       DISPLAY VAR-A
       DISPLAY VAR-B
       SUBTRACT 2 FROM LIMITE

       PERFORM UNTIL VAR-I > LIMITE
           ADD VAR-A TO VAR-B GIVING VAR-C
           DISPLAY VAR-C
           MOVE VAR-B TO VAR-A
           MOVE VAR-C TO VAR-B
           ADD 1 TO VAR-I
       END-PERFORM

       STOP RUN.
