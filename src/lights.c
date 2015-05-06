#include "lights.h"
#include <stdbool.h>

static bool areLightsOn = false;

void lights_SetHeadlightSwitchOff(void)
{
    areLightsOn = false;
}

void lights_SetHeadlightSwitchOn(void)
{
    areLightsOn = true;
}

bool lights_AreHeadlightsOn(void)
{
  return areLightsOn;
}