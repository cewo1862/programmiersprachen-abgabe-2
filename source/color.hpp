#ifndef COLOR_HPP
#define COLOR_HPP
struct Color {
	float r, g, b;
	Color(): r{0.0},g{0.0},b{0.0} {}
	Color(float c): r {c}, g {c}, b {c} {
		if (c<0 || c>1){;
			r=0.0;
			g=0.0;
			b=0.0;
		}
	}
	Color(float x, float y, float z): r{x}, g{y}, b{z} {
		if (x<0.0 || x>1.0){
			r = 0.0;
		}
		if (y<0 || y>1){
			g = 0.0;
		}
		if (z<0 || z>1){
			b = 0.0;
		}
	}
};
#endif