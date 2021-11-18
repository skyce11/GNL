/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:05:23 by migonzal          #+#    #+#             */
/*   Updated: 2021/11/18 10:13:17 by migonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

size_t ft_strlen(const char *s);
char *ft_strdup(char *s);
int ft_charintstr(char *s, char c);
char *ft_strjoin(char *s1, char *s2);


char *get_next_line(int fd);
char *ft_realloc(char *tofree, char *newchar);
void *ft_freenull(char **ptr);
char *ft_strcut(char *s, char c, char **save);


#endif
