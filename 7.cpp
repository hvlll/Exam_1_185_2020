#include <iostream>

using namespace std;

class Rectangle
{
public:
	int width;
	int hieght;

	Rectangle(int setWidth, int setHeight)
	{
		width = setWidth;
		hieght = setHeight;
	}



	static void DrawRectangle(int width, int hieght)
	{
		for (int a = 0; a < hieght; a++)
		{
			for (int b = 0; b < width; b++)
			{
				if (((a == 0) || (a == hieght - 1) || (b == 0) || (b == width - 1)))
					cout << "██";
				else
					cout << "  ";
			}
			cout << "\n";
		}
		cout << "\n\n";
	}

	void Draw()
	{
		DrawRectangle(this->width, this->hieght);
	}
};

int main()
{
	Rectangle first(6, 6);
	Rectangle second(5, 7);
	Rectangle third(2, 2);
	first.Draw();
	second.Draw();
	third.Draw();
}