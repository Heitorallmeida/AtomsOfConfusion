
// ATOMO

    static char_u *
make_pull_name(char_u * name)
{
    char_u  *pname;
    char_u  *p;

    pname = vim_strnsave(name, STRLEN(name) + strlen("-pullright"));
    if (pname != NULL)
    {
	strcat((char *)pname, "-pullright");
	while ((p = vim_strchr(pname, '.')) != NULL)
	    *p = '_';
    }
    return pname;
}

// REFATORADO

static char_u * make_pull_name(char_u * name){

    char_u *pname, *p;

    pname = vim_strnsave(name, STRLEN(name) + strlen("-pullright"));
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
