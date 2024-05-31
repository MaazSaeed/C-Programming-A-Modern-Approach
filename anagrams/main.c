#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;)
    {
        // creates an array of zeros
        // {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        // {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z} < how the above array relates to this pseudo arrangement of numbers>

        int alphabets[26] = {0}; // the array stores the occurrence of the alphabets
        int anagrams = 1;

        printf("Enter first word: ");
        char ch;

        //the two while statements below evaluate the position of the particular alphabet in the alphabets, e.g 'c' corresponds to 3rd alphabet hence 3rd index in array
        while((ch = getchar()) != '\n')
        {
            alphabets[ch - 'a']++; // the expression increments the occurrence of each alphabet
        }

        printf("Enter second word: ");
        char ch2;
        while((ch2 = getchar()) != '\n')
        {
            alphabets[ch2 - 'a']--; // the expression decrements the occurrence of each alphabet
        }

        // if all the values in the array are zero, this indicates both the words have same number of alphabets
        for(int i = 0; i < 26; i++)
        {
            // if all values in the array are 0 then this implies that the words are anagrams
            if(alphabets[i] == 0) continue;
            else
            {
                anagrams = 0;
                break;
            }
        }

        if(anagrams) printf("anagrams");
        else printf("Not anagrams");

        printf("\n");
    }

    return 0;
}
