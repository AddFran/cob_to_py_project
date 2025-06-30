# IDENTIFICATION DIVISION
# PROGRAM-ID: 01_HELLO_WORLD
# PROCEDURE DIVISION
print("Enter your name:")
USERNAME = input()
NUMBER = input()
NUMBER2 = input()
print("Enter your age:")
AGE = input()
print("Enter your country:")
COUNTRY = input()
if (AGE == 18):
    MESSAGE = "You are a minor."
    if (COUNTRY < 14):
        print("You need parental consent.")
    else:
        print("Consent laws vary by country.")
else:
    MESSAGE = "You are an adult."
print(MESSAGE)
AGE += 12
AGE += COUNTRY
AGE -= 10
AGE -= USERNAME
print(AGE)
AGE *= 12
COUNTRY *= COUNTRY
AGE /= 2
COUNTRY /= AGE
AGE /= 2
AGE /= COUNTRY
AGE = 12 + 12
AGE = NUMBER + 12
AGE = 12 + NUMBER
AGE = NUMBER2 + NUMBER
RESULT = 10 - 5
TOTAL = 20 - NUMBER
DIFFERENCE = VARIABLE - 15
OUTPUT = NUM2 - NUM1
RESULT = 5 * 2
PRODUCT = 10 * NUMBER
OUTPUT = VARIABLE * 4
RESULTADO = FACTOR2 * FACTOR1
RESULT = 10 / 2
QUOTIENT = 100 / NUMBER
OUTPUT = VALUE / 5
RESULTADO = DENOM / NUM
# STOP RUN
