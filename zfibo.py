# IDENTIFICATION DIVISION
# PROGRAM-ID: FIBONACCI
# DATA DIVISION
# WORKING-STORAGE SECTION
LIMITE = 20
VAR_A = 0
VAR_B = 1
VAR_C = 0
VAR_I = 1
# PROCEDURE DIVISION
print("Serie de Fibonacci (primeros 20 términos):")
print(VAR_A)
print(VAR_B)
LIMITE -= 2
while not VAR_I > LIMITE:
    VAR_C = VAR_B + VAR_A
    print(VAR_C)
    VAR_A = VAR_B
    VAR_B = VAR_C
    VAR_I += 1
# STOP RUN
