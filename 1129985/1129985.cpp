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

static char_u * make_pull_name(char_u * name){

    char_u *pname, *p;

    pname = vim_strnsave(name, strlen(name) + strlen("-pullright"));
    if(pname != NULL){
        strcat( (char *) pname, "-pullright" );

        p = vim_strchr(name, '.');
        while(p != NULL){

            *p = '_';

            p = vim_strchr(name, '.');
        }
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