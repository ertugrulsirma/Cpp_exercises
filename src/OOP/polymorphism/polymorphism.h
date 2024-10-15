#ifndef POLYMORPHISM_H 
#define POLYMORPHISM_H

#include <iostream>

class Shape2 {
  public:
  virtual float get_area();
};

class Rectangle2 : public Shape2 {
  private:
  float width;
  float height;

  public:
  Rectangle2(float wid, float heigh);
  float get_area();
};

class Circle2 : public Shape2 {
  private:
  float radius;

  public:
  Circle2(float rad);
  float get_area();
};

#endif
