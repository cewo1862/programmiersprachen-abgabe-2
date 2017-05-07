#include <iostream>
#include "rectangle.hpp"
#include "color.hpp"
#include "window.hpp"
#include "vec2.hpp"
Rectangle::Rectangle(): v{}, clr{c} {}
Rectangle::Rectangle(Vec2 v, Color const& c): v{v},clr{c} {
	float a=v.x
	float b=v.y
	if (a<=0||b<=0){
		w=4.0;
		h=5.0;
	}
}
void Rectangle::setHeight(float a){
	if (a<=0){
		h=4.0;
	}
	else{
		h=a;
	}
}
void Rectangle::setWidth(float a){
	if (a<=0){
		w=5.0;
	}
	else{
		w=a;
	}
}
void Rectangle::setColor(Color x){
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
float Rectangle::getHeight() const{
	return h;
}
float Rectangle::getWidth() const{
	return w;
}
float Rectangle::getCircumreference() const{
	return 2*(w+h);
}
float Rectangle::getArea() const{
	return w*h;
}
Color Rectangle::getColor() const{
	return clr;
}
void Rectangle::draw(Window& win,float c)
{
	win.draw_line(0.1,0.1,0.1,0.1+a/c,clr.r,clr.g,clr.b);
	win.draw_line(0.1,0.1,0.1+b/c,0.1,clr.r,clr.g,clr.b);
	win.draw_line(0.1+b/c,0.1,0.1+b/c,0.1+a/c,clr.r,clr.g,clr.b);
	win.draw_line(0.1,0.1+a/c,0.1+b/c,0.1+a/c,clr.r,clr.g,clr.b);
}
void Rectangle::draw(Window& win,float c, Point2D s)
{
	win.draw_line(s.x,s.y,s.x,s.y+a/c,clr.r,clr.g,clr.b);
	win.draw_line(s.x,s.y,s.x+b/c,s.y,clr.r,clr.g,clr.b);
	win.draw_line(s.x+b/c,s.y,s.x+b/c,s.y+a/c,clr.r,clr.g,clr.b);
	win.draw_line(s.x,s.y+a/c,s.x+b/c,s.y+a/c,clr.r,clr.g,clr.b);
}
void Rectangle::draw(Window& win)
{
	win.draw_line(0.1,0.1,0.1,0.1+a/100,clr.r,clr.g,clr.b); 
	win.draw_line(0.1,0.1,0.1+b/100,0.1,clr.r,clr.g,clr.b); 
	win.draw_line(0.1+b/100,0.1,0.1+b/100,0.1+a/100,clr.r,clr.g,clr.b); 
	win.draw_line(0.1,0.1+a/100,0.1+b/100,0.1+a/100,clr.r,clr.g,clr.b); 
}
void Rectangle::draw(Window& win, Point2D s) 
{
	win.draw_line(s.x,s.y,s.x,s.y+a/100,clr.r,clr.g,clr.b); 
	win.draw_line(s.x,s.y,s.x+b/100,s.y,clr.r,clr.g,clr.b); 
	win.draw_line(s.x+b/100,s.y,s.x+b/100,s.y+a/100,clr.r,clr.g,clr.b); 
	win.draw_line(s.x,s.y+a/100,s.x+b/100,s.y+a/100,clr.r,clr.g,clr.b); 
}
