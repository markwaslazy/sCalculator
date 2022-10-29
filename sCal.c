#include <stdio.h>
#include <string.h>


// minor functions used by submajor
// for arithmetic calculator
int sum();

int difference();

int product();

int quotient();

// for multiplicationtable
int multiply (int x, int y);

// submajor functions
int basicCalculator();

int basicMultiplicationTable();

int advancedMultiplicationTable();


// its dependency function should be declared above
int setMultiplicationTable();

int squareTable();

int squareRootTable();

int squareRootFinder();

int ageCalculator();

// major function
int advancedCalculator();


// function after every submajor function
int askMe();

int main() {

    /* This was initially a char type variable but when recalling this
    function, this variable can't get user input anymore, and I want to
    learn more about that matter. */

    int toolSet;

    printf("\n[Smart Calculator]\n");
    printf("v1.0\n");

    printf("Choose the tool you want to test\n");

    printf("1) Basic Arithmetic Calculator\n");
    printf("2) Advanced Calculation Tools\n");

    printf("Enter input: ");
    scanf("%d", &toolSet);

    switch(toolSet) {
        case 1:
            basicCalculator();
            break;
        case 2:
            advancedCalculator();
            // setMultiplicationTable();
            break;
    }
    
    return 0;
}


// arithmetic functions definitions
int sum() {
    int x, y;
    printf("Enter the first addends: ");
    scanf("%d", &x);
    printf("Enter the second addends: ");
    scanf("%d", &y);
    return x += y;
}

int difference() {
    int x, y;
    printf("Enter the minuend: ");
    scanf("%d", &x);
    printf("Enter the subtrahend: ");
    scanf("%d", &y);
    return x -= y;
}

int product() {
    int x, y;
    printf("Enter the multiplicand: ");
    scanf("%d", &x);
    printf("Enter the multiplier: ");
    scanf("%d", &y);
    return x *= y;
}

int quotient() {
    int x, y;
    printf("Enter the dividend: ");
    scanf("%d", &x);
    printf("Enter the divisor: ");
    scanf("%d", &y);
    return x /= y;
}


int basicCalculator() {

    char answer;
   
    char a[50], b[50], c[50], d[50];
    strcpy(a, "Addition");
    strcpy(b, "Subtraction");
    strcpy(c, "Multiplication");
    strcpy(d, "Division");

    int opSel;

    // the result of everything from functions
    int x;

    printf("\n\n[Arithmetic Calculator]\n\n");
    printf("Select the operation you want to use\n");

    printf("1] %-15s 3] %-15s\n", a, c);
    printf("2] %-15s 4] %-15s\n", b, d);

    printf("\nSelect an operation: ");
    scanf("%d", &opSel);

    switch (opSel) {
        case 1:
            printf("\n\nYou have just selected addition!\n");
            x = sum();
            /* I like how it calls out statements in the function first 
            and then returns that value to the corresponding variable */
            printf("\nThe sum is %d\n", x);
            break;
        case 2:
            printf("\n\nYou have just selected subtraction!\n");
            x = difference();
            printf("\nThe difference is %d\n", x);
            break;
        case 3:
            printf("\n\nYou have just selected multiplication!\n");
            x = product();
            printf("\nThe product is %d\n", x);
            break;
        case 4:
            printf("\n\nYou have just selected division!\n");
            x = quotient();
            printf("\nThe quotient is %d\n", x);
            break;
        default:
            printf("\n\nYou have entered an invalid input!\n");
    }

    askMe();

}


int multiply (int x, int y) {
    x *= y;
    return(x);
}


int basicMultiplicationTable() {
  
    int x, y;
    int xN, yN;
    y = 10;
    yN = 10;

    int a, b;
    a = 1;
    b = 1;

    printf("\n\n[Basic Multiplication Table]\n");
    printf("Range = {x = 10, y = 10}\n\n");

        for (x = 1; x <= y; x++) {
            for (xN = 1; xN <= yN; xN++) {
                printf("%d x %d = %d\n", a, b, multiply(a, b));
                b++;
                if (b > 10)
                b = 1;
            }
            a++;
            printf("\n");
        }

        askMe();

}


