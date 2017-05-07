#ifndef VEC2_HPP
#define VEC2_HPP
class Vec2{
public:
	float x;
	float y;
	Vec2();
	Vec2(float a,float b);
	Vec2& operator += (Vec2 const& c);
	Vec2& operator -= (Vec2 const& c);
	Vec2& operator *= (float c);
	Vec2& operator / (float c);
};
Vec2 operator + (Vec2 const& c, Vec2 const& d);
Vec2 operator - (Vec2 const& c, Vec2 const& d);
Vec2 operator * (Vec2 const& c, float d);
Vec2 operator / (Vec2 const& c, float d);
Vec2 operator * (float c,Vec2 const& d);
#endif