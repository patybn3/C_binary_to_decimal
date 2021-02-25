//
//  main.3
//  assignment3_5_patriciaantlitz
//
//  Created by Patricia Antlitz on 2/10/21.

/*---------------------------------------------------------------------*/
     /* Student Name: Patricia Antlitz                                 */
     /* Submission Date: Feb 10, 2021                                  */
     /* Program 5: Printing the decimal equivalent of a binary
      number: Write a program that accepts an integer (5 digits or
      fewer) containing only 0s and 1s (i.e., binary) and prints out
      its decimal equivalent. Hint: use the remainder and division
      operator to select the "binary" digits one at a time. Make sure
      your input is tested for multiple options: incorrect characters,
      too many, too few, etc.
                                                                        */
 
 /*
 *
 * Week #: 2
 * Problem #: 3
 * Filename: assignment3_3_patriciaantlitz.c
 *
 * Notes:
 *        -  This program works when compiled and ran on the CLI or when
            compiled by a IDE. It allows the calculation of the avarage cost of the
            user's daily drive.
          -  This program used other sources to be developed:
  https://www.programiz.com/c-programming/examples/binary-decimal-convert
  
 
 * Sample Output:
    
  Enter a binaey number of 5 digits or less to convert to decimal:
  0010
  Decimal is 2
  Program ended with exit code: 0
  
 *
 */
/*-----------------------------------------------------------------------*/
//includes stdio library for functions used
#include <stdio.h>
//includes math library for calculations
#include <math.h>
//function decimal for the calculation of the decimanumber, takes param i to be used on for loop
int decimal(int i) {
    //variable add will add 1 to the loop
    int add;
    //variable setDecimal sets the initial value of a decimal number
    int setDecimal = 0;
    //for loop will check if the value of param i decimal is greater than 0, if so it will add 1
    for(add = 0; i > 0; add++){
        //calculation, gets values of setDeciamal adds to 2 to the power of the value of add and multiplies the value of i by 10 taking the remainder
        setDecimal = setDecimal + pow(2, add) * (i % 10);
        //divides the value of i by 10
        i = i / 10;
    }
    return setDecimal;
}

//main function, runs the program
int main(int argc, const char * argv[]) {
    // insert code here..
    //calls variables binary and total
    int binary;
    int total;
    //asks user to enter a binary number
    printf("Enter a Binary number of 5 digits or less to convert to decimal:\n");
    //gets user's input
    scanf("%d", &binary);
    //sets the value of total to the fucntion decimal passing the value entered by the user
    total = decimal(binary);
    //prints the number as a decima number
    printf("This Binary number convert to number %d as a Decimal.\n", total);
    
    //if successful runs the program and returns status 0
    return 0;
}
