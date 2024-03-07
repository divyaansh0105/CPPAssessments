#pragma once


    class Point2D
    {
    public:
        Point2D();
        Point2D(double x, double y);
        ~Point2D();

        double x() const;
        double y() const;

        void setX(double x);
        void setY(double y);
        bool operator<(const Point2D &other) const;
     
    private:
        double mX;
        double mY;
    };
