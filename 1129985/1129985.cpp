#include <bits/stdc++.h>
using namespace std;

typedef char char_u;

char_u *vim_strnsave(char_u *name, int x){
	name = (char_u *) realloc(name, x * sizeof(char_u));
	return name;
}

char_u * vim_strchr(char_u * name, char x){
	if(*name == '.') return name ++;
	else return NULL;
}


    static char_u *
make_pull_name(char_u * name)
{
    char_u  *pname;
    char_u  *p;

    pname = vim_strnsave(name, strlen(name) + strlen("-pullright"));
    if (pname != NULL)
    {
	strcat((char *)pname, "-pullright");
	while ((p = vim_strchr(pname, '.')) != NULL)
	    *p = '_';
    }
    return pname;
}


int main(){

	char_u *name = (char_u *) malloc(sizeof(char_u) * 200);
	cin >> name;

	static char_u *newName = make_pull_name(name);
	cout << newName;

	return 0;
}