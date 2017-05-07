#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "color.hpp"
#include "window.hpp"
struct Point2D{
	float x,y;
};
class Circle{
public:
	Circle();
	Circle(float r_, Color const& clr_);
	void setRadius(float r_);
	void setColor(Color clr_);
	float getRadius() const;
	float getArea() const;
	float getCircumreference() const;
	Color getColor() const;
	Point2D getCenter() const;
	void draw(Window& w, float c, Point2D ctr);
	void draw(Window& w, float c);
	void draw(Window& w, Point2D ctr); 
	void draw(Window& w); 
private:
	float r;
	Color clr;
	Point2D ctr;
};

#endif