
//Q99 (Strings)
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>

int main() {
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // Print month name using if-else (simple way)
    printf("%02d-", dd);  // print day with 2 digits

    if (mm == 1) printf("Jan-");
    else if (mm == 2) printf("Feb-");
    else if (mm == 3) printf("Mar-");
    else if (mm == 4) printf("Apr-");
    else if (mm == 5) printf("May-");
    else if (mm == 6) printf("Jun-");
    else if (mm == 7) printf("Jul-");
    else if (mm == 8) printf("Aug-");
    else if (mm == 9) printf("Sep-");
    else if (mm == 10) printf("Oct-");
    else if (mm == 11) printf("Nov-");
    else if (mm == 12) printf("Dec-");
    else printf("InvalidMonth-");

    printf("%d", yyyy);

    return 0;
}
