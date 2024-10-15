#include <iostream>

class Shape4 {
  public:
  virtual float getArea() = 0;
};

class Rectangle4 : public Shape4 {   
  private:
  float width;
  float height;

  public:
  Rectangle4(float wid, float heigh) {
    width = wid;
    height = heigh;
  }
  float getArea(){
    return width * height; 
  }
};

class Circle4 : public Shape4 {
  private:
  float radius;

  public:
  Circle4(float rad){
    radius = rad; 
  }
  float getArea(){
    return 3.14159f * radius * radius; 
  }
};

class Square4 : public Shape4 {
  private:
  float length;

  public:
  Square4(float len){
    length = len;
  }
  float getArea(){
    return length * length; 
  }
};