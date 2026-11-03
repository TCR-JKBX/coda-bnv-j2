#include <stdio.h>

int main()
{
    char prenom[50];
    int age;
    int annee = 2026;

    printf("Bonjour, quel est votre prénom ?\n");
    scanf("%49s", prenom);

    printf("Bonjour %s, quel est votre âge ?\n", prenom);
    scanf("%d", &age);

    int annee_naissance = annee - age;

    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n",
           prenom, annee_naissance - 1, annee_naissance);

    return 0;
}
