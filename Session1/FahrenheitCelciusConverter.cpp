#include "FahrenheitCelciusConverter.h"

float FahrenheitToCelsius(float FahrenheitDegrees)
{
    return (FahrenheitDegrees - 32) * (5.f / 9.f);
}

float CelsiusToFahrenheit(float CelsiusDegrees)
{
    return (CelsiusDegrees * 9.f / 5.f) + 32.f;
}
