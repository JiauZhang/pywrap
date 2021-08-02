#include <stdio.h>

extern "C" {

struct Point{
	int x;
	int y;
};

void print_point(Point *p)
{
	printf("C function --> (x, y) = (%d, %d)\n", p->x, p->y);
}

Point *create_point(int x, int y)
{
	Point *p = new Point();
	p->x = x;
	p->y = y;

	print_point(p);

	return p;
}

}
