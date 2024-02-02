
#include <stdio.h>
#include <string.h>
// LAB 7
// int main() {
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int num1, num2;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("%d && %d = %d\n", num1, num2, num1 && num2);

//     printf("%d || %d = %d\n", num1, num2, num1 || num2);

//     printf("!%d = %d,\n!%d = %d\n", num1, !num1, num2, !num2);

//     return 0;
// }

// LAB 9
// int main(){
// printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int anyVar;
//     anyVar = 11;
//     printf("%d\n", anyVar);
// }

// Lab 10
// int main(){
//     int anyNum;
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     printf("Enter any number: ");
//     scanf("%d", &anyNum);
//     printf("++ operation after the variable(a++) input number is: %d\n", anyNum++);
//     printf("++ operation before the variable(++a) input number is: %d\n", ++anyNum);
//     printf("-- operation after the variable(a--) input number is: %d\n", anyNum--);
//     printf("-- operation before the variable(--a) input number is: %d\n", --anyNum);

// }

// LAB11
//  int main(){
//      int num1, num2;
//      printf("Name: Aditya Acharya\nSection: \"A\"\n");
//      printf("Input any two numbers: ");
//      scanf("%d %d", &num1, &num2);
//      // printf("%d is greater than %d\n", num1 > num2? num1,num2 : num2,num1);
//      printf("%s number is greater\n", num1>num2? "First" : "Second");
//  }

// LAB 12
//  int main(){
//      printf("Name: Biraj Dulal\nSection: \"A\"\n");
//      float result, changedResult;
//      result = 2*7 + (float)4 / (float)5;
//      changedResult = (float)(2*(7+4))/(float)5;
//      printf("Result without parenthesis: %.2f\n", result);
//      printf("Result with parenthesis: %.2f\n", changedResult);
//      return 0;

// }

// LAB 13

// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int intVar, i;
//     float floatVar;
//     char charVar;
//     long int intSize, floatSize, charSize;
//     intSize = sizeof(intVar);
//     floatSize = sizeof(floatVar);
//     charSize = sizeof(charVar);
//     long int arr[4] = {intSize, floatSize, charSize};
//     char arr2 [4][10] ={"Interger", "Float", "Char"};
//     for(i = 0; i < 3; i++){
//         printf("The size of %s variable is %ld\n",arr2[i], arr[i]);
//     }

//     return 0;
// }

// LAB 14
//  int main(){
//      printf("Name: Aditya Acharya\nSection: \"A\"\n");
//      int num1= 221; // for biraj 19
//      float num2 = 928.898; // for biraj 98.898
//      float sum = num1 + num2;
//      printf("The sum of %d and %f is: %f\n",num1, num2, sum);
//      return 0;
//  }

// LAB 15
//  int main(){
//      printf("Name: Biraj Dulal\nSection: \"A\"\n");
//      int num1 = 41;
//      int num2= 7;
//      float div = num1/num2;
//      float divFloat = (float)num1/(float)num2;
//      printf("The division of %d and %d without using explicit conversion is %f\n", num1, num2, div);
//      printf("The division of %d and %d using explicit conversion is %f\n", num1, num2, divFloat);
//      return 0;
//  }

// LAB 16
// int main()
// {
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int anyNum[2];
//     int i;
//     printf("Enter any two numbers: ");
//     scanf("%d %d", &anyNum[0], &anyNum[1]);
//     for (i = 0; i < 2; i++)
//     {
//         if (anyNum[i] < 0)
//         {
//             printf("The %d%s number is negative\n", i + 1, i == 0? "st" : "nd");
//         }
//         if (anyNum[i] > 0)
//         {
//             printf("The %d%s number is positive\n", i + 1, i == 0? "st" : "nd");
//         }
//         if(anyNum[i] == 0)
//         {
//             printf("The %d%s number is zero\n", i + 1, i == 0? "st" : "nd");
//         }
//     }
//     return 0;
// };