int advancedMultiplicationTable() {
    
    int x, y;
    int xN, yN;
    y = 10;
    yN = 10;

    int a, b;
    a = 1;
    b = 1;

    int xRange, yRange;

    printf("\n\n[Advanced Multiplication Table]\n");
    printf("x Range: ");
    scanf("%d", &xRange);
    printf("y Range: ");
    scanf("%d", &yRange);

    printf("\n");

        for (x = 1; x <= xRange; x++) {
            for (xN = 1; xN <= yRange; xN++) {
                printf("%d x %d = %d\n", a, b, multiply(a, b));
                b++;
                if (b > yRange)
                b = 1;
            }
            a++;
            printf("\n");
        }

        askMe();

}


int setMultiplicationTable() {

    /* I tried to create a char variable with the switch statement
    but seems like char type isn't supported outside of main() that's
    why I'll just use an integer for now. */

    int modeSel;

    printf("\n\n[This is a Multiplication Table Generator!]\n\n");
    printf("1] Basic\n");
    printf("2] Advanced\n");
    printf("\nSelect a mode: ");
    scanf("%d", &modeSel);

    switch (modeSel) {
        case 1:
            basicMultiplicationTable();
            break;
        case 2:
            advancedMultiplicationTable();
            break;
        default:
            printf("\n[Wrong input!]\n\n\n");

    }

}


int squareTable() {

    int x, y;

    int columns;

    printf("\n");
    printf("\n[Square Table Generator]\n\n");

    printf("Enter the amount of columns you want to generate: ");
    scanf("%d", &columns);

    printf("\n");

    for (x = 1; x <= columns; x++) {
        y = x * x;
        printf("The square of %d is %d\n", x, y);
    }

    printf("\n");

    askMe();

}

int squareRootTable() {

    // var
    int sqR, square, amount, x, y;
    x = 1;

    sqR = 1;
    
    printf("\n");
    printf("\n[This program creates a table of square root]\n");
    printf("How many columns you want to print?: ");
    scanf("%d", &y);

    printf("\n");

    do {
        square = sqR * sqR;
        printf("The square root of %d is %d\n", square, sqR);
        sqR++;
        x++;
    } while (x <= y);

    printf("\n");

    askMe();

}

int squareRootFinder() {

    // variables used inside the loop
    int sqrd, sqrt; 

    // input
    int x;

    // values that makes the loop infinite
    // for the break statement to play an advantage with
    int a, b;
    a = 1;
    b = 2;

    /* this is the initial value of the number 
    to be squared, so-called the 'squareroot' */
    sqrt = 1;

    printf("\n");
    printf("\n[This is a program that finds the square root of a number]\n");
    printf("Please enter the number to find its square root: ");
    scanf("%d", &x);

    printf("\n");


    while (a < b) {
        sqrd = sqrt * sqrt;
        if (x == sqrd) {
            break;
        } 
        // if the above is false, then I have
        // to declare a limit control:
        else if (x < sqrd) {
            break;
            /* both of the above conditionals will stop 
            the loop once either condition returns true.
            But I have to declare another condition,
            a statement if the finding is success (if the input
            becomes equal to squared value), and a statement if
            the finding is not successful (if the input exceeds
            with the loop calculation of squared numbers) */
        } 
        else {
            sqrt++;
            /* just keep the iteration, and the increments
            // as long as the condition of the break statement
            // or the limit control is not yet true. */
        }
    }

    
    if (x == sqrd) {
        printf("The squre root of %d is %d\n", x, sqrt); 
    } else {
        printf("You have entered an invalid input!!\n");
    }

    printf("\n");

    askMe();

    
}


