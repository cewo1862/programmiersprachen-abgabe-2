#include <iostream>
#include "rectangle.hpp"
#include "color.hpp"
#include "window.hpp"
#include "vec2.hpp"
Rectangle::Rectangle(): v{}, clr{c} {}
Rectangle::Rectangle(Vec2 const& v,float w,float h,Color const& c): v{v},w{0.0},h{0.0},clr{c} {
	w=v.x;
	h=v.y;
	if (w<=0||h<=0){
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
	win.draw_line(0.1,0.1,0.1,0.1+w/c,clr.r,clr.g,clr.b);
	win.draw_line(0.1,0.1,0.1+h/c,0.1,clr.r,clr.g,clr.b);
	win.draw_line(0.1+h/c,0.1,0.1+h/c,0.1+w/c,clr.r,clr.g,clr.b);
	win.draw_line(0.1,0.1+w/c,0.1+h/c,0.1+w/c,clr.r,clr.g,clr.b);
}
void Rectangle::draw(Window& win,float c, Point2D s)
{
	win.draw_line(s.x,s.y,s.x,s.y+w/c,clr.r,clr.g,clr.b);
	win.draw_line(s.x,s.y,s.x+h/c,s.y,clr.r,clr.g,clr.b);
	win.draw_line(s.x+h/c,s.y,s.x+h/c,s.y+w/c,clr.r,clr.g,clr.b);
	win.draw_line(s.x,s.y+w/c,s.x+h/c,s.y+w/c,clr.r,clr.g,clr.b);
}
void Rectangle::draw(Window& win)
{
	win.draw_line(0.1,0.1,0.1,0.1+w/100,clr.r,clr.g,clr.b); 
	win.draw_line(0.1,0.1,0.1+h/100,0.1,clr.r,clr.g,clr.b); 
	win.draw_line(0.1+h/100,0.1,0.1+h/100,0.1+w/100,clr.r,clr.g,clr.b); 
	win.draw_line(0.1,0.1+w/100,0.1+h/100,0.1+w/100,clr.r,clr.g,clr.b); 
}
void Rectangle::draw(Window& win, Point2D s) 
{
	win.draw_line(s.x,s.y,s.x,s.y+w/100,clr.r,clr.g,clr.b); 
	win.draw_line(s.x,s.y,s.x+h/100,s.y,clr.r,clr.g,clr.b); 
	win.draw_line(s.x+h/100,s.y,s.x+h/100,s.y+w/100,clr.r,clr.g,clr.b); 
	win.draw_line(s.x,s.y+w/100,s.x+h/100,s.y+w/100,clr.r,clr.g,clr.b); 
}
