#include <stdio.h>
int main (int argc, char *argv[])
{        
        printf("\nfor tsükkel:\n\n"); // annab                                                  algusesse tühja rea
        int i,j; // i= rida; j= tulp
        
        for (i = 0; i <= 5; i++) // välimine tsükkel
        {
                for (j = 0; j <= 9; j++) // sisemine tsükkel
                printf("%.2d ", i*10+j); // väljund        
                printf("\n"); // peale tsüklit reavahetus
        }        
        printf("\n"); // annab lõppu uue rea
}
