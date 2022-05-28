#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *original;
    char *sorted;
} Pair;

int cmpChar(const void *a, const void *b)
{
    return *(const char *)a - *(const char *)b;
}

int cmpPair(const void *a, const void *b)
{
    const Pair *pa = (const Pair *)a;
    const Pair *pb = (const Pair *)b;
    return strcmp(pa->sorted, pb->sorted);
}

char ***groupAnagrams(char **strs, int strsSize, int *returnSize, int **returnColumnsizes)
{

    Pair *pairs = malloc(sizeof(Pair) * strsSize);

    for (int i = 0; i < strsSize; i++)
    {
        char *sorted_str = malloc(sizeof(char) * (strlen(strs[i]) + 1));
        strcpy(sorted_str, strs[i]);
        qsort(sorted_str, strlen(strs[1]), sizeof(char), cmpChar);

        pairs[i].original = strs[i];
        pairs[i].sorted = sorted_str;
    }
    qsort(pairs, strsSize, sizeof(Pair), cmpPair);
    for (size_t i = 0; i < strsSize; i++)
    {
        printf("%s: %s\n", pairs[i].original, pairs[i].sorted);
    }

    char ***returnResult = NULL;
    *returnSize = 0;
    *returnColumnsizes = NULL;

    return NULL;
}

int main(int argc, char const *argv[])
{
    /* code */
    char s[12] = "hello world";
    char *strs[6] = {"eat", "tea", "tan", "ate", "nat", "bat"};

    char ***res = groupAnagrams(strs, 6, NULL, NULL);

    return 0;
}
