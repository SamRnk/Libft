/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:11:28 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/10 20:11:18 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>
*/
#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			ch;
	char			*str;
	char			*save_ch;
	size_t			i;

	ch = (unsigned char) c;
	str = (char *) s;
	i = 0;
	save_ch = 0;
	while (ch == '\0')
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			save_ch = str + i;
		i++;
	}
	return (save_ch);
}
/*
int	main(void)
{
	char	str1[] = "lahho!";
	char	str2[] = "lahho!";

	printf("OG: %s\n", strrchr(str1, '\0'));
	printf("DIY: %s\n", ft_strrchr(str2, '\0'));
}*/
