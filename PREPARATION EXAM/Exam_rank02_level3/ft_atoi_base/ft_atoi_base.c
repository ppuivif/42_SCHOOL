convert_digit(char *c, int str_base)
{
    int nbr;

    nbr = 0;
    if (str_base <= 10)
    { 
        if (c >= '0' && c <= '9' && c - 48 < str_base)
        nbr = c - 48
    }

}



int ft_atoi_base(const char *str, int str_base)
{
    int i;
    int nbr;
    int sign;

    i = 0;
    nbr = 0;
    sign = 1;
    if (!str || str_base <= 0 || str_base > 16)
        return (NULL);
    while (str[i] && (str[i] == 45 || str[i] == 43))
    {
        if (str[i] == 45)
            sign *= -1;
        i++;
    while (str[i] && (str[i] >= '0' || str[i] <= '9' || str[i] >= 'a')
        if 


    return (nbr * sign);
}

#include <stdio.h>

int main(void)
{
    printf(ft_atoi_base("123456", 10))
    return (0);
}