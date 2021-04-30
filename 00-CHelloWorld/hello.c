#include <stdio.h>

int main()
{
    FILE *arch = fopen("output.txt","wb");
    char hola[] = "Hola mundo!";
    fwrite(&hola,sizeof(hola),1,arch);
    fprintf(stdout, hola);
    return 0;
}
