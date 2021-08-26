#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	float y;
	scanf("%d %f",&x,&y);
	if((0<x && x<=2000) && (0<y && y<=2000))
    {	if(x%5==0 && (x+0.5)<=y)
    	    printf("%.2f",(y-x-0.50));
    	else
    	    printf("%.2f",y);
    }
	return 0;
}

