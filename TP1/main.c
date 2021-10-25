#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    //d�claration des variables
    int nombreMystere = 0,
    nombre = 0;
    const int MIN = 1, MAX = 100;

    //g�n�ration al�atoire du nombre myst�re
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;


    do
    {
        //demande du nombre
        printf("Quel est votre proposition ? ");
        scanf("%d", &nombre);

        //indique au joueur si son nombre est inf�rieur, sup�rieur, ou �gal au nombre myst�re

        //la boucle indique quelle r�ponse afficher
        if (nombreMystere > nombre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !\n\n");
    } while (nombre!= nombreMystere);       //la boucle continue tant que le nombre n'est pas �gal au nombre myst�re

    return 0;
}
