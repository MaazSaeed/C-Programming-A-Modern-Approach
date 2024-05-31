#include <stdio.h>
#include <stdlib.h>

void create_phone_number(char phnum[15], char nums[10]);

int main()
{
    char phnum[16];
    const char num[11] = { 0, 3, 0, 0, 1, 1, 9, 9, 3, 5, 5};

    create_phone_number(phnum, num);
    printf("%s", phnum);

    return 0;
}
void create_phone_number(char phnum[15], char nums[11])
{
    phnum[0] = '(';
    phnum[1] = nums[0] + '0';
    phnum[2] = nums[1]+ '0';
    phnum[3] = nums[2]+ '0';
    phnum[4] = ')';
    phnum[5] = ' ';
    phnum[6] = nums[3]+ '0';
    phnum[7] = nums[4]+ '0';
    phnum[8] = nums[5]+ '0';
    phnum[9] = '-';
    phnum[10] = nums[6]+ '0';
    phnum[11] = nums[7]+ '0';
    phnum[12] = nums[8]+ '0';
    phnum[13] = nums[9]+ '0';
    phnum[14] = nums[10]+ '0';
    phnum[15] = '\0';
}
