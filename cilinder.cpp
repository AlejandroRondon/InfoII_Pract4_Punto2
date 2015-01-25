#include "cilinder.h"
#include <math.h>
#include "iostream."

using namespace std;
float cilinder::Area(void){
    float temp_area;
    temp_area =  (2*M_PI * pow(radius,2)) + (height*M_PI*2*radius);
    return temp_area;
}
float cilinder::Volumen(void){
    float temp_volumen;
    temp_volumen = M_PI * pow(radius,2) * height;
    return temp_volumen;
}
void  cilinder::info(void){
    cout<<"\nCILINDER INFORMATION: "  << endl;
    cout<<"Radius: "<< radius  << endl;
    cout<<"Height: "<< height  << endl;
    cout<<"Area: "<< Area()  << endl;
    cout<<"Volumen: "<< Volumen()  << endl;
}



float cilinder::Getradius() { return radius; }
void cilinder::Setradius(float val) { radius = val; }
float cilinder::Getheight() { return height; }
void cilinder::Setheight(float val) { height = val; }
float cilinder::Getarea() { return area; }
void cilinder::Setarea(float val) { area = val; }
float cilinder::Getvolumen() { return volumen; }
void cilinder::Setvolumen(float val) { volumen = val; }
