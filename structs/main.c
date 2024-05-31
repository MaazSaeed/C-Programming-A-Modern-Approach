#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 20

// structures in C
typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part;

void print_part(Part p)
{
    printf("Part Name: %s\n",p.name);
    printf("Part Number: %d\n",p.number);
    printf("Total parts: %d\n",p.on_hand);
}

Part build_part(const char *name, const int part_number, const int on_hand)
{
    Part p;

    strcpy(p.name, name);
    p.number = part_number;
    p.on_hand = on_hand;

    return p;
}

int main()
{

    struct
    {
        int a[10];
    }a1 = {.a = {1, 3, 4}}, a2;

    a2 = a1;

    //printf("%d", a2.a[2]);

    Part part3 = {.number = 31, .name = "Newbie", .on_hand = 1};
    #if 0
    struct Part // "Part" is the structure tag, allowing us to further create structs of type Part.
    {
        int number;
        char name[NAME_LEN + 1];
        int on_hand;
    } part1 = {.number = 69, .name = "DISK", .on_hand = 12}
    , part2 = {.number = 19, .name = "LASER", .on_hand = 22};

    struct Part part3 = {.number = 31, .name = "Newbie", .on_hand = 1};
    #endif // 0

    //print_part(part3);
    Part part4 = build_part("r301", 69, 169);
    print_part(part4);
    //printf("%s\n", part3.name);

    return 0;
}

