#include <iostream>
#include "circle.hpp"
#include <math.h>
#include "window.hpp"
Circle::Circle(): r{5}, clr{0.0} {}
Circle::Circle(float x, Color const& c): r{x}, clr{c} {
	if (r<=0){
		r=5;
	}
}
void Circle::setRadius(float x){
	r=x;
}
void Circle::setColor(Color x){
	if (x.r<0 || x.r>1){
			x.r = 0.0;
	}
	if (x.g<0 || x.g>1){
		x.g = 0.0;
	}
	if (x.b<0 || x.b>1){
		x.b = 0.0;
	}
	clr=x;
}
float Circle::getRadius() const{
	return r;
}
float Circle::getCircumreference() const{
	return 2*M_PI*r;
}
float Circle::getArea() const{
	return M_PI*r*r;
}
Color Circle::getColor() const{
	return clr;
}
Point2D Circle::getCenter() const{
	return ctr;
}
void Circle::draw(Window& w){
	for(float i = 0.0; i<= 2* M_PI; i += 0.01){
		w.draw_point(r/100*cos(i)+0.5, r/100*sin(i)+0.5, clr.r, clr.g, clr.b);
	}
}
void Circle::draw(Window& w, Point2D ctr){
	for(float i = 0.0; i<= 2* M_PI; i += 0.01){
		w.draw_point(r/100*cos(i)+ctr.x, r/100*sin(i)+ctr.y, clr.r, clr.g, clr.b);
	}
}
void Circle::draw(Window& w, float c){
	for(float i = 0.0; i<= 2* M_PI; i += 0.01){
		w.draw_point(r/c*cos(i)+0.5, r/c*sin(i)+0.5, clr.r, clr.g, clr.b);
	}
}
void Circle::draw(Window& w, float c, Point2D ctr){
	for(float i = 0.0; i<= 2* M_PI; i += 0.01){
		w.draw_point(r/c*cos(i)+ctr.x, r/c*sin(i)+ctr.y, clr.r, clr.g, clr.b);
	}
}