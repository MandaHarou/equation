#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float delta(float a,float b,float c)
{
    return b*b - (4 * a *c);
}
int main(){

    double a=0 ,b=0 , c=0,x,X_1=0,X_2=0,racineCarree;
    int ch=0,note=0;
    int qu=0;

printf("                ""Aprnendre en jouent:\n\n");
printf("                ""Tout dabord commencer par choisir votre nombre s' il vous plait:\n");
printf("Nombre1:");
scanf("%lf",&a);
printf("Nombre2:");
scanf("%lf",&b);
printf("Nombre3:");
scanf("%lf",&c);
printf("Bravo vous avez franchit la premiere etape\n");
printf("voici votre equation: %lf X^2 + %lf X + %lf\n\n",a,b,c);
x=delta(a,b,c);
printf("delta= %f\n\n",x);
        if(x > 0)
            {
                racineCarree= sqrt(x);
                printf("Racine Carree de Delta= %f",racineCarree);
                X_1= (-b - racineCarree)/2*a;
                X_2= (-b + racineCarree)/2*a;
                printf("voici les deux solutions de l' equation:\n X_1= -%lf - %lf/2*%lf= %lf\n\n",b,racineCarree,a,X_1);
                printf(" ""X_2=-%lf + %lf/2*%lf = %lf\n\n",b,racineCarree,a,X_2);
            }
        else if(x == 0)
            {
                X_1= -b/2*a;
                printf("voici la solution de l' equationX_1=X_2= -%lf/2*%lf = %lf\n\n",b,a,X_1);
            }
        else if(x < 0)
            {
                printf("Pas de solution\n");
            }
        else
            {
                printf("Syntax Error");
                return 1;
            }
            printf("Voulez vous des explications: si oui metez 1, si non metez 0:\n");
                scanf("%d", &qu);
                ch= qu>0;
                printf("ch: %d\n",ch);
        if(ch)
        {
            printf("Bon je vais tous vous expliquer\n");
            printf("Dans une equation de seconde degre reconaissable par la forme: aX^2+bx+c comme le votre qui est: %lf X^2 + %lf X + %lf\n",a,b,c);
            printf("plusieur cas peuvent ce presenter");
            if(x>0)
            {
                printf("l' un d' eu est que Si delta<0: alors il y a deux slolution grands X comme dans notre cas ici avec X_1= -%lf - %lf/2*%lf= %lf\n",b,racineCarree,a,X_1);
                printf("Et X_2=-%lf + %lf/2*%lf = %lf\n\n",b,racineCarree,a,X_2);
            }
            else if(x==0)
            {
                printf("Si delta=0: alors il n y a qu' une seul solution grands X comme dans notre cas ici avec X_1=X_2= -%lf/2*%lf = %lf\n\n",b,a,X_1);
            }
            else if(x<0)
            {
                printf("Si delta<0: alors il n y a pas de solution car la racine carree de delta est negatif alors que l' on est dans R\n\n");
            }
            else
            {
                printf("Ereur");
                return 1;
            }

        }
        else
        {
            printf("Merci!!");
            return 1;
        }
        printf("Pour nous soutenir pouvez vous nous noter sur une echel de 1 a 5:");
        scanf("%d",&note);
        switch(note)
        {
        case 1:
            printf("Merci pour votre contribution");
            break;
        case 2:
            printf("Merci pour votre aide");
            break;
        case 3:
            printf("Merci pour votre aide");
            break;
        case 4:
            printf("Merci beaucoup");
            break;
        case 5:
            printf("Comme vous nous avez noter 5 on vous donne un Billet de loterie"" ");
            printf("Merci beaucoup!!!\n\n");
            break;
        default:
            printf("Erreur");
            break;
        }


        return 0;

     }

