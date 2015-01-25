#include "cilinderHole.h"
#include "math.h"
#include "iostream"

using namespace std;

float cilinderHole::Area(void){
    float temp_area;
        temp_area =  2*M_PI*(pow(radius,2)-pow(radiusInt,2)) + 2*M_PI*height*(radius+radiusInt);
    return temp_area;
}
float cilinderHole::Volumen(void){
    float temp_volumen;
        temp_volumen = 2*M_PI *(pow(radius,2)-pow(radiusInt,2))* height;
    return temp_volumen;
}
void  cilinderHole::info(void){
    cout<<"\nCILINDER HOLE INFORMATION: "  << endl;
    cout<<"Radius: "<< radius  << endl;
    cout<<"Radius int: "<< radiusInt  << endl;
    cout<<"Height: "<< height  << endl;
    cout<<"Area: "<< Area()  << endl;
    cout<<"Volumen: "<< Volumen()  << endl;
}
