#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 100 /* Total character in a URL allowed */

void build_index_url(const char *domain, char *index_url);
void build_index_url2(const char *domain, char *index_url);

int main()
{
    char domain[] = "knking.com";
    // adding +1 to ensure a byte of memory
    // reserved for the null character
    // so the compiler can treat it as a string
    char index_url[MSG_LEN + 1];


    build_index_url(domain, index_url);
    printf("%s\n", index_url);

    return 0;
}

// simple version using the function from the string.h library
void build_index_url2(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

// complicated version
void build_index_url(const char *domain, char *index_url)
{
    char prefix[] = "http://www.";
    char suffix[] = "/index.html";

    char *p = prefix;
    char *s = suffix;

    while(*index_url++ = *p++);
    // decrementing pointer to point back
    // to the null character('\0')
    // as the post increment of index_url
    // causes it to move one byte
    // further in the array during
    // the last execution of the while loop.
    index_url--;
    while(*index_url++ = *domain++);
    index_url--;
    while(*index_url++ = *s++);
}
