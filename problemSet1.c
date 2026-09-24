#include <stdio.h>

float tempConverter(int inUnit, int outUnit, float temp) {

    float result;
    if (inUnit == 1 && outUnit == 2) {
        result = temp*9.0/5.0 + 32;   
    }
    else if (inUnit == 1 && outUnit == 3) {
        result = temp + 273.15;
    }
    else if (inUnit == 2 && outUnit == 1) {
        result = (temp - 32)*5.0/9.0;
    }
    else if (inUnit == 2 && outUnit == 3) {
        result = ((temp - 32)*5.0/9.0) + 273.15;
    }
    else if (inUnit == 3 && outUnit == 1) {
        result = temp - 273.15;
    }
    else if(inUnit == 3 && outUnit == 2) {
        result = (temp - 273.15)*9.0/5.0 + 32;
    }
    else {
        printf("Not a valid choice!");
        result = 0;
    }

    return result;
    
}

int main() {

    int switchChoice = 0;

    while (switchChoice != 6) {
        printf("Welcome to the Central HUB! Please choose a number to proceed!\n");
        printf("1. Geometrical Shapes\n 2. Temperature Conversion\n 3. Simple Interest\n 4. Student Grade\n 5. Train Problem\n 6. Exit\n");

        scanf("%d",&switchChoice);

        switch (switchChoice) {

            case 1: {
                printf("You have entered geometry shapes section. Here you can calculate parameters rectangular, square etc. Please choose one to proceed.\n");
                printf("1. Rectangular Garden\n 2. Square Playground\n 3. Circular Fountain\n 4. Right-ANgled Triangular Board 5. Cube-Shaped Gift Box 6. Cuboid Water Tank 7. Cone-Shaped Volcano 8. Spherical Football");

                int GeometricalChoice = 0;
                scanf("%d", &GeometricalChoice);

                printf("Do you want to toggle cm to inches mode? Values will be accepted in centimetres and result will be in inches. Y/N: ");
                char modeToggle = 'N';
                scanf(" %c", &modeToggle);
                if (modeToggle != 'Y' && modeToggle != 'y') {
                    modeToggle = 'N';
                }


                switch (GeometricalChoice) {

                    case 1: {
                        printf("Please enter Length and Breadth:\n");
                        float length, breadth;
                        scanf("%f%f", &length, &breadth);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            length = length /2.54;
                            breadth = breadth/2.54;
                        }
                        float area = length*breadth;
                        float perimeter = 2*(length + breadth);
                        printf("Area= %f Perimeter= %f", area, perimeter);
                        break;
                    }

                    case 2: {
                        printf("Please enter side of Square:\n");
                        float side;
                        scanf("%f", &side);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            side = side/2.54;
                        }
                        float area = side*side;
                        float perimeter = 4*(side);
                        printf("Area= %f Perimeter= %f", area, perimeter);
                        break;
                    }

                    case 3: {
                        printf("Please enter Radius of fountain:\n");
                        float radius;
                        scanf("%f", &radius);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            radius = radius/2.54;
                        }
                        float area = 3.14*radius*radius;
                        float circumference = 2*3.14*radius;
                        printf("Area= %f Circumference= %f", area, circumference);
                        break;
                    }

                    case 4: {
                        printf("Please enter Base and Height of board:\n");
                        float base, height;
                        scanf("%f%f", &base, &height);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            base = base /2.54;
                            height = height/2.54;
                        }
                        float area = 0.5*base*height;
                        printf("Area= %f", area);
                        break;
                    }

                    case 5: {
                        printf("Please enter side of Cube:\n");
                        float side;
                        scanf("%f", &side);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            side = side/2.54;
                        }
                        float volume = side*side*side;
                        printf("Volume= %f", volume);
                        break;
                    }

                    case 6: {
                        printf("Please enter Length, Breadth and Height of the tank:\n");
                        float length, breadth, height;
                        scanf("%f%f%f", &length, &breadth, &height);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            length = length /2.54;
                            breadth = breadth/2.54;
                            height = height/2.54;
                        }
                        float volume = length*breadth*height;
                        printf("Volume= %f", volume);
                        break;
                    }

                    case 7: {
                        printf("Please enter Radius and Height of Volcano:\n");
                        float radius, height;
                        scanf("%f%f", &radius, &height);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            radius = radius /2.54;
                            height = height/2.54;
                        }
                        float volume = 0.33*3.14*radius*radius*height;
                        printf("Volume= %f", volume);
                        break;
                    }

                    case 8: {
                        printf("Please enter radius of Sphere:\n");
                        float radius;
                        scanf("%f", &radius);
                        if (modeToggle == 'Y' || modeToggle == 'y') {
                            radius = radius/2.54;
                        }
                        float volume = 4.0/3.0*3.14*radius*radius*radius;
                        printf("Volume= %f", volume);
                        break;
                    }

                    default:
                        printf("That's not a valid option! Please try again.");
                        break;

                }
                break;
            }

            case 2: {
                printf("You have entered conversion of temperatures section. Here you can convert temperature from one unit to another. Please enter a temperature and choose its unit:\n");
                printf("Enter temperature: ");
                float temp;
                scanf("%f", &temp);
                printf("Choose its unit out of the following:\n");
                printf("1. Celsius\n 2. Fahrenheit\n 3. Kelvin\n");
                int inputUnit;
                scanf("%d", &inputUnit);
                printf("Choose which unit to convert to:\n");
                printf("%s", inputUnit != 1 ? "1. Celsius\n" : "");
                printf("%s", inputUnit != 2 ? "2. Fahrenheit\n" : "");
                printf("%s", inputUnit != 3 ? "3. Kelvin\n" : "");
                int outputUnit;
                scanf("%d", &outputUnit);

                if (inputUnit == outputUnit) {
                    printf("You can't convert the value to the same unit it is of.");
                    break;
                }
                else if ((inputUnit == 1 || inputUnit == 2 || inputUnit == 3) && (outputUnit == 1 || outputUnit == 2 || outputUnit == 3)) {
                    float result = tempConverter(inputUnit, outputUnit, temp);
                    printf("The temperature value in the selected unit is: %f", result);
                }
                else {
                    printf("Not a valid choice! Try again");
                    break;
                }
                break;
            }

            case 3: {
                float pr, r, t;
                printf("You have entered Simple Interest Calculation Interface.\n");
                printf("Principal: ");
                scanf("%f", &pr);
                printf("Rate: ");
                scanf("%f", &r);
                printf("Time: ");
                scanf("%f", &t);
                float si = (pr*r*t)/100.0;
                printf("The simple interest calculated is: %f", si);
                break;
            }

            case 4: {
                printf("You have entered Student Grades page. Please enter marks in five subjects(out of 70).");
                float a,b,c,d,e, avg, total, percentage;
                scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
                printf("Choose a number from the following:\n");
                printf("1. Average of the Marks\n 2. Total Marks\n 3. Marks Percentange\n");

                int choice;
                scanf("%d", &choice);
                if (choice == 1 || choice == 2 || choice == 3) {
                    switch (choice) {

                        case 1:
                            avg = (a + b + c + d + e)/5;
                            printf("Average marks: %f", avg);
                            break;

                        case 2:
                            total = (a + b + c + d + e);
                            printf("Total marks: %f", total);
                            break;


                        case 3:
                            percentage = ((a + b + c + d + e)/350)*100;
                            printf("Percentage marks: %f", percentage);
                            break;


                    }

                }
                else {
                    printf("Not a valid choice! Try again.");
                    break;
                }
                break;
            }

             case 5: {
                float speed, length, pLength;
                printf("Please input train speed in km/hr: ");
                scanf("%f", &speed);
                printf("Please input train length in metres: ");
                scanf("%f", &length);
                printf("Please input platform length in metres: ");
                scanf("%f", &pLength);

                float time = (length + pLength)/(speed*5.0/18.0);

                printf("The total time taken in seconds: %f", time);
                break;
            }

            
            case 6:
                printf("Exiting...");
                break;
        }

    }

}