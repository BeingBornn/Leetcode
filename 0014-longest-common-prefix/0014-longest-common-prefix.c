// return the common prefix size of the first two strings.
int find_common_size(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return(i);
}
// return the common prefix of the first two string.
char *find_prefix_two_str(char *s1, char *s2)
{
    char *res;
    int reslen;
    int i;

    if(!s1 || !s2)
        return(NULL);
    i = 0;
    reslen = find_common_size(s1, s2);
    res = (char *)malloc((reslen + 1) * sizeof(char));
    if(!res)
        return(NULL);
    while(s1[i] == s2[i] && s1[i] && s2[i])
    {
        res[i] = s1[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
// return the common prefix in amongst array of strings.
char* longestCommonPrefix(char** strs, int strsSize)
{
    if(strsSize == 0)
        return (NULL);
    if(strsSize == 1)
        return (strs[0]);
    int i;
    int j;
    int reslen;
    char *res;

    i = 2;
    res = find_prefix_two_str(strs[0],strs[1]);
    while(i < strsSize && res) // if res was Null the loop will stop early.
    {
        j = 0;
        while(j < strlen(res) && res[j] == strs[i][j])
            j++;
        res[j] = '\0';
        i++;
    }
    return (res);
}