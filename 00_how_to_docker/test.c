#include <stdio.h>
void	otherthing(int **d)
{
	printf("hello");
}

int		main()
{
	int ary[3][3] = {
		{1,2,3},
		{2,2,2},
		{3,3,3},
	};

	otherthing(ary);

}
