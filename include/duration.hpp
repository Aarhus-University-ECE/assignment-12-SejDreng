
#pragma once
#include <time.h>

class Duration
{
    private:
        int time;
        int alarm;
        bool alarmHasBeenSet = false;
        bool checkAndUpDateAlarm();
    public:
        Duration(int t);

        int getDuration();
        void tick();
        void tick_input(int dt);
        bool tick_alarm(int dt);
        void setAlarm(int t);
};