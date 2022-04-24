/*RANDOM PASSWORD GENERATOR 
BY AMAYASH SINHA*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char p[9];
    printf("Press enter to get a nine-digit password\n");
    getchar();

    for (i = 0; i < 3; i++) 
    {

        p[ 3 * i ] = '0' + (rand() % 10);
        char capLetter = 'A' + (rand() % 26);
        p[(3 * i) + 1] = capLetter;
        char letter = 'a' + (rand() % 26);
        p[(3 * i) + 2] = letter;
    }
    p[3 * i] = '\0';
    printf("generated password : %s\n\n",p);
    return 0;
}