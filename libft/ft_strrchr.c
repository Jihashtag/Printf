/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 09:13:48 by jbert             #+#    #+#             */
/*   Updated: 2015/03/03 09:17:09 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c)
{
	unsigned int	i;
	unsigned int	v;

	i = 0;
	v = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			v = i;
		i++;
	}
	if ((char)c == '\0')
		return (&s[i]);
	return (&s[v]);
}
