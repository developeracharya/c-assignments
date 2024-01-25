#include <stdio.h>

void switchFun();
int main() {
    // Array of Options to be displayed
    char anyArray[5][20] ={
        "Addition",
        "Subtraction",
        "Multiplication",
        "Division",
        "Exit"
    } ;
    // calculates size of array
    int arrayLength = sizeof(anyArray)/sizeof(anyArray[0]);
    printf("Choose any option: \n");
    int i = 1;
    // LOOP TO PRINT THE PROMPT TO THE USER
        do{
          printf("%d.%s\n", i, anyArray[i-1]);
          i++;
        }while(i <= arrayLength);
   // VOID FUNCTION CALLED TO READ THE USER INPUT AND DISPLAY THE RESULT 
    switchFun();
    return 0;
}

void switchFun(){
    // STORES USERS INPUT
     int optionChoice;
     // DO WHILE LOOP TO MAKE THE INPUT PROMT LOOPING
    do{
    printf("choose any number: ");
    scanf("%d", &optionChoice);
    // SWITCH STATEMENT TO CHECK AND PRINT DESIRED OUTPUT
    switch(optionChoice){
        case 1:
        printf("You choose Addition\n");
        break;
        
        case 2:
        printf("You choose Subtraction\n");
        break;
        
        case 3:
        printf("You choose Multiplication\n");
        break;
        
        case 4:
        printf("You choose Division\n");
        break;
        
        case 5:
        printf("You are EXITTING, BYE <3\n");
        break;
        
        default:
        printf("You choose the wrong option.\nPlease Try Again\n");
    }
    // CONDITION TO TERMINATE PROGRAM IF THE USER WANTS TO EXIT
    } while(optionChoice != 5);
    // printf("%d", optionChoice);
}