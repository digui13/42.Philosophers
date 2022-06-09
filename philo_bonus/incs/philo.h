/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:37:04 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 19:06:55 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>    // read, write & usleep
# include <stdlib.h>    // malloc, free & exit
# include <sys/time.h>  // gettimeofday
# include <stdio.h>     // printf
# include <pthread.h>   // pthread functions
# include <semaphore.h>
# include <signal.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <sys/stat.h>
# include "structs.h"
# include "functions.h"

// MACROS

# define SUCCESS        0
# define FAIL           1

# define NO				0
# define YES			1

# define CONTINUE		0
# define END			1

#endif