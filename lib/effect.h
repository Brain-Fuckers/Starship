#ifndef EFFECT_H
#define EFFECT_H


class Effect
{
private:
    int Type;
//    double Duration;
    double Value;
    double t1, t2;
public:
    Effect();
    Effect(double _Value, double _Time, double _Duration);
    void init(double _Value, double _Time, double _Duration);
    double rate();
    double duration();
    double value();
    double time();
};

#endif // EFFECT_H
