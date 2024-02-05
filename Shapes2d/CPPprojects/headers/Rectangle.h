
#include <iostream>

class Rectangle
{
    private:
        int lengthRec, breadthRec, areaRec, perimeterRec;
    
    public:
        Rectangle();
        void dimRec(int len, int wid);
        int areaOfRec();
        int perimeterOfRec();
};

