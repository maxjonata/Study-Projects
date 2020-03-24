#include <stdio.h>
#include <string.h>

int main()
{
    char P1[20], P2[20], P3[20], P4[20];
    scanf("%s %s %s", P1, P2, P3);

    if(strcmp(P1, "vertebrado") == 0)
    {
        if (strcmp(P2, "ave") == 0)
        {
            if (strcmp(P3, "carnivoro") == 0) 
            {
                strcpy(P4, "aguia");
            }
            if (strcmp(P3, "onivoro") == 0) 
            {
                strcpy(P4, "pomba");
            }
        }
        if (strcmp(P2, "mamifero") == 0)
        {
            if (strcmp(P3, "onivoro") == 0) 
            {
                strcpy(P4, "homem");
            }
            if (strcmp(P3, "herbivoro") == 0) 
            {
                strcpy(P4, "vaca");
            }
        }
    }
    if(strcmp(P1, "invertebrado") == 0)
    {
        if (strcmp(P2, "inseto") == 0)
        {
            if (strcmp(P3, "hematofago") == 0) 
            {
                strcpy(P4, "pulga");
            }
            if (strcmp(P3, "herbivoro") == 0) 
            {
                strcpy(P4, "lagarta");
            }
        }
        if (strcmp(P2, "anelideo") == 0)
        {
            if (strcmp(P3, "hematofago") == 0) 
            {
                strcpy(P4, "sanguessuga");
            }
            if (strcmp(P3, "onivoro") == 0) 
            {
                strcpy(P4, "minhoca");
            }
        }
    }

    printf("%s\n", P4);
}