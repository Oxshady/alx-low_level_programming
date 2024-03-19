#include "main.h"
#include <stdlib.h>
char *_strstr(char *haystack, char *needle)
{
	char *start = NULL;

    if (*needle == '\0')
        return (haystack);
    
    while (*haystack) {
        start = haystack; 
        while (*haystack && *needle && *haystack == *needle) {
            haystack++;
            needle++;
        }
        
        if (*needle == '\0')
            return (start); 

        haystack = start + 1;
        needle = needle - (haystack - start);
    }
    
    return (NULL); 
}