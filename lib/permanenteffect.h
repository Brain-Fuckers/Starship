#ifndef PERMANENTEFFECT_H
#define PERMANENTEFFECT_H
#include "effect.h"

class PermanentEffect : public Effect
{
private:
    int Type;
    double Rate;
    double t1, t2;
public:
    PermanentEffect();
    PermanentEffect(double _Rate, double _Time);
    void init(double _Rate, double _Time);
    double rate();
    double duration();
    double value();
    double time();
};

#endif // PERMANENTEFFECT_H
