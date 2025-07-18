#ifndef TV_H_
#define TV_H_
#include <iostream>
class Remote;
class Tv
{
public:
    friend class Remote;
    enum
    {
        Off,
        On
    };
    enum
    {
        MinVal,
        MaxVal = 20
    };
    enum
    {
        Antenna,
        Cabel
    };
    enum
    {
        TV,
        DVD
    };

    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cabel), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }

    void contro(Remote & r);

private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

class Remote
{
private:
    int mode;
    friend class Tv;
    std::string control;

public:
    Remote(int m = Tv::TV, std::string ct = "常规") : mode(m), control(ct) {}
    void show_control() { std::cout << "contro_mode: " << control << std::endl; }
};

void Tv::contro(Remote & r)
{
    if (state == On && r.control == "常规")
        r.control = "互动";
    else if (state == On && r.control == "互动")
        r.control = "常规";
}
#endif