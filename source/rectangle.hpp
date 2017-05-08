#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "color.hpp"
#include "window.hpp"
#include "vec2.hpp"
struct Point2D{
	float x,y;
};
class Rectangle{
public:
	Rectangle();
	Rectangle(Vec2 const& v,float w, float h,Color const& c);
	void setHeight(float h);
	void setWidth(float w);
	void setColor(Color clr_);
	float getHeight() const;
	float getWidth() const;
	float getArea() const;
	float getCircumreference() const;
	Color getColor() const;
	void draw(Window& w, float c, Point2D s);
	void draw(Window& w, float c);
	void draw(Window& w, Point2D s); 
	void draw(Window& w); 
private:
	float w;
	float h;
	Color clr;
	float c;
	Vec2 v;
	Point2D s;
};
#endif