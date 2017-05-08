#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "color.hpp"

			//Vektortests
TEST_CASE("describeDefaultVecConstructor","[DefaultVecConstructor]"){
	Vec2 v;
	REQUIRE(v.x == 0.0f);
	REQUIRE(v.y == 0.0f);
}

TEST_CASE("describeUserVecConstructor","[UserVecConstructor]"){
	Vec2 v{1.0,5.0};
	REQUIRE(v.x == Approx(1.0));
	REQUIRE(v.y == Approx(5.0));
}
TEST_CASE("describeAddVecSelf","[AddVecSelf]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	v1+=v2;
	REQUIRE(v1.x == Approx(1.3));
	REQUIRE(v1.y == Approx(5.5));
	v2+=v3;
	REQUIRE(v2.x == Approx(1.0));
	REQUIRE(v2.y == Approx(1.5));
}
TEST_CASE("describeSubVecSelf","[SubVecSelf]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	v1-=v2;
	REQUIRE(v1.x == Approx(0.7));
	REQUIRE(v1.y == Approx(4.5));
	v3-=v2;
	REQUIRE(v3.x == Approx(0.4));
	REQUIRE(v3.y == Approx(0.5));
}
TEST_CASE("describeMultVecSelf","[MultVecSelf]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	v1*=2.5;
	REQUIRE(v1.x == Approx(2.5));
	REQUIRE(v1.y == Approx(12.5));
	v2*=5.0;
	REQUIRE(v2.x == Approx(1.5));
	REQUIRE(v2.y == Approx(2.5));
	v3*=4.0;
	REQUIRE(v3.x == Approx(2.8));
	REQUIRE(v3.y == Approx(4.0));
}
TEST_CASE("describeDivVecSelf","[DivVecSelf]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	v1/2.0;
	REQUIRE(v1.x == Approx(0.5));
	REQUIRE(v1.y == Approx(2.5));
	v2/0.5;
	REQUIRE(v2.x == Approx(0.6));
	REQUIRE(v2.y == Approx(1.0));
	v3/1.0;
	REQUIRE(v3.x == Approx(0.7));
	REQUIRE(v3.y == Approx(1.0));
}
TEST_CASE("describeAddVec","[AddVec]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	Vec2 r1=v1+v2;
	REQUIRE(r1.x == Approx(1.3));
	REQUIRE(r1.y == Approx(5.5));
	Vec2 r2=v2+=v3;
	REQUIRE(r2.x == Approx(1.0));
	REQUIRE(r2.y == Approx(1.5));
	Vec2 r3=v3+=v1;
	REQUIRE(r3.x == Approx(1.7));
	REQUIRE(r3.y == Approx(6.0));
}
TEST_CASE("describeSubVec","[SubVec]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	Vec2 r1=v1-v2;
	REQUIRE(r1.x == Approx(0.7));
	REQUIRE(r1.y == Approx(4.5));
	Vec2 r2=v3-v2;
	REQUIRE(r2.x == Approx(0.4));
	REQUIRE(r2.y == Approx(0.5));
	Vec2 r3=v1-=v3;
	REQUIRE(r3.x == Approx(0.3));
	REQUIRE(r3.y == Approx(4.0));
}
TEST_CASE("describeMultVec","[MultVec]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	Vec2 r1=v1*2.5;
	REQUIRE(r1.x == Approx(2.5));
	REQUIRE(r1.y == Approx(12.5));
	Vec2 r2=v2*5.0;
	REQUIRE(r2.x == Approx(1.5));
	REQUIRE(r2.y == Approx(2.5));
	Vec2 r3=v3*=4.0;
	REQUIRE(r3.x == Approx(2.8));
	REQUIRE(r3.y == Approx(4.0));
}
TEST_CASE("describeDivVec","[DivVec]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.3,0.5};
	Vec2 v3{0.7,1.0};
	Vec2 r1=v1/2.0;
	REQUIRE(r1.x == Approx(0.5));
	REQUIRE(r1.y == Approx(2.5));
	Vec2 r2=v2/0.5;
	REQUIRE(r2.x == Approx(0.6));
	REQUIRE(r2.y == Approx(1.0));
	Vec2 r3=v3/1.0;
	REQUIRE(r3.x == Approx(0.7));
	REQUIRE(r3.y == Approx(1.0));
}
		//Matrixtests
