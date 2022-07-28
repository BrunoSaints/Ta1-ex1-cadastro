#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv[])
{
    char Nome[30];
    char Endereco[30];
    int Idade;

    printf ("Nome \n");
    scanf ("%s", &Nome);

    printf ("Endereco \n");
    scanf ("%s", &Endereco);

    printf ("idade \n");
    scanf ("%d", &Idade);

    printf ("\n Nome : %s", Nome);
    printf ("\n Endereco : %s", Endereco);
    printf ("\n idade : %d", Idade);

    return EXIT_SUCCESS;
}
