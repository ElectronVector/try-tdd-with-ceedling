#include "unity.h"
#include "lights.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_WhenTheHeadlightSwitchIsOff_ThenTheHeadLightsAreOff(void)
{
  // When the headlight switch is off...
  lights_SetHeadlightSwitchOff();
  // then the headlights are off.
  TEST_ASSERT_EQUAL(false, lights_AreHeadlightsOn());
}

void test_WhenTheHeadlightSwitchIsOn_ThenTheHeadLightsAreOn(void)
{
  // When the headlight switch is on...
  lights_SetHeadlightSwitchOn();
  // then the headlights are on.
  TEST_ASSERT_EQUAL(true, lights_AreHeadlightsOn());
}