#include<stdio.h>
struct polynomial
{
    int cf;
    int pf;

};
typedef struct polynomial P;
void accept(P p1[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("eneter the cofficient and power of trem %d",i+1);
        scanf("%d %d",&p1[i].cf,&p1[i].pf);
    }
}
void display(P p1[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (p1[i].cf>0)
        {
            printf("+%dX^%d",p1[i].cf,p1[i].pf);
        }
        else
        {
            printf("%dX^%d",p1[i].cf,p1[i].pf);
        }
        
        
    }
    
}
void addition(P p1[],P p2[],int n,int m)
{
    P result[10];
    int k=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            
            if (p1[i].pf==p2[j].pf)
            {
                result[k].cf=p1[i].cf+p2[j].cf;
                result[k].pf=p1[i].pf;
                k++;
                p2[j].cf=-999;

            }
            if (j==n)
            {
                result[k].cf=p1[i].cf;
                result[k].pf=p1[i].pf;
                k++;
            }
            
            
        }
        
    }
    for (int j = 0; j < m; j++)
    {
        if(p2[j].cf!=(-999))
        {
            result[k].cf=p2[j].cf;
            result[k].pf=p2[j].pf;
            k++;
        }   
    }
    display(result,k);

}


int main()
{
    P p1[10],p2[10];
    int n,m;
    scanf("%d %d",&n,&m);
    accept(p1,n);
    display(p1,n);
    accept(p2,m);
    display(p2,n);
    addition(p1,p2,n,m);

}