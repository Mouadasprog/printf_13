/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-mah <mben-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:58:30 by mouad             #+#    #+#             */
/*   Updated: 2024/11/26 18:08:51 by mben-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char    *format, ...)
{
    va_list args;
    int printed_char;
    const char  *ptr;

    printed_char = 0;
    ptr = format;
    if(!format || write(1,0,0) == -1)
        return (-1);

    va_start(args,format);
    while(*ptr)
    {
        if(*ptr == '%')
        {
            ptr++;
            if(*ptr == 'd')
            {
                printed_char += ft_print_d(va_arg(args,int));
            }
            else if(*ptr == 's')
            {
                printed_char += ft_putstr(va_arg(args,char *));
            }
            else if(*ptr == 'c')
            {
                printed_char += ft_putchar(va_arg(args,int));
            }
            else if(*ptr == 'u')
            {
                printed_char += ft_print_u(va_arg(args,unsigned int));
            }
            else if(*ptr == 'i')
            {
                printed_char += ft_print_i(va_arg(args,int));
            }
            else if(*ptr == 'x')
            {
                printed_char += ft_puthexalow(va_arg(args,unsigned int));
            }
            else if(*ptr == 'p')
            {
                printed_char += ft_print_p(va_arg(args,void *));
            }
            else if(*ptr == 'X')
            {
                printed_char += ft_puthexaup(va_arg(args,int));
            }
            else if(*ptr == '%')
            {
                printed_char += ft_putchar('%');
            }
        }
        else
        {
            printed_char += ft_putchar(*ptr);
        }
        ptr++;
    } 
    va_end(args);
    return(printed_char);  
}