#include <stdio.h>

int main (int argc, char *argv[]) {
    // has to be "" instead of ''
    // r to read
    // a to append (not overwrite the contents)
    FILE *theFile = fopen("lesson13File.txt", "w");
    fprintf(theFile, "This is testing the file by using c");
    fclose(theFile);

    return 0;
}