/*
Original Author: S. M. Shahriar Nirjon
Modified by: Mohammad Saifur Rahman
last Modified By: Simanta Deb Turja
last modified: 29 Januray, 2017
Version: 2.0
*/

# include "iGraphics.h"
# include <stdio.h>
# include <math.h>
# include <iostream>

using namespace std;


/*
function iDraw() is called again and again by the system.
*/
void iDraw()
{

	iClear();
	
}


void music()
{
	//PlaySound("music\\gun.wav", NULL, SND_LOOP | SND_ASYNC);
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{

}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	/*mposx = mx;
	mposy = my;
	if(mx== 2){}        /*Something to do with mx*/
	//else if(my== 2){}   /*Something to do with my*/

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
    if(key == 'w') {
	//DO something
    }
}



/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_DOWN) {
	    //place your codes for other keys here
  	}
}
//Main Function

int main()
{
	//srand(time(NULL));

	iInitialize(600, 500, "Sample Project");

	return 0;
}
