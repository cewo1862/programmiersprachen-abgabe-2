
#include <iostream>
#include "mat2.hpp"
#include "vec2.hpp"
#include <cmath>

Mat2::Mat2(): a11{1}, a12{0}, a21{0},a22{1} {} 
Mat2::Mat2(float a, float b, float c, float d):a11{a},a12{b},a21{c},a22{d} {}
Mat2& Mat2::operator*=(Mat2 const& v){
	a11=a11*v.a11+a12*v.a21;		
	a12=a11*v.a12+a12*v.a22;
	a21=a21*v.a11+a22*v.a21;
	a22=a21*v.a12+a22*v.a22;
	return *this;
}

float Mat2::det() const{
	return a11*a22-a12*a21;
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2){
	float a=m1.a11*m2.a11+m1.a12*m2.a21;
	float b=m1.a11*m2.a12+m1.a12*m2.a22;
	float c=m1.a21*m2.a11+m1.a22*m2.a21;
	float d=m1.a21*m2.a12+m1.a22*m2.a22;
	return Mat2 {a,b,c,d};
}

Vec2 operator*(Mat2 const& m, Vec2 const& v){
	return Vec2 {m.a11*v.x+m.a12*v.y,m.a21*v.x+m.a22*v.y};
}

Mat2 inverse(Mat2 const& m){
	Mat2 i;
	i.a11 = (1/m.det())*m.a22;
	i.a12 = (1/m.det())*-1*(m.a12);
	i.a21 = (1/m.det())*-1*(m.a21);
	i.a22 = (1/m.det())*(m.a11);
	return i;
}

Mat2 transpose(Mat2 const& m){
	Mat2 t;
	t.a11=m.a11;
	t.a12=m.a21;
	t.a21=m.a12;
	t.a22=m.a22;
	return t;
}

Mat2 make_rotation_mat2(float phi){
	Mat2 r;
	r.a11=cos(phi);
	r.a12=-1*sin(phi);
	r.a21=sin(phi);
	r.a22=cos(phi);
	return r;
}