#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *file;
    file = fopen("/dev/stdout", "w+");

    for ( int i=0; i < 5; i++ ) {
        fputs("Hello world.\n", file);
    }

    fclose(file);

    return 0;
}