TEST_CASE("describeDefaultMatConstructor","[DefaultMatConstructor]"){
	Mat2 m;
	REQUIRE(m.a11 == 1.0f);
	REQUIRE(m.a12 == 0.0f);
	REQUIRE(m.a21 == 0.0f);
	REQUIRE(m.a22 == 1.0f);
}
TEST_CASE("describeUserMatConstructor","[UserMatConstructor]"){
	Mat2 m{3.0,1.0,1.0,3.0};
	REQUIRE(m.a11 == 3.0f);
	REQUIRE(m.a12 == 1.0f);
	REQUIRE(m.a21 == 1.0f);
	REQUIRE(m.a22 == 3.0f);
}
TEST_CASE("describeMultMatSelf","[MultMatSelf]"){
	Mat2 m1{5.0,2.0,4.0,10.0};
	Mat2 m2{1.0,2.0,3.0,5.0};
	Mat2 m3{3.0,2.0,5.5,0.0};
	m1*=m2;
	REQUIRE(m1.a11==Approx(11.0f));
	REQUIRE(m1.a12==Approx(20.0f));
	REQUIRE(m1.a21==Approx(34.0f));
	REQUIRE(m1.a22==Approx(58.0f));
	m2*=m3;
	REQUIRE(m2.a11==Approx(14.0f));
	REQUIRE(m2.a12==Approx(12.0f));
	REQUIRE(m2.a21==Approx(36.5f));
	REQUIRE(m2.a22==Approx(31.0f));
	m3*=m1;
	REQUIRE(m3.a11==Approx(23.0f));
	REQUIRE(m3.a12==Approx(26.0f));
	REQUIRE(m3.a21==Approx(47.5f));
	REQUIRE(m3.a22==Approx(61.0f));
}

TEST_CASE("describeMultMat","[MultMat]"){
	Mat2 m1{5.0,2.0,4.0,10.0};
	Mat2 m2{1.0,2.0,3.0,5.0};
	Mat2 m3{3.0,2.0,5.5,0.0};
	Mat2 r1=m1*m2;
	REQUIRE(r1.a11==Approx(11.0f));
	REQUIRE(r1.a12==Approx(20.0f));
	REQUIRE(r1.a21==Approx(34.0f));
	REQUIRE(r1.a22==Approx(58.0f));
	Mat2 r2=m2*m3;
	REQUIRE(r2.a11==Approx(14.0f));
	REQUIRE(r2.a12==Approx(12.0f));
	REQUIRE(r2.a21==Approx(36.5f));
	REQUIRE(r2.a22==Approx(31.0f));
	Mat2 r3=m3*=m1;
	REQUIRE(r3.a11==Approx(23.0f));
	REQUIRE(r3.a12==Approx(26.0f));
	REQUIRE(r3.a21==Approx(47.5f));
	REQUIRE(r3.a22==Approx(61.0f));
}

