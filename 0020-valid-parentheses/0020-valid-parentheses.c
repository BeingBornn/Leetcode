// to check the first open brackets.
int checkChar(char c)
{
    return(c == '(' || c == '[' || c == '{');
}

bool isValid(char* s) {
    int n = 0;
    char *stack = malloc(strlen(s) + 1);
 
    while(*s)
    {
        if(checkChar(*s))
            stack[n++] = *s;
        else
        {
            if(n == 0)
                return false;
            char c = stack[--n];
            if((c == '(' && *s != ')') || (c == '[' && *s != ']') || (c == '{' && *s != '}'))
                return false;
        }
        s++;
    }
    bool valid = (n == 0);
    free(stack);
    return (valid);
}