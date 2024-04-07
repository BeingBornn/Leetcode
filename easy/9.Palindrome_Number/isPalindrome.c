#include <stdio.h>
#include <stdbool.h>

// function to get the number of the digit
int get_digit(int  n)
{
    unsigned int    i;

    i = 1;
    while(n != 0)
    {
        n /= 10;
        if(n != 0)
            i++;
    }
    return (i);
}

bool isPalindrome(int x)
{
    if(x < 0)
        return (false);
    if(x < 10)
        return (true);
    int i;
    int j;
    int digit;

    digit = get_digit(x);
    char str[digit + 1];
    sprintf(str, "%d", x);
    i = 0;
    j = digit - 1;

    if(x > 9)
    {
        while(i < digit / 2)
        {
            if(str[i] != str[j])
                return(false);
            i++;
            j--;  
        }
    }
    return (true);
}

int main()
{
	int num;
	
	num = 12321;
	if (isPalindrome(num))
		printf("%d is a palindrome.\n", num);
	else
		printf("%d is not a palindrome.\n", num);
	return 0;
}
