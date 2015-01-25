#ifndef CILINDER_H
#define CILINDER_H


class cilinder
{
    public:
        cilinder(float radius = 0,float height = 0){
            this->radius = radius;
            this->height = height;
            area = Getarea();
            volumen=Getvolumen();
        }

        float Getradius();
        void Setradius(float);
        float Getheight();
        void Setheight(float);
        float Getarea();
        void Setarea(float);
        float Getvolumen();
        void Setvolumen(float);


         virtual float Area(void);
         virtual float Volumen(void);
         virtual void  info(void);

    protected:
        float radius;
        float height;
        float area;
        float volumen;
    private:

};

#endif // CILINDER_H
