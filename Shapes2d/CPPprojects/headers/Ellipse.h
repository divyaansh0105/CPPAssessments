
#include <iostream>

class Ellipse
{
    private:
        float majorAxisEll, minorAxisEll, areaEll, circumferenceEll;
    
    public:
        Ellipse();
        void dimEll(float majorAx, float minorAX);
        float areaOfEll();
        float circumferenceOfEll();
};


