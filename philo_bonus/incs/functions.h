/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:36:15 by dpestana          #+#    #+#             */
/*   Updated: 2022/06/07 15:30:04 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

// ESSENTIALS
int				check_input(int argc, char **argv);
int				program_over(t_data *data, int status);

// INICIALIZE
int				inicialize(t_data *data, int argc, char **argv);
void			inicialize_input(int argc, char **argv, t_data *data);
int				inicialize_philo(t_data *data);
int				inicialize_time(t_data *data);

// THREADS
int				th_create(t_data *data);
int				th_join(t_data *data);

// LIBFT_LIGHT
int				ft_atoi(const char *nptr);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlen(const char *s);

// ACTION
void			living(t_philo	*philo);
int				eating(t_philo *philo);
int				dying(t_philo *philo);

// FORK
int				time_to_get_fork(t_philo *philo);
int				take_forks(t_philo *philo);

// UTILS
int				printer(t_philo *philo, char *txt);
long long		set_time(t_data *data);
void			timmer(t_philo *philo,
					long long time_now_ms, long long time_to);
int				eat_enough(t_philo *philo);

// CHECK_END
int				philo_died(t_data *data);
int				no_hungry(t_data *data);

#endif
