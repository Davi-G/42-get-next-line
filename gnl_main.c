/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagomez <dagomez@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:21:26 by dagomez           #+#    #+#             */
/*   Updated: 2022/05/31 16:33:32 by dagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd;
    char    *temp;

    fd = open("/Users/dagomez/Desktop/42/Cursus/Get_Next_Line/fd.txt", O_RDONLY);
    temp = get_next_line(fd);
    printf("%s", temp);
    free(temp);
    while (temp)
    {  
        temp = get_next_line(fd);
        printf("%s", temp);
        free(temp);
    }
    return (0);
}