#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool cheakpangram(char str[])
{
    int index;
    bool mark[26];
    for (int i = 0; i < 26; i++)
    {
        mark[i] = false;
        size_t size = strlen(str);
        for (int i = 0; i < size; i++)
        {
            if ('A' <= str[i] && str[i] <= 'Z')
                index = str[i] - 'A';
            else if ('a' <= str[i] && str[i] <= 'z')
                index = str[i] - 'a';
            else
                continue;
            mark[index] = true;
        }
    }
    for(int i =0;i<=25;i++){
        if(mark[i]== false)
        return(false);
        return(true);
    }
}

int main()
{
char str[] = "The quick brown for jumps over the lazy dog";
if(cheakpangram(str) == true)
printf("%s is a pangram",str);
else
printf("%s is not a pangram",str);

return 0;
}