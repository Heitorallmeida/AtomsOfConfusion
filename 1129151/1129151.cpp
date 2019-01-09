#include <bits/stdc++.h>
using namespace std;



    int
myfread(char *buf, int elsize /*ignored*/, int max, FILE *fp)
{
	int	c;
	int	n = 0;

	while ((n < max) && ((c = getchar()) != EOF))
	{
		*(buf++) = c;
		n++;
		if (c == '\n' || c == '\r')
			break;
	}
	return n;
}


int main(){

	char *buf = (char *) malloc(100 * sizeof(char));
	int elsize, max;
	FILE *fp;
	scanf("%d\n", &max);

	int n = myfread(buf, elsize, max, fp);

	return 0;
}
