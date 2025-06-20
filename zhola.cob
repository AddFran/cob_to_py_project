DISPLAY "Enter your name:"
ACCEPT USER-NAME
DISPLAY "Enter your age:"
ACCEPT AGE
DISPLAY "Enter your country:"
ACCEPT COUNTRY
IF AGE = 18
    MOVE "You are a minor." TO MESSAGE
    IF COUNTRY = "USA"
        DISPLAY "You need parental consent."
    ELSE
        DISPLAY "Consent laws vary by country."
    END-IF
ELSE
    MOVE "You are an adult." TO MESSAGE
END-IF
DISPLAY MESSAGE
DISPLAY "End of program."