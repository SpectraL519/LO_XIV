#include <cstdio>
int licz(int tab[],int od,int dok);
const int wlk=1000000;
int tab[wlk];
int przed[wlk];
int main() {
    int m,a,b;
    int poprz=0;
    int *w=new int[0];
     for(int i=0;i<=(wlk-2);i++) {
        tab[i]=i+2;
    }
    for(int i=0,j;i<=(wlk-2);i++) {
        if(tab[i]!=0) {
            j=i;
            poprz++;
            while(1) {
                j+=i+2;
                if(j>(wlk-2)) break;
                tab[j]=0;
            }
        }
        przed[i]=poprz;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        scanf("%d",&a);
        scanf("%d",&b);
        if(b==2) printf("1\n");
        else printf("%d\n",przed[b-2]-przed[a-3]);
    }
    return 0;
}