#include <iostream>
#include <string>

using namespace std;

class Color {
public:
		// static Color Black();
		Color(char r, char g, char b) {
				this->r = r;
				this->g = g;
				this->b = b;
		}

// private:
		char r, g, b;
};

Color* Color_Black = new Color(0, 0, 0); 
Color* Color_White = new Color(255, 255, 255);
Color* Color_Red = new Color(255, 0, 0);
Color* Color_Green = new Color(0, 255, 0);
Color* Color_Blue = new Color(0, 0, 255);


int main() {
		cout << (int)Color_Black->r << " " << (int)Color_Black->g << " " << (int)Color_Black->b << endl;
}
