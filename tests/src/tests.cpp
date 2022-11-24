#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "duration.hpp"


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 

    TEST_CASE("Duration test")
    {
    
    // Duration test
    Duration eight(8);
    REQUIRE(eight.getDuration() == 8);
    Duration toogtreidve(32);
    REQUIRE(toogtreidve.getDuration() == 32);
    Duration nioghalvfems(99);
    REQUIRE(nioghalvfems.getDuration() == 99);
    Duration hojt_tal(34567);
    REQUIRE(hojt_tal.getDuration() == 34567);

    // Tick test
    eight.tick();
    REQUIRE(eight.getDuration() == 9);
    toogtreidve.tick();
    REQUIRE(toogtreidve.getDuration() == 33);
    nioghalvfems.tick();
    REQUIRE(nioghalvfems.getDuration() == 100);
    hojt_tal.tick();
    REQUIRE(hojt_tal.getDuration() == 34568);
    
    // Tick_input test
    eight.tick_input(5);
    REQUIRE(eight.getDuration() == 14);
    toogtreidve.tick_input(7);
    REQUIRE(toogtreidve.getDuration() == 40);
    nioghalvfems.tick_input(200);
    REQUIRE(nioghalvfems.getDuration() == 300);
    hojt_tal.tick_input(1);
    REQUIRE(hojt_tal.getDuration() == 34569);

    // Tick_alarm test
    eight.setAlarm(18);
    REQUIRE(eight.tick_alarm(5)==true);
    toogtreidve.setAlarm(50);
    REQUIRE(toogtreidve.tick_alarm(7)==false);
    nioghalvfems.setAlarm(500);
    REQUIRE(nioghalvfems.tick_alarm(199) == false);
    hojt_tal.setAlarm(40000);
    REQUIRE(hojt_tal.tick_alarm(34567) == true);
    }