// LAB 17

// int main()
// {
//     int num1;
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     printf("Input any number: ");
//     scanf("%d", &num1);
//     if (num1 % 2 == 0)
//     {
//         printf("The input number is even\n");
//     }
//     else
//     {
//         printf("The input number is odd\n");
//     }
//     // printf("%d\n", num1 & 1);
//     return 0;
// }

// LAB18
// int main()
// {
//     int anyNum;
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     printf("Enter any number: ");
//     scanf("%d", &anyNum);
//     if (anyNum % 2 == 0)
//     {
//         if (anyNum % 3 == 0 && anyNum % 5 == 0)
//         {
//             printf("The number is divisible by 2 3 and 5\n");
//         }
//         else if (anyNum % 3 == 0 && anyNum % 5 != 0)
//         {
//             printf("The number is divisible by 2 and 3\n");
//         }
//         else if (anyNum % 3 != 0 && anyNum % 5 == 0)
//         {
//             printf("The number is divisible by 2 and 5\n");
//         }
//         else if (anyNum % 3 != 0 && anyNum % 5 != 0)
//         {
//             printf("The number is divisible by 2\n");
//         }
//     }
//     else if (anyNum % 3 == 0 && anyNum % 2 != 0)
//     {
//         if (anyNum % 5 == 0)
//         {
//             printf("The number is divisible by 3 and 5\n");
//         }
//         else if (anyNum % 5 != 0)
//         {
//             printf("The number is divisible by 3\n");
//         }
//     }
//     else if (anyNum % 5 == 0 && anyNum % 2 != 0 && anyNum % 3 != 0)
//     {
//         printf("The number is divisible by 5\n");
//     }
// }

// LAB 19

// int main()
// {
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int marks, i, n;
//     printf("How many students marks you want to check? :");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter student marks: ");
//         scanf("%d", &marks);
//         // printf("%d", marks/10);
//         switch (marks / 10)
//         {
//         case 9:
//         case 10:
//             printf("Grade: 'A'\n");
//             break;
//         case 8:
//             printf("Grade: 'B'\n");
//             break;

//         case 7:
//             printf("Grade: 'C'\n");
//             break;

//         case 6:
//             printf("Grade: 'D'\n");
//             break;

//         default:
//             printf("Failed! \nGrade:'F'\n");
//             break;
//         }
//     }
// }

// LAB 20

// int main(){
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int anyNum;
//     printf("Input any Integer: ");
//     scanf("%d", &anyNum);
//     printf(anyNum >= 0?"The number is positive\n": "The number is negative\n");
//     return 0;
// }

// LAB 21
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int anyNum;
//     printf("Input any Number: ");
//     scanf("%d", &anyNum);
//     if(anyNum % 3 == 0 && anyNum % 5 == 0){
//         printf("The number is divisible by 3 and 5.\n");
//     }else if(anyNum % 3 != 0 && anyNum % 5 == 0){
//         printf("The number is divisible by 5.\n");
//     }else if(anyNum % 3 == 0 && anyNum % 5 != 0){
//         printf("The number is divisible by 3.\n");
//     }
//     return 0;
// }

// LAB 22
// int main(){
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int anyNum,i, count=0;
//     printf("Enter any Number: ");
//     scanf("%d", &anyNum);
//     for(i = 1; i<=anyNum; i++ ){
//         if(anyNum % i == 0){
//             count++;
//         if(count > 2){
//             printf("The number is not prime.\n");
//             break;
//         }
//         }
//     }
//     if(count == 2){
//         printf("The number is prime.\n");
//     }
// }

// LAB 23
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int i, count = 10;
//     for(i = 1; i <= count; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// LAB 24
//  int main(){
//      printf("Name: Aditya Acharya\nSection: \"A\"\n");
//      int i;
//      for(i = 10; i != 0; i-- ){
//          printf("%d\n", i);
//      }
//  }

