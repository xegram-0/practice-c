#include <stdio.h>

int main (int argc, char *argv[]) {
    // you can still use x += 1
    // and x -= 1, x *= 2, x /= 5, x %= 2
    
    float weight;
    printf("How much do you weigh? \n");
    // if you put \n, it would weird out the program input
    // leave it like this make thing easier
    scanf("%f", &weight);
    printf("So you are %.1f in kilograms.", weight);
    fgets();

    return 0;
}