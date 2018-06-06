#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h;
    int w,x,y,z,p,q,r,s;
    scanf("%f",&a);
    printf("NOTAS:\n");
    if(a>100)
    {
        w=a/100;
        printf("%d nota(s) de R$ 100.00\n",w);
        b=a-(w*100);
        if(b>50)
        {
            b=a-(w*100);
            x=b/50;
            printf("%d nota(s) de R$ 50.00\n",x);
            c=b-(x*50);
            if(c>20)
            {
                c=b-(x*50);
                y=c/20;
                printf("%d nota(s) de R$ 20.00\n",y);
                d=c-(y*20);
                if(d>10)
                {
                    d=c-(y*20);
                    z=d/10;
                    printf("%d nota(s) de R$ 10.00\n",z);
                    e=d-(z*10);
                    printf("MOEDAS:\n");
                    if(e>1)
                    {
                        e=d-(z*10);
                        p=e/1;
                        printf("%d nota(s) de R$ 1\n",p);
                        f=e-(p*1);
                        {
                            if(f>0.50)
                            {
                                 f=e-(p*1);
                                 q=f/0.50;
                                 printf("%d nota(s) de R$ 0.50\n",q);
                                 g=f-(q*0.50);
                                 if(g>0.25)
                                 {
                                     g=f-(q*0.50);
                                     r=g/0.25;
                                     printf("%d nota(s) de R$ 0.25\n",r);
                                     h=g-(r*0.25);
                                 }

                            }
                        }

                    }
                }
            }

        }

    }

}
