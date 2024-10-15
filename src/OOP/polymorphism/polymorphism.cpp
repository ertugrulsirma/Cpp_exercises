#include "polymorphism.h"

float Shape2::get_area() {}

Rectangle2::Rectangle2(float wid, float heigh) {
    width = wid;
    height = heigh;
  }

float Rectangle2::get_area(){
    return width * height; 
}

Circle2::Circle2(float rad){
    radius = rad; 
}

float Circle2::get_area(){
    return 3.14159f * radius * radius; 
}