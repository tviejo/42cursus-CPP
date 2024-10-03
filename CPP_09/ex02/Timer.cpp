/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Timer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:30:39 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/03 17:38:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Timer.hpp"

Timer::Timer(void)
{
    end.tv_sec = 0;
    end.tv_nsec = 0;
    start.tv_sec = 0;
    start.tv_nsec = 0;
}

Timer::~Timer(void)
{
}

Timer::Timer(const Timer &src)
{
    *this = src;
}

Timer &Timer::operator=(const Timer &src)
{
    if (this != &src)
    {
        start = src.start;
        end = src.end;
    }
    return (*this);
}

void Timer::startTimer(void)
{
    if (start.tv_sec != 0 || start.tv_nsec != 0)
        return;
    clock_gettime(CLOCK_REALTIME, &start);
}

void Timer::stopTimer(void)
{
    if (end.tv_sec != 0 || end.tv_nsec != 0)
        return;
    clock_gettime(CLOCK_REALTIME, &end);
}

double Timer::getElapsedTimeSeconds(void)
{
    return ((end.tv_sec - start.tv_sec));
}

double Timer::getElapsedTimeMilliseconds(void)
{
    return ((end.tv_nsec - start.tv_nsec) / 1000000);
}

double Timer::getElapsedTimeMicroseconds(void)
{
    return ((end.tv_nsec - start.tv_nsec) / 1000);
}