// LAB 25
// int main()
// {
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int anyNum, count = 1;
//     do
//     {
//         printf("Enter any Number: ");
//         scanf("%d", &anyNum);
//         if (anyNum <= 10 && anyNum > 0)
//         {
//             printf("The entered number is %d and valid\n", anyNum);
//             count = 0;
//         }
//         else
//         {
//             printf("The number is invalid\n");
//         }
//     } while (count != 0);
//     return 0;
// }

// LAB 26

// int main(){
//     int i,j, count;
//     for(i = 2; i<100; i++){
//         for(j=2; j < i; )
//     }
// }

// LAB 27
// int main()
// {
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int i = 0;
//     while (i < 10)
//     {
//         i++;
//         if (i == 5)
//         {
//             continue;
//         }
//         else
//         {
//             printf("%d\n", i);
//         }

//     }
// }

// LAB 28
// #include <string.h>
// int main()
// {
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     char astreck[2] = "*";
//     char astreckStr[6];
//     int i, j;
//     // for(i = 0;i < 5; i++){
//     //      strcat(astreckStr, astreck);
//     //      printf("%s\n", astreckStr);
//     // };
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// LAB 29

// int main(){
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int anyArr[5];
//     int i;
//     for(i= 0; i < 5; i++){
//         printf("Enter element number %d: ", i + 1);
//         scanf("%d", &anyArr[i]);
//     }
//     printf("Entered array: \n");
//     for(i = 0; i < 5; i++){
//         printf("%d ", anyArr[i]);
//     }
//     printf("\n");
// }

// LAB 30

// int main()
// {
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int i, j, anyArr[3][4];
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("Enter %d x %d element: ", i+1, j+1);
//             scanf("%d", &anyArr[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf(j == 3 ? "%d\n" : "%d ", anyArr[i][j]);
//         }
//     }
// }

// LAB 32
// int main()
// {
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int arrAdder(int array[], int arrSize);
//     int i, anyArr[5];
//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter element %d: ", i);
//         scanf("%d", &anyArr[i]);
//     }
//     int arrSize = sizeof(anyArr) / sizeof(anyArr[0]);
//     // printf("%d", arrSize);
//     printf("The sum of elements is: %d\n", arrAdder(anyArr, arrSize));
// }

// int arrAdder(int array[], int arrSize)
// {
//     if (arrSize < 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return array[arrSize] + arrAdder(array, arrSize - 1);
//     }
// }

// LAB 33
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     char anyStr[30];
//     printf("Enter any string: ");
//     scanf("%[^\n]s", anyStr);
//     printf("%s\n", anyStr);
// }

// LAB 34
// #include <string.h>
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     char anyStr[50];
//     printf("Enter any string: ");
//     scanf("%[^\n]s", anyStr);
//     printf("%ld\n", strlen(anyStr));
//     return 0;
// }

// LAB 35
//  #include <string.h>
//  int main(){
//      printf("Name: Biraj Dulal\nSection: \"A\"\n");
//      char str1[40];
//      char str2[40];
//      char fullName[80] = "";
//      printf("Enter Your First Name: ");
//      scanf("%s", str1); //  %[^\n]s
//      printf("Enter Your Last Name: ");
//      scanf("%s", str2); //  %[^\n]s CODE BREAKS HERE ????
//      strcat(str1, " ");
//      strcat(fullName, str1);
//      strcat(fullName, str2);
//      printf("Your full name: %s\n", fullName);

// }

// While using %[^\n]s to scanf the code breaks

// LAB 36
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     char str1[10] = "ASCii";
//     char str2[10] = "ascII";
//     printf("Result of strcpy(\"%s\", \"%s\") is %d\n", str1, str2, strcmp(str1, str2));
//     printf("Result of strcpy(\"%s\", \"%s\") is %d\n", str2, str1, strcmp(str2, str1));
//     printf("Result of strcpy(\"%s\", \"%s\") is %d\n", str1, str1, strcmp(str1, str1));
//     return 0;
// }

