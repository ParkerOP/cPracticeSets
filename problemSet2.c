#include <stdio.h>


int main () {


    int choiceSwitch = 0;


    while (choiceSwitch != 13) {


        printf("\nWelcome to the Interface, USER! Please select one of the following functions :-\n");


        printf("1. Check your Bank Balance\n2. Special Discount\n3. Voting as per Age\n4. Even/Odd\n5. Higher number out of the given\n6. Profit/Loss\n7. Vowel Determiner\n8. Multiples of 2 and/or 3\n9. Automatic Grade Generator\n10. Triangle type\n11. Electricity Bill\n12. Character Classifier and Converter\n13. Exit\n");


        scanf("%d", &choiceSwitch);


        switch (choiceSwitch)
        {
            case 1:
            {
                printf("Enter your bank balance: ");
                int bal;


                scanf("%d", &bal);


                if (bal > 0) {
                    printf("Balance is in positive!");
                }
                else if (bal < 0) {
                    printf("Balance is in negative!");
                }
                else {
                    printf("Zero Balance!");
                }
                break;


            }
            case 2:
            {
                printf("Enter your bill: ");
                int bill, discount;
                scanf("%d", &bill);
                if (bill % 5 == 0) {
                    printf("Discount is applicable!");
                    discount = 1;
                }
                break;
            }


            case 3:
            {
                printf("This is the voting interface. Please enter your age: ");
                int age;


                scanf("%d", &age);


                if (age >= 18) {
                    printf("Allowed to Vote");
                    if (age >= 60) {
                        printf(" as a senior citizen.");
                    }
                }
                break;


            }


            case 4:
            {
                printf("Please enter an integer: ");
                int num;


                scanf("%d", &num);


                if (num % 2 == 0) {
                    printf("Number is even!");
                }
                else {
                    printf("Number is odd!");
                }
                break;
            }


            case 5:
            {
                printf("This tool allows you to find out the highest of the given numbers. Choose how many numbers you want to be processed:\n1. Two numbers\n2. Three numbers\n3. Four numbers");
                int numChoice;

                scanf("%d", &numChoice);


                switch (numChoice) {
                    case 1:
                    {
                        printf("Enter the two numbers:\n");
                        float a, b;


                        scanf("%f%f", &a, &b);


                        if( a > b) {
                            printf("%f is the bigger number.", a);
                        }
                        else {
                            printf("%f is the bigger number.", b);
                        }
                        break;
                    }
                    case 2:
                    {
                        printf("Enter the three numbers:\n");
                        float a, b, c;


                        scanf("%f%f%f", &a, &b, &c);


                        if( a > b) {
                            if (a > c) {
                                printf("%f is the bigger number.", a);
                            }
                            else {
                                printf("%f is the bigger number.", c);
                            }
                        }
                        else if (b > c) {
                            printf("%f is the bigger number.", b);
                        }
                        else {
                            printf("%f is the bigger number.", c);
                        }
                        break;
                    }


                    case 3:
                    {
                        float big1, big2;
                        printf("Enter the four numbers:\n");


                        float a, b, c, d;
                        scanf("%f%f%f%f", &a, &b, &c, &d);


                        if (a > b) {
                            big1 = a;
                        }
                        else {
                            big1 = b;
                        }
                        if (c > d) {
                            big2 = c;
                        }
                        else {
                            big2 = d;
                        }
                        if (big1 > big2) {
                            printf("%f is the bigger number.", big1);
                        }
                        else {
                            printf("%f is the bigger number.", big2);
                        }
                        break;
                    }


                    break;    
                }

                break;
            }


            case 6:
            {
                printf("Enter cost price and selling price respectively:\n");
                float cp, sp;
                scanf("%f%f", &cp, &sp);
                
                if (cp > sp) {
                    printf("You incured a loss on this sale.");
                }
                else {
                    printf("Congrats! You earned a profit on this deal!");
                }
                break;
            }


            case 7:
            {
                char arr[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
                char inputChar;
                int found = 0;


                printf("Enter a character to determine if it is a vowel or a consonant: ");
                scanf(" %c", &inputChar);


                for(int i = 0; i < 10; i++) {
                    if (arr[i] == inputChar) {
                        printf("The entered character is a vowel.");
                        found = 1;
                        break;
                    }
                }
                if(found == 0) {
                    printf("The entered character is a consonant.");
                }
                break;


            }


            case 8: {
                printf("This tool checks if the entered number is a multiple of two, three, both or neither, Please enter the number: ");
                int num, found = 0;
                scanf("%d", &num);


                if (num % 2 == 0) {
                    printf("Multiple of 2.");
                    found = 1;
                }
                if (num % 3 == 0) {
                    printf("Multiple of 3.");
                    found = 1;
                }
                if (found == 0) {
                    printf("Number was not a multiple of either 2 or 3.");
                }
                break;
            }


            case 9:
            {
                printf("This tool calculates your grade based on marks obtained in five subjects. PLease enter the marks out of 70.\n");


                float a,b,c,d,e;
                char grade;


                scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
                float percentage = ((a+b+c+d+e)/350)*100;


                if (percentage > 90) {
                    grade = 'A';
                }
                else if (percentage > 75) {
                    grade = 'B';
                }
                else if (percentage > 60) {
                    grade = 'C';
                }
                else {
                    grade = 'F';
                }
                printf("The obtained grade is %c for the student.", grade);
                break;
            }


            case 10:
            {
                printf("Enter three sides of triangle.");
                float a,b,c;
                scanf("%f%f%f", &a, &b, &c);

                if(a == b && b == c) {
                    printf("Triangle is equilateral.");
                }
                else if(a == b || a == c || b == c) {
                    printf("Traingle is isosceles.");
                }
                else {
                    printf("Triangle is scalene.");
                }
                break;
            }


            case 11:
            {
                printf("This tool calculates your total electricity bill according to your consumption rate. Standard three slab rated used: first 100 units at rupees 4, next 200 units at rupees 6 and anything above at rupees 8. Please enter your unit consumption this month: ");


                float unitConsumed, cost;
                scanf("%f", &unitConsumed);


                if (unitConsumed <= 100) {
                    cost = 4*unitConsumed;
                }
                else if (unitConsumed <= 300) {
                    cost = 4*100;
                    cost += 6*(unitConsumed-100);
                }
                else {
                    cost = 4*100;
                    cost += 6*200;
                    cost += 8*(unitConsumed-300);
                }


                printf("Total cost incurred is %f rupees for the month.", cost);
                break;
            }


            case 12: {
                printf("This tool is split into two parts. One to determine the type of user entered element, and other to convert loercase to uppercase and vice versa. which tool would you like to use?\n1. Classifier \n2. Converter\n");


                int choice;
                scanf("%d", &choice);


                switch (choice) {


                    case 1:
                    {
                        printf("Enter an element to be classified as an uppercase, lowercase, digit or symbol: ");
                        char elem;
                        scanf(" %c", &elem);


                        if(elem >= 'A' && elem <= 'Z') {
                            printf("Uppercase letter.");
                        }
                        else if(elem >= 'a' && elem <= 'z') {
                            printf("Lowercase letter.");
                        }
                        else if(elem >= '0' && elem <= '9') {
                            printf("Digit.");
                        }
                        else {
                            printf("Symbol.");
                        }
                        break;
                    }


                    case 2:
                    {
                        printf("Enter an character. The program will detect its case and convert it to its counterpart: ");
                        char elem;
                        scanf(" %c", &elem);


                        if(elem >= 'A' && elem <= 'Z') {
                            elem = elem + ('a' - 'A');
                            printf("Character converted to lowercase: %c\n", elem);
                        }
                        else if(elem >= 'a' && elem <= 'z') {
                            elem = elem - ('a' - 'A');
                            printf("Character converted to uppercase: %c\n", elem);
                        }
                        else {
                            printf("The entered character is not an alphabet.");
                        }
                        break;


                    }


                    break;


                }

                break;
            }


            case 13:
            {
                break;
            }


            default:
            {
                printf("Invalid choice!");
                break;
            }
        }
    }

    return 0;
}