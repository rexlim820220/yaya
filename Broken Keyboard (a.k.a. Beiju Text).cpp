#include <iostream>
#include <cstdio>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<char>mylist;
    list<char>::iterator it=mylist.begin();
    //string ss;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if(c=='[')
        {
            it=mylist.begin();
        }
        else if(c==']')
        {
            it=mylist.end();
        }
        else if(c=='\n')
        {
            for(it=mylist.begin();it!=mylist.end();++it)
            {
                cout<<*it;
            }
            cout<<endl;
            mylist.clear();
        }
        else
        {
            mylist.insert(it,c);
        }
    }
    return 0;
}
