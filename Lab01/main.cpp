#include "cs1037lib-window.h"
#include "cs1037lib-image.h"
#include <iostream>
using namespace std;
void main()
{
	cout << "Hello, World" << endl;
	SetWindowTitle("Lab 1");
	SetWindowVisible(true); // Show main window
	int x,y, place;
	int map = LoadImage("london.png"); // Load image from file
	int stamp = LoadImage("stamp.png");
	DrawImage(map,0,0); // Draw image at xy position (0,0)
	

	while (!WasWindowClosed()) 
	{
		
		if (GetMouseInput(&x, &y, &place)) 
		{
			if (place == 1|| place==2)
				DrawImage(stamp, x - 96, y - 52);
			
		}
		// Loop until user closes window

	}
	DeleteImage(map); // Free memory used by image
}
