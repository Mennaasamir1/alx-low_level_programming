#include <stdio.h>
int main()
{
 struct point 
 {
   	int x;
   	int y;
};
	struct point my_point = { 3, 7 };
	struct point *p = &my_point;
	
	(*p).y = 98;
	printf("%d\n", my_point.y);
}
