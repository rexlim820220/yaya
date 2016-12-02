#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int length=200;
    char eng[length+1];
    while(scanf("%s",eng))
    {
        if(strcmp(eng,"0")!=0)
        {
            int num=0,set=1;
            for(int i=0;i<strlen(eng);++i)
            {
                if(isalpha(eng[i])==0)
                {
                    set=0;
                    break;
                }
                eng[i]=tolower(eng[i]);
            }
            for(int t=0;t<strlen(eng);++t)
            {
                num+=(eng[t]-'a'+1);
            }
            if(set!=0)
            {
                printf("%d\n",num);
            }
            else{
                printf("Fail\n");
            }
        }
        else
            break;
    }
    return 0;
}
