#include "permanenteffect.h"

PermanentEffect::PermanentEffect()
{

}

PermanentEffect::PermanentEffect(double _Rate, double _Time)
{
    init(_Rate, _Time);
}

void PermanentEffect::init(double _Rate, double _Time)
{
    Rate = _Rate;
    t1 = _Time;
    t2 = -1;
}

double PermanentEffect::rate()
{
    return Rate;
}

double PermanentEffect::duration()
{
    return 0;
}

double PermanentEffect::value()
{
    return 0;
}

double PermanentEffect::time()
{
    return t1;
}

