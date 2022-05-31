#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void process(char *result, char *S)
{
    int j = 0;
    int len = strlen(S);
    for (int i = 0; i < len; i++)
    {
        if (S[i] != '#')
        {
            result[j] = S[i];
            j++;
        }
        else
        {
            if (j > 0)
            {
                result[j] = '\0';
                j--;
            }
        }
    }
    result[j] = '\0';
}

bool backspaceCompare(char *S, char *T)
{

    int len_T = strlen(T);
    int len_S = strlen(S);
    char result_S[len_S];
    char result_T[len_T];
    process(result_S, S);
    process(result_T, T);
    return strcmp(result_S, result_T) == 0;
}

int main(int argc, char const *argv[])
{
    char *S = "ab#c";
    char *T = "ad#c";
    bool res = backspaceCompare(S, T);
    printf("%d\n", res);
    return 0;
}
