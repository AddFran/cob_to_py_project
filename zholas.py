print("Enter your name:")
USERNAME = input()
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
print("End of program.")
