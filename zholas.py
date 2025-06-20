print("Enter your name:")
USER-NAME = input()
print("Enter your age:")
AGE = input()
print("Enter your country:")
COUNTRY = input()
if (AGE == 18):
    MESSAGE = "You are a minor."
    if (COUNTRY == "USA"):
        print("You need parental consent.")
    else:
        print("Consent laws vary by country.")
else:
    MESSAGE = "You are an adult."
print(MESSAGE)
print("End of program.")
