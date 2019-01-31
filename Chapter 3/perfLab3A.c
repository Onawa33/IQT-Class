/* Onawa Lanier
   30Jan2019
   Lab 3A*/

   //Prints student's ages and my fave phrase

#include <stdio.h>

int main(void)
{
    int ageStudents[15] = {0};
    ageStudents[0] = 29;
    ageStudents[1] = 22;
    ageStudents[2] = 32;
    ageStudents[3] = 22;
    ageStudents[4] = 25;
    ageStudents[5] = 26;
    ageStudents[6] = 26;
    ageStudents[7] = 26;
    ageStudents[8] = 23;
    ageStudents[9] = 19;
    ageStudents[10] = 31;
    ageStudents[11] = 35;
    ageStudents[12] = 36;
    ageStudents[13] = 31;
    ageStudents[14] = 38;

    int i = 0;

    for(int i = 0; i < 15; i++)
    {
        printf("Student %d is %d years old. \n", i+1, ageStudents[i]);
    }

    char myPhrase[125] = {"Ars\n,Longa\0"};

    printf ("%s\n", myPhrase);

    return 0;
    
}