#include "duration.hpp"
#include <assert.h>

// Returns time variable
int Duration::getDuration()
{
/* complete this method */
return time;
}


/*
Original inizialization of Duration
Duration::Duration()
{
    time = 0;
} 
*/

// Sets time variable
Duration::Duration(int t)
{
    assert(t>=0);
    time = t;
}

// Dialate the time by 1
void Duration::tick()
{
    time++;
}

// Dialates the time by integer input
void Duration::tick_input(int dt)
{
    assert(dt >= 0);
    time = time + dt;
}

// Dialates the time by integer input, and assesses whether or not the alarm whent off.
bool Duration::tick_alarm(int dt)
{
    assert(dt >= 0);
    time = time + dt;
    return checkAndUpDateAlarm();
}

// Checks and updates the alarm
bool Duration::checkAndUpDateAlarm()
    {
        if(time >= alarm && alarmHasBeenSet == true)
        {
        alarmHasBeenSet = false;
        return true;
        }
        else
        {
        return false;
        }
    }

// Sets alarm time
void Duration::setAlarm(int t)
{
    assert(t >= 0 && t > time);
    alarm = t;
    alarmHasBeenSet = true;
}
