/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:30:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/03 17:36:31 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMER_HPP
# define TIMER_HPP

# include <iostream>
# include <string>
# include <ctime>

class Timer
{
    public:
        Timer(void);
        ~Timer(void);
        Timer(const Timer &src);
        Timer &operator=(const Timer &src);
        void startTimer(void);
        void stopTimer(void);
        double getElapsedTimeSeconds(void);
        double getElapsedTimeMilliseconds(void);
        double getElapsedTimeMicroseconds(void);
    private:
        struct timespec start;
        struct timespec end;
};

#endif