// LAB 37

// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     char str1[20] = "Hello";
//     char str2[20] = "World";
//     // why doesn't str2 == "World"? as the function is backward then str2 is called
//     // printf("strcpy(\"%s\", \"%s\") = %s\n", str1, str2, strcpy(str2, str1));
//     printf("strcpy(\"%s\", \"%s\") = ",str1, str2);
//     printf("%s\n", strcpy(str1, str2));
// }

// LAB 38
//  int adderFun(int, int);
// int main(){
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int num1, num2;
//     printf("Enter any two number: ");
//     scanf("%d %d", &num1, &num2);
//     printf("The sum is %d\n",adderFun(num1, num2));
//     return 0;
// }

// int adderFun(int a, int b){
//     return a + b;
// }

// LAB 39
// int factorialFun(int);
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int anyNum;
//     printf("Enter any number: ");
//     scanf("%d", &anyNum);
//     printf("The factorial of %d is %d\n", anyNum, factorialFun(anyNum));
//     return 0;
// }
// int factorialFun(int a){
//     if(a == 0){
//         return 1;
//     }else{
//         return a * factorialFun(a-1);
//     }
// }

// LAB 40
// int arrSum(int arr[], int size);
// int main()
// {
//     printf("Name: Aditya Acharya\nSection: \"A\"\n");
//     int elementNum;
//     printf("How many elements you want to add?: ");
//     scanf("%d", &elementNum);
//     int i, anyArr[elementNum];
//     for (i = 0; i < elementNum; i++)
//     {
//         printf("Enter element number %d: ", i + 1);
//         scanf("%d", &anyArr[i]);
//     }
//     int arrSize = sizeof(anyArr) / sizeof(anyArr[0]);
//     printf("The array is: \n");
//     for (i = 0; i < arrSize; i++)
//     {
//         printf(i == arrSize - 1 ? "%d\n" : "%d  ", anyArr[i]);
//     };
//     printf("The sum is: %d\n", arrSum(anyArr, arrSize - 1));
// }

// int arrSum(int anyArr[], int arrSize)
// {
//     if (arrSize == 0)
//     {
//         return anyArr[0];
//     }
//     else
//     {
//         return anyArr[arrSize] + arrSum(anyArr, arrSize - 1);
//     }
// }

// LAB 41
// void swapFun(int *num1, int *num2);
// int main(){
//     printf("Name: Biraj Dulal\nSection: \"A\"\n");
//     int num1 = 60;
//     int num2 = 100;
//     printf("BEFORE: \nnum1 = %d \nnum2 = %d\n", num1, num2);
//     swapFun(&num1, &num2);
//     printf("AFTER: \nnum1 = %d \nnum2 = %d\n", num1, num2);
// }

// void swapFun(int *num1, int *num2){
//      int temp = *num1;
//       *num1 = *num2;
//       *num2 = temp;
// }

// LAB 49
//  int main(){
//      printf("Name: Aditya Acharya\nSection: \"A\"\n");
//      int anyVar;
//      printf("Enter a number: ");
//      scanf("%d", &anyVar);
//      int* pointer = &anyVar;
//      printf("Printed number using pointer is: %d\n", *pointer);
//  }

// LAB 50
int main()
{
    int eleNum;
    printf("Enter number of element you want to enter: ");
    scanf("%d", &eleNum);
    int i, anyArr[eleNum];
    int *arrPoint = anyArr;
    for (i = 0; i < eleNum; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%d", arrPoint + i);
    }
    printf("The entered array is :\n");
    for (i = 0; i < eleNum; i++)
    {
        printf(i == eleNum - 1 ? "%d\n" : "%d ", *(arrPoint + i));
    }
}

// LAB 51
// int main(){

// }