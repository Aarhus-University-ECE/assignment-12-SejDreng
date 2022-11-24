#include "duration.hpp"
#include <cassert>


// File for sandboxing and trying out code
int main()
{
    // Duration test
    Duration eight(8);
    assert(eight.getDuration() == 8);
    Duration toogtreidve(32);
    assert(toogtreidve.getDuration() == 32);
    Duration nioghalvfems(99);
    assert(nioghalvfems.getDuration() == 99);
    Duration hojt_tal(34567);
    assert(hojt_tal.getDuration() == 34567);

    // Tick test
    eight.tick();
    assert(eight.getDuration() == 9);
    toogtreidve.tick();
    assert(toogtreidve.getDuration() == 33);
    nioghalvfems.tick();
    assert(nioghalvfems.getDuration() == 100);
    hojt_tal.tick();
    assert(hojt_tal.getDuration() == 34568);
    
    // Tick_input test
    eight.tick_input(5);
    assert(eight.getDuration() == 14);
    toogtreidve.tick_input(7);
    assert(toogtreidve.getDuration() == 40);
    nioghalvfems.tick_input(200);
    assert(nioghalvfems.getDuration() == 300);
    hojt_tal.tick_input(1);
    assert(hojt_tal.getDuration() == 34569);

    // Tick_alarm test
    eight.setAlarm(18);
    assert(eight.tick_alarm(5)==true);
    toogtreidve.setAlarm(50);
    assert(toogtreidve.tick_alarm(7)==false);
    nioghalvfems.setAlarm(500);
    assert(nioghalvfems.tick_alarm(199) == false);
    hojt_tal.setAlarm(40000);
    assert(hojt_tal.tick_alarm(34567) == true);
    return 0;
}