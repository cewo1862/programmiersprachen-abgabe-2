#include <iostream>
#include "vec2.hpp"
Vec2::Vec2(): x{0}, y{0} {} 
Vec2::Vec2(float a, float b):x{a}, y{b} {}

Vec2& Vec2::operator+=(Vec2 const& v){
	x+=v.x;
	y+=v.y;
	return *this;
}
Vec2& Vec2::operator-=(Vec2 const& v){
	x-=v.x;
	y-=v.y;
	return *this;
}
Vec2& Vec2::operator*=(float v){
	x*=v;
	y*=v;
	return *this;
}
Vec2& Vec2::operator/(float v){
	if (v!=0){
		x=x/v;
		y=y/v;	
	}
	return *this;
}
Vec2 operator+(Vec2 const& u, Vec2 const& v){
	Vec2 result;
	result.x=u.x+v.x;
	result.y=u.y+v.y;
	return result;
}
Vec2 operator-(Vec2 const& u, Vec2 const& v){
	Vec2 result;
	result.x=u.x-v.x;
	result.y=u.y-v.y;
	return result;
}
Vec2 operator*(Vec2 const& u, float x){
	Vec2 result;
	result.x=u.x*x;
	result.y=u.y*x;
	return result;
}
Vec2 operator*(float x, Vec2 const& u){
	Vec2 result;
	result.x=x*u.x;
	result.y=x*u.y;
	return result;
}
Vec2 operator/(Vec2 const& u, float x){
	Vec2 result;
	result.x=u.x/x;
	result.y=u.y/x;
	return result;
}