TEST_CASE("describeMultMatVec","[MultMatVec]"){
	Mat2 m1{1.0,2.0,2.0, 7.0};
	Mat2 m2{7.0,2.0,5.7,0.0};
	Mat2 m{};
	Vec2 v1{0.2,1.8};
	Vec2 v2{0.1,12.0};
	Vec2 v{};
	Vec2 r1=m1*v1;
	REQUIRE(r1.x==Approx(3.8f));
	REQUIRE(r1.y==Approx(13.0f));
	Vec2 r2=m2*v2;
	REQUIRE(r2.x==Approx(24.7f));
	REQUIRE(r2.y==Approx(0.57f));
}
TEST_CASE("describeInverse","[Inverse]"){
	Mat2 m1{12.0,0.0,4.0,100.0};
	Mat2 m{};
	REQUIRE(inverse(m1).a11==Approx(0.08333f));
	REQUIRE(inverse(m1).a12==Approx(0.0f));
	REQUIRE(inverse(m1).a21==Approx(-0.00333f));
	REQUIRE(inverse(m1).a22==Approx(0.01f));
	REQUIRE(inverse(m).a11==Approx(1));
	REQUIRE(inverse(m).a12==Approx(0));
	REQUIRE(inverse(m).a21==Approx(0));
	REQUIRE(inverse(m).a22==Approx(1));
}
TEST_CASE("describeTranspose","[Transpose]"){
	Mat2 m1{12.0,0.0,4.0,100.0};
	Mat2 m{};
	REQUIRE(transpose(m1).a11==Approx(12.0f));
	REQUIRE(transpose(m1).a12==Approx(4.0f));
	REQUIRE(transpose(m1).a21==Approx(0.0f));
	REQUIRE(transpose(m1).a22==Approx(100.0f));
	REQUIRE(transpose(m).a11==Approx(1));
	REQUIRE(transpose(m).a12==Approx(0));
	REQUIRE(transpose(m).a21==Approx(0));
	REQUIRE(transpose(m).a22==Approx(1));
}
TEST_CASE("describeRotation","[Rotation]"){
	Mat2 m1 = make_rotation_mat2(5);
	REQUIRE(m1.a11==Approx(0.28366f));
	REQUIRE(m1.a12==Approx(0.95892f));
	REQUIRE(m1.a21==Approx(-0.95892f));
	REQUIRE(m1.a22==Approx(0.28366f));
	Mat2 m = make_rotation_mat2(2.4);
	REQUIRE(m.a11==Approx(-0.73739f));
	REQUIRE(m.a12==Approx(-0.67546f));
	REQUIRE(m.a21==Approx(0.67546f));
	REQUIRE(m.a22==Approx(-0.73739f));
}
		//Kreistests
TEST_CASE("describeCircDefault","[CircDefault]"){
	Circle c;
	REQUIRE(c.getRadius()==Approx(5.0f));
}
TEST_CASE("describeCircUser","[CircUser]"){
	Circle c{3.0,{}};
	REQUIRE(c.getRadius()==Approx(3.0f));
}
TEST_CASE("describeCircCircumreference", "[CircCircumreference]"){
	Circle c1{12.5,{}};
	Circle c2{5,{}};
	REQUIRE(c1.getCircumreference()==Approx(78.54f));
	REQUIRE(c2.getCircumreference()==Approx(31.416f));
}
TEST_CASE("describeCircArea","[CircArea]"){
	Circle c1{12.5,{}};
	Circle c2{5,{}};
	REQUIRE(c1.getArea()==Approx(490.87f));
	REQUIRE(c2.getArea()==Approx(78.54f));
}
TEST_CASE("describeCircColorGetter","[CircColorGetter]"){
	Circle c1{};
	REQUIRE(c1.getColor().r==Approx(0.0f));
	REQUIRE(c1.getColor().g==Approx(0.0f));
	REQUIRE(c1.getColor().b==Approx(0.0f));

	Circle c2{12.4,{0.3,1.0,2.0}};
	REQUIRE(c2.getColor().r==Approx(0.3f));
	REQUIRE(c2.getColor().g==Approx(1.0f));
	REQUIRE(c2.getColor().b==Approx(0.0f));
}
TEST_CASE("describeCircColorSetter","[CircColorSetter]"){
	Circle c1{};
	c1.setColor({5.0,0.0,0.5});
	REQUIRE(c1.getColor().r==Approx(0.0f));
	REQUIRE(c1.getColor().g==Approx(0.0f));
	REQUIRE(c1.getColor().b==Approx(0.5f));

	c1.setColor({0.2,0.1,0.6});
	REQUIRE(c1.getColor().r==Approx(0.2f));
	REQUIRE(c1.getColor().g==Approx(0.1f));
	REQUIRE(c1.getColor().b==Approx(0.6f));
}
	//Rechtecktests
