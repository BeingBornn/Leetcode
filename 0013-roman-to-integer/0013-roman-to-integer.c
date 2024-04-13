int roman_dictionary(char c)
{
    if(c == 'I')
        return (1);
    if(c == 'V')
        return (5);
    if(c == 'X')
        return (10);
    if(c == 'L')
        return (50);
    if(c == 'C')
        return (100);
    if(c == 'D')
        return (500);
    if(c == 'M')
        return (1000);
    return (0);
}

int romanToInt(char* s) 
{
    int i;
    int result;

    result = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] == 'I' && (s[i+1] == 'V' || s[i + 1] == 'X'))
        {
            result += (roman_dictionary(s[i + 1]) - roman_dictionary(s[i]));
            i += 2;
        }
        else if(s[i] == 'X' && (s[i+1] == 'L' || s[i + 1] == 'C'))
        {
            result += (roman_dictionary(s[i + 1]) - roman_dictionary(s[i]));
            i += 2;
        }
        else if(s[i] == 'C' && (s[i+1] == 'D' || s[i + 1] == 'M'))
        {
            result += (roman_dictionary(s[i + 1]) - roman_dictionary(s[i]));
            i += 2;
        }
        else
        { 
            result += roman_dictionary(s[i]);
            i++;
        }
       
    }
    return (result);
}