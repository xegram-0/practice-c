#include <stdio.h>

int main (int argc, char *argv[]) {
    // has to be "" instead of ''
    // r to read
    // a to append (not overwrite the contents)
    FILE *theFile = fopen("lesson13File.txt", "w");
    fprintf(theFile, "This is testing the file by using c");
    fclose(theFile);
    /*
    if(remove("lesson13File.txt") ==0){
        printf("The file was deleted.\n");
    }
    else{
        printf("No file was deleted.\n");
    }
    */
    

    return 0;
}