//quandrant

#include <stdio.h>
void main()
{
    int pos1,pos2;

    printf("Input the value for x and y coordinate:");
    scanf("%d %d", &pos1, &pos2);

	else if( pos1 < 0 && pos2 > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",pos1,pos2);
	else if( pos1 < 0 && pos2 < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",pos1,pos2);
	else if( pos1 > 0 && pos2 < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",pos1,pos2);
	else if( pos1 == 0 && pos2 == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",pos1,pos2);
}