#include <stdio.h>
#include <stdlib.h>



int main()
{
    int height, length, width, volume, weight;

    printf("Enter Length : ");
    scanf("%d", &length);
    printf("Enter Width: ");
    scanf("%d", &width);
    printf("Enter Height: ");
    scanf("%d", &height);

    volume = length * width * height;
    weight = (volume + 165) / 166;
    printf("\nDimensions: %dx%dx%d\n", length, width, height);
    printf("Volume(cubic units): %d\n", volume);
    printf("Dimensional Weight(units): %d\n", weight);



}
