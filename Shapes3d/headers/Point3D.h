#pragma once

class Point3D
{
    public :    Point3D();
                Point3D(float x,float y,float z);
                
                float get_x();
                float get_y();
                float get_z();
                void set_x(float x);
                void set_y(float y);
                void set_z(float z);
  



    private:
                float mX,mY,mZ;
};