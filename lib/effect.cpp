#include "effect.h"

Effect::Effect()
{

}

Effect::Effect(double _Value, double _Time, double _Duration)
{
    init(_Value, _Time, _Duration);
}

void Effect::init(double _Value, double _Time, double _Duration)
{
    Value = _Value;
    t1 = _Time;
    t2 = _Time + _Duration;
}

double Effect::rate()
{
    return Value / duration();
}

double Effect::duration()
{
    return t2 - t1;
}

double Effect::value()
{
    return Value;
}

double Effect::time()
{
    return t1;
}

