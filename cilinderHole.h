#ifndef CILINDERHOLE_H
#define CILINDERHOLE_H
#include "cilinder.h"



class cilinderHole : public cilinder
{
    public:
        cilinderHole(float radius = 0, float height = 0,float radiusInt = 0):cilinder(radius,height){
            this->radiusInt = radiusInt;
            area = Getarea();
            volumen=Getvolumen();
        }

          float Area(void);
          float Volumen(void);
          void  info(void);

        float GetradiusInt() { return radiusInt; }
        void SetradiusInt(float val) { radiusInt = val; }
    protected:

    private:
        float radiusInt;
};

#endif // CILINDERHOLE_H
