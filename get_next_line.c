/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:21:26 by migonzal          #+#    #+#             */
/*   Updated: 2021/11/18 09:44:28 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char *ft_strdup(char *s)
{
	char	*ret;
	int	i;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (*s)
		ret[i++] = *s++;
	ret[i] ='\0';
	return (ret);
}

int search(char *s, char c)
{
	while(*s)
		if (*s++ == c)
			return (1);
	return (0);
}

char *ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	int	i;

	ret (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (*s1)
		ret[i++] = *s1++;
	while (*s2)
		ret[i++] = *s2++;
	ret[i] ='\0';
	return (ret);
}
