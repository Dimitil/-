#include "Simple_window.h"
#include "Graph.h"




using namespace Graph_lib;



int main() {

	Simple_window win({ 0, 0 }, 1000, 800, "Chapter 13");


	Vector_ref <Graph_lib::Rectangle> vr;


	int step_x = 100;
	int step_y = 100;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			vr.push_back(new Graph_lib::Rectangle({ i * step_x, j * step_y }, { i * step_x + step_x, j * step_y + step_y }));
			//vr[vr.size() - 1].set_fill_color(i*10+j);
			vr[vr.size() - 1].set_color(Color::black);
			if (i == j)
			{
				vr[vr.size() - 1].set_fill_color(Color::red);
			}
			win.attach(vr[vr.size() - 1]);
		}

	Graph_lib::Arc a1(Point{ 400, 400 }, 100, 50, 0, 90);
	a1.set_color(Color::blue);
	win.attach(a1);




	Arrow Ar1({ 300, 300 }, { 450, 100 });
	Ar1.set_color(Color::dark_blue);
	win.attach(Ar1);
	Arrow Ar2({ 300, 300 }, { 400, 450 });
	Ar2.set_color(Color::dark_blue);
	win.attach(Ar2);

	Box b1({ 230, 250 }, 400, 300);
	b1.set_color(Color::red);
	win.attach(b1);


	Graph_lib::Rectangle rec({ 265, 343 }, 50, 60);
	rec.set_color(Color::blue);
	win.attach(rec);

	Regular_hexagon RH({ 500, 500 }, 140);
	RH.set_color(Color::dark_yellow);
	RH.set_fill_color(Color::dark_blue);
	win.attach(RH);

	
	win.wait_for_button();


	return 0;


}