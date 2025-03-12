// INCLUDE HEADERS

#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <math.h>

// DEFINE PI
#define pi 3.14158
//#define pi 3.14158

// random integer return
/*

int randominteger(int max, int min, int count) {
	for (int o = 0; o < count; o++) {
		int rd_num = rand() % (max - min + 1) + min;
		return rd_num;
	}

};
*/

// MAIN
int main(void) {
    int gd = DETECT, gm;
    int i;
    float x,y;

    initgraph(&gd, &gm, "A:\\BGI");

    // Draw to White
    setcolor(WHITE);
    // Draw Axes

    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    line(getmaxx() / 2, 0 , getmaxx() / 2, getmaxy());

    /* Draw Sine
     * x = Width of Sine Wave (80REF)
     * y = Height of Sine Wave (100REF)
     */
    for(i = 0; i < getmaxx(); i++) {
	x = i * pi / 80; //80 REF
	y = 100 * cos(x);
	y = getmaxy() / 2 - y;
	putpixel(i, y, 13);
}

    //textcolor(GREEN);
    setcolor(13);
    outtext("Cosinus TurboC++ | 2025");

    // Exit
    getch();
    closegraph();
    return 0;


}