int ageCalculator() {

    char birthMonth[15];
    char currentMonth[15];
    int birthYear;
    int currentYear;
    int x, y, a, b;
    int month, year;
    int bD, cD;


    printf("\n\n[Age Calculator]\n\n");

    printf("Enter Birth Year: ");
    scanf("%d", &birthYear);

    printf("Enter Birth Month: ");
    scanf("%s", &birthMonth);

    printf("Enter Birth Day: ");
    scanf("%d", &bD);

    printf("\n");

    printf("Enter Current Year: ");
    scanf("%d", &currentYear);

    printf("Enter Current Month: ");
    scanf("%s", &currentMonth);

    printf("Enter Current Day: ");
    scanf("%d", &cD);

    // BIRTH MONTH ASSIGNMENT FOR X
    if (strcmp(birthMonth, "January") == 0) {
        x = 1;
    } else if (strcmp(birthMonth, "February") == 0) {
        x = 2;
    } else if (strcmp(birthMonth, "March") == 0) {
        x = 3;
    } else if (strcmp(birthMonth, "April") == 0) {
        x = 4;
    } else if (strcmp(birthMonth, "May") == 0) {
        x = 5;
    } else if (strcmp(birthMonth, "June") == 0) {
        x = 6;
    } else if (strcmp(birthMonth, "July") == 0) {
        x = 7;
    } else if (strcmp(birthMonth, "August") == 0) {
        x = 8;
    } else if (strcmp(birthMonth, "September") == 0) {
        x = 9;
    } else if (strcmp(birthMonth, "October") == 0) {
        x = 10;
    } else if (strcmp(birthMonth, "November") == 0) {
        x = 11;
    } else if (strcmp(birthMonth, "December") == 0) {
        x = 12;
    }

    // CURRENT MONTH ASSIGNMENT FOR Y
    if (strcmp(currentMonth, "January") == 0) {
        y = 1;
    } else if (strcmp(currentMonth, "February") == 0) {
        y = 2;
    } else if (strcmp(currentMonth, "March") == 0) {
        y = 3;
    } else if (strcmp(currentMonth, "April") == 0) {
        y = 4;
    } else if (strcmp(currentMonth, "May") == 0) {
        y = 5;
    } else if (strcmp(currentMonth, "June") == 0) {
        y = 6;
    } else if (strcmp(currentMonth, "July") == 0) {
        y = 7;
    } else if (strcmp(currentMonth, "August") == 0) {
        y = 8;
    } else if (strcmp(currentMonth, "September") == 0) {
        y = 9;
    } else if (strcmp(currentMonth, "October") == 0) {
        y = 10;
    } else if (strcmp(currentMonth, "November") == 0) {
        y = 11;
    } else if (strcmp(currentMonth, "December") == 0) {
        y = 12;
    }

    // BIRTH YEAR CALCULATION
    year = currentYear - birthYear;
    --year;

    // special variable
    int pVar;

    /* Algorithm of the month calculation */
    if (x > y) {
        switch (x) {
            case 2:
                pVar = 8;
                break;
            case 3:
                pVar = 6;
                break;
            case 4:
                pVar = 4;
                break;
            case 5:
                pVar = 2;
                break;
            case 6:
                pVar = 1;
                break;
            case 7:
                pVar = -2;
                break;
            case 8:
                pVar = -4;
                break;
            case 9:
                pVar = -6;
                break;
            case 10:
                pVar = -8;
                break;
            case 11:
                pVar = -10;
                break;
            case 12:
                pVar = -12;
        }
        x += y;
        month = x + pVar;
        if (bD > cD) {
            --month;
        }
    } else if (x < y) {
        year++;
        month = y - x;
        if (bD > cD) {
            --month;
        }
    } else if (x == y) {
        if (bD <= cD) {
            year++;
            month = 0;
        } 
        else if (bD > cD) {
            month = 11;
        }
    }

    
    printf("\n[Your Age!]\n");
    printf("%d years old\n\n", year);

    askMe();

}


int advancedCalculator() {

    int toUse;

    printf("\n\n[Advanced Calculator] ");
    printf("\n\nPlease select the tools you want to use\n");

    printf("1] Multiplication Table\n");
    printf("2] Square Table\n");
    printf("3] Square Root Table\n");
    printf("4] Square Root Finder\n");
    printf("5] Age Calculator\n");

    printf("\nEnter your input: ");
    scanf("%d", &toUse);

    switch(toUse) {
        case 1:
            setMultiplicationTable();
            break;
        case 2:
            squareTable();
            break;
        case 3:
            squareRootTable();
            break;
        case 4:
            squareRootFinder();
            break;
        case 5:
            ageCalculator();
            break;

    }

}


// This is the function that appears after every 
// use of calculator tools in this program.
int askMe() {
  
    int answer;
    printf("\n[0 = Exit, 1 = Yes, 2 = Restart]\n");
    printf("Do you want to try more?: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("\n\nThis feature wasn't yet learned by the coder\n");
        printf("This option might be available soon!\n\n");
    } else if (answer == 2) {
        main();
    } else if (answer == 0) {
        printf("\n\n[Program finished!]\n\n");
      
    }
  
}
