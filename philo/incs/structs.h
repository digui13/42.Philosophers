/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:12:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/06 15:16:43 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

//     ------------     
//        INPUT         
//     ------------     
typedef struct s_input_data
{
	int				qty;
	long long int	time_die;
	long long int	time_eat;
	long long int	time_sleep;
	int				must_eat;
}	t_input_data;

//     ------------------     
//        philo         
//     ------------------     
typedef struct s_philo
{
	pthread_t		thread;
	struct s_data	*data;
	int				idx;
	int				meals;
	long long int	last_meal;
}	t_philo;

//     -----------     
//        TIME         
//     -----------     
typedef struct s_simulation_time
{
	struct timeval	begin;
	struct timeval	now;
	long long int	now_ms;
}	t_simulation_time;

//     -----------     
//        MUTEX         
//     -----------   
typedef struct s_mutex
{
	pthread_mutex_t		*fork;
	pthread_mutex_t		print;
	pthread_mutex_t		eat;
	pthread_mutex_t		death;
}	t_mutex;

//     -----------     
//        DATA         
//     -----------     
typedef struct s_data
{
	t_input_data		input;
	t_mutex				mutex;
	t_simulation_time	time;
	t_philo				*philo;
	int					died;
}	t_data;

#endif