// Program ce provjeriti jeli godina koju unese korisnik prijestupna ili nije.

#include <stdio.h>
int main()
{
    int god;

    printf("Unesi godinu: ");
    scanf("%d",&god);

    if(god % 4 == 0)
    {
    	
        if( god % 100 == 0)
        {
            if ( god % 400 == 0)
                printf("%d je prijestupna godina", god);
            else
                printf("%d nije prijestupna godina", god);
        }
        else
            printf("%d je prijestupna godina", god );
    }
    else
        printf("%d nije prijestupna godina", god);

    return 0;
}
