#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    public:
        Rectangle();
        virtual ~Rectangle();
        double surface(double ,double);
        double getLongueur(int);
        double getLargeur(int);
        void setLongueur(double);
        void setLargeur(double);

    protected:

    private:
        double longueur;
        double largeur;
};

#endif // RECTANGLE_H
