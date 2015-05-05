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
