int strlen_pointers(char *str)
{
     char *s = str;
     while( *s != '\0' )
          s++;
     return ( s - str );
}

int strlen_arrays( char s[] )
{
     int i = 0;
     while( s[i] != '\0' )
          i++;
     return ( i );
}
