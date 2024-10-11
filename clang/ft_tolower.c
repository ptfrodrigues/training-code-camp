#include <stdio.h>

char ft_tolower(char ch){
    if(ch >= 'A' && ch<= 'Z')
        ch = ch + 32;
    return ch;
}