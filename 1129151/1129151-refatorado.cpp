#include <bits/stdc++.h>
using namespace std;


//ATOMO

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
  

// REFATORADO

int myfread(char *buf, int max){

	char c;
	int n = 0;

	c = getchar();
	while( n < max && c != EOF){

		*(buf++) = c;
		n++;

		if(c == '\n' || c == '\r') break;
		c = getchar();
	}

	return n;
}