TEST_CASE("describeRectDefault","[RectDefault]"){	
	Rectangle r;
	REQUIRE(r.getHeight()==Approx(4.0f));
	REQUIRE(r.getWidth()==Approx(5.0f));
}
TEST_CASE("describeRectUser","[RectUser]"){
	Vec2 v1{12.0,6.0};
	Rectangle r{v1,{0.0},{0.0},{}};
	REQUIRE(r.getHeight()==Approx(12.0f));
	REQUIRE(r.getWidth()==Approx(6.0f));
}
TEST_CASE("describeGetWidth","[GetWidth]"){
	Vec2 v1{1.0,5.0};
	Rectangle r1{v1,{0.0},{0.0},{}};
	REQUIRE(r1.getWidth()==1.0);
}
TEST_CASE("describeGetHeight","[GetHeight]"){
	Vec2 v1{1.0,4.0};
	Rectangle r1{v1,{0.0},{0.0},{}};
	REQUIRE(r1.getHeight()==4.0);
}
TEST_CASE("describeSetWidth","[SetWidth]"){
	Vec2 v1{1.0,5.0};
	Rectangle r1{v1,{0.0},{0.0},{}};
	r1.setWidth(0.0);
	REQUIRE(r1.getWidth()==5.0);
	r1.setWidth(10.0);
	REQUIRE(r1.getWidth()==10.0);
}
TEST_CASE("describeSetHeight","[SetHeight]"){
	Vec2 v1{1.0,5.0};
	Rectangle r1{v1,{0.0},{0.0},{}};
	r1.setHeight(0.0);
	REQUIRE(r1.getHeight()==4.0);
	r1.setHeight(10.0);
	REQUIRE(r1.getHeight()==10.0);
}
TEST_CASE("describeRectCircumreference", "[RectCircumreference]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.2,2.0};
	Rectangle r1{v1,{0.0},{0.0},{}};
	Rectangle r2{v2,{0.0},{0.0},{}};
	REQUIRE(r1.getCircumreference()==Approx(12.0));
	REQUIRE(r2.getCircumreference()==Approx(4.4));
}
TEST_CASE("describeRectArea","[RectArea]"){
	Vec2 v1{1.0,5.0};
	Vec2 v2{0.2,2.0};
	Rectangle r1{v1,{0.0},{0.0},{}};
	Rectangle r2{v2,{0.0},{0.0},{}};
	REQUIRE(r1.getArea()==Approx(5.0));
	REQUIRE(r2.getArea()==Approx(0.4));
}
TEST_CASE("describeRectColorGetter","[RectColorGetter]"){
	Rectangle r1{};
	REQUIRE(r1.getColor().r==Approx(0.0f));
	REQUIRE(r1.getColor().g==Approx(0.0f));
	REQUIRE(r1.getColor().b==Approx(0.0f));
	Vec2 v1{1.0,5.0};
	Rectangle r2{v1,{0.0},{0.0},{0.3,1.0,0.0}};
	REQUIRE(r2.getColor().r==Approx(0.3f));
	REQUIRE(r2.getColor().g==Approx(1.0f));
	REQUIRE(r2.getColor().b==Approx(0.0f));
}
TEST_CASE("describeRectColorSetter","[RectColorSetter]"){
	Rectangle r1{};
	r1.setColor({12.0,0.0,0.5});
	REQUIRE(r1.getColor().r==Approx(0.0f));
	REQUIRE(r1.getColor().g==Approx(0.0f));
	REQUIRE(r1.getColor().b==Approx(0.5f));
	r1.setColor({0.2,0.1,0.6});
	REQUIRE(r1.getColor().r==Approx(0.2f));
	REQUIRE(r1.getColor().g==Approx(0.1f));
	REQUIRE(r1.getColor().b==Approx(0.6f));
	r1.setColor({1.0,0.0,1.1});
	REQUIRE(r1.getColor().r==Approx(1.0f));
	REQUIRE(r1.getColor().g==Approx(0.0f));
	REQUIRE(r1.getColor().b==Approx(0.0f));
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}