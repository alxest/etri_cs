#include <iostream>
#include <string>

using namespace std;

class Color {
public:
		// static Color Black();
		static Color a;
		static int one() { return 1; }
		Color(char r, char g, char b) {
				this->r = r;
				this->g = g;
				this->b = b;
		}

// private:
		char r, g, b;
};

Color Color::a(0,0,0);

class Color2 : Color {
public:
		static Color a;
};

Color Color2::a(0,0,0);

Color* Color_Black = new Color(0, 0, 0); 
Color* Color_White = new Color(255, 255, 255);
Color* Color_Red = new Color(255, 0, 0);
Color* Color_Green = new Color(0, 255, 0);
Color* Color_Blue = new Color(0, 0, 255);

int main() {
		cout << (int)Color_Black->r << " " << (int)Color_Black->g << " " << (int)Color_Black->b << endl;
		Color::a.r = 22;
		cout << (int)Color::a.r << endl;
		cout << (int)Color2::a.r << endl;
		cout << Color::one() << endl;
		// cout << Color2::one() << endl;
}
