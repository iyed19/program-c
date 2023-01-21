#include<stdio.h>
int ecrire_donne_s(s){
FILE * out = fopen("solde.txt","w");
    fprintf(out,"%d",s);
    fclose(out);
    return(s);
}
int ecrire_donne_b(b){
FILE * out = fopen("bonus.txt","w");
    fprintf(out,"%d",b);
    fclose(out);
    return(b);
}
int ecrire_donne_f(f){
FILE * out = fopen("cnx.txt","w");
    fprintf(out,"%d",f);
    fclose(out);
    return(f);
}
int lire_donne_f(){
FILE * in = fopen("cnx.txt","r");
int x;
    fscanf(in,"%d",&x);
    fclose(in);
    return(x);
}
int lire_donne_s(){
FILE * in = fopen("solde.txt","r");
int x;
    fscanf(in,"%d",&x);
    fclose(in);
    return(x);
}
int lire_donne_b(){
FILE * in = fopen("bonus.txt","r");
int x;
    fscanf(in,"%d",&x);
    fclose(in);
    return(x);
}
int check(x,y){
int b;
//x hiya solde
//y huwa som elfrft
    if(x>=y){
        b=1;
    }else{
        b=0;
    }
    return(b);
}
int ecrire_sos_s(s){
FILE * out = fopen("sos_s.txt","w");
    fprintf(out,"%d",s);
    fclose(out);
    return(s);
}
int lire_sos_s(){
FILE * in = fopen("sos_s.txt","r");
int x;
    fscanf(in,"%d",&x);
    fclose(in);
    return(x);
}


int main()
{
int n,c,s,b,f,y,bl,sos,sc;
float soss,sosnet;
s=0;
ecrire_donne_s(s);
b=s*10;
ecrire_donne_b(b);
f=0;
ecrire_donne_f(f);
sos=0;
ecrire_sos_s(sos);
do{
printf("Donner num de service... \n");
printf("1000: Quitter.\n");
scanf("%d",&n);
switch(n){
    case 122:
        printf("Votre solde: %d DT valable au 01/04/2023. \n",lire_donne_s());
        printf("Bonus sur recharge : %d DT valable au 01/02/2023. \n",lire_donne_b());
        printf("\n");
    break;
    case 1222:
        printf("Il vous reste: %d Mo de votre forfait Internet mobile valable au 01/04/2023. \n",lire_donne_f());
        printf("\n");
    break;
    case 123:
        do{
        printf("Recharge votre compte. \n");
        printf("1: Recharge \n");
        printf("0: Retour \n");
        scanf("%d",&n);
            switch(n){
                case 1:
                    printf("num de ticket ou carte 1/5/10Dt ...");
                    scanf("%d",&c);
                    if(c==123456789){
                        s=lire_donne_s();
                        s=s+10;
                        b=s*10;
                        sos=lire_sos_s();
                        if(sos>0){
                            if(s>sos){
                                s=s-sos;
                            }else{
                                s=0;
                                sos=sos-s;
                            }
                            ecrire_sos_s(sos);
                        }
                        ecrire_donne_s(s);
                        ecrire_donne_b(b);
                        printf("Vous recevez 10 DT du solde! \n");
                    }else if(c==12345){
                        s=lire_donne_s();
                        s=s+5;
                        b=s*10;
                        sos=lire_sos_s();
                        if(sos>0){
                            if(s>sos){
                                s=s-sos;
                            }else{
                                s=0;
                                sos=sos-s;
                            }
                            ecrire_sos_s(sos);
                        }
                        ecrire_donne_s(s);
                        ecrire_donne_b(b);
                        printf("Vous recevez 5 DT du solde! \n");
                    }else if(c==123){
                        s=lire_donne_s();
                        s=s+1;
                        b=s*10;
                        sos=lire_sos_s();
                        if(sos>0){
                            if(s>sos){
                                s=s-sos;
                            }else{
                                s=0;
                                sos=sos-s;
                            }
                            ecrire_sos_s(sos);
                        }
                        ecrire_donne_s(s);
                        ecrire_donne_b(b);
                        printf("Vous recevez 1 DT du solde! \n");
                    }
                break;
            }
        }while(n!=0);
    break;
    case 140:
        do{
        printf("Achat de forfaits Internet. Demander \n");
        printf("1: 200Mo a 1 Dt \n");
        printf("2: 440Mo a 2 Dt \n");
        printf("3: 1Go a 4 Dt \n");
        printf("4: 2,2Go a 8 Dt \n");
        printf("5: 6Go a 15 Dt \n");
        printf("6: 25Go a 30 Dt \n");
        printf("7: 55Go a 55 Dt \n");
        printf("0: Retour \n");
        scanf("%d",&n);
            switch(n){
                case 1:
                    printf("Vous venez de choisir le forfait internet 200Mo a 1 Dt valable 24H \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=1;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+200;
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 200Mo d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 200Mo est a 1 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
                case 2:
                    printf("Vous venez de choisir le forfait internet 440Mo a 2 Dt valable 48H \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=2;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+440;
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 440Mo d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 440Mo est a 2 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
                case 3:
                    printf("Vous venez de choisir le forfait internet 1Go a 4 Dt valable 7J \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=4;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+1024;
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 1Go d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 1Go est a 4 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
                case 4:
                    printf("Vous venez de choisir le forfait internet 2,2Go a 8 Dt valable 14J \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=8;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+(2.2*1024);
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 2,2Go d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 2,2Go est a 8 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
                case 5:
                    printf("Vous venez de choisir le forfait internet 6Go a 15 Dt valable 30J \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=15;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+(6*1024);
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 6Go d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 6Go est a 15 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
                case 6:
                    printf("Vous venez de choisir le forfait internet 25Go a 30 Dt valable 30J \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=30;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+(25*1024);
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 25Go d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 25Go est a 30 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
                case 7:
                    printf("Vous venez de choisir le forfait internet 55Go a 55 Dt valable 30J \n");
                    printf("1: Acheter \n");
                    printf("0: Retour \n");
                    scanf("%d",&n);
                    if(n==1){
                         s=lire_donne_s();
                         y=55;
                         bl=check(s,y);
                         if(bl==1){
                            s=s-y;
                            ecrire_donne_s(s);
                            f=lire_donne_f();
                            f=f+(55*1024);
                            ecrire_donne_f(f);
                            printf("Felicitations! Vous recevez 55Go d'internet. \n");
                         }else{
                             printf("Votre solde est insuffisant! Le forfait 55Go est a 55 Dt.\n");
                             printf("Merci de recharger votre compte et renouveler l'operation");
                         }
                    }else if(n==0){
                        break;
                    }
                break;
            }
        }while(n!=0);
    break;
    case 150:
        do{
        printf("Beneficiez d'un SOS Solde et payez plus tard +20% frais. Demander \n");
        printf("1: SOS Solde \n");
        printf("2: SOS Internet \n");
        printf("3: Mon compte \n");
        printf("0: Retour \n");
        scanf("%d",&n);
            switch(n){
                case 1:
                    printf("SOS Solde \n");
                    printf("Recevez une avance de credit et payez plus tard a la premiere recharge ou transfert \n");
                    printf("1: 20 DT frais de service 4.00 \n");
                    printf("2: 10 DT frais de service 2.00 \n");
                    printf("3: 5 DT frais de service 1.00 \n");

                    scanf("%d",&c);
                    if(c==1){
                        sc=lire_sos_s();
                        if(sc==0){
                            s=lire_donne_s();
                            s=s+20;
                            ecrire_donne_s(s);
                            printf("Vous recevez 20 DT du solde sos! \n");
                            sos=sos+24;
                            ecrire_sos_s(sos);
                        }else{
                            printf("5ales lgdim sa3 \n");
                        }
                    }else if(c==2){
                        sc=lire_sos_s();
                        if(sc==0){
                            s=lire_donne_s();
                            s=s+10;
                            ecrire_donne_s(s);
                            printf("Vous recevez 10 DT du solde sos! \n");
                            sos=sos+12;
                            ecrire_sos_s(sos);
                        }else{
                            printf("5ales lgdim sa3 \n");
                        }
                    }else if(c==3){
                        sc=lire_sos_s();
                        if(sc==0){
                            s=lire_donne_s();
                            s=s+5;
                            ecrire_donne_s(s);
                            printf("Vous recevez 5 DT du solde sos! \n");
                            sos=sos+6;
                            ecrire_sos_s(sos);
                        }else{
                            printf("5ales lgdim sa3 \n");
                        }
                    }
                break;
                case 2:
                     printf("SOS Internet \n");
                    printf("Recevez une avance de forfait internet et payez plus tard a la premiere recharge ou transfert \n");
                    printf("1: 6Go frais de service 18.00 \n");
                    printf("2: 2.2Go frais de service 10.00 \n");
                    printf("3: 1Go frais de service 5.00 \n");

                    scanf("%d",&c);
                    if(c==1){
                        sc=lire_sos_s();
                        if(sc==0){
                            f=lire_donne_f();
                            f=f+(6*1024);
                            ecrire_donne_f(f);
                            printf("Vous recevez 6Go du cnx sos! \n");
                            sos=sos+18;
                            ecrire_sos_s(sos);
                        }else{
                            printf("5ales lgdim sa3 \n");
                        }
                    }else if(c==2){
                        sc=lire_sos_s();
                        if(sc==0){
                            f=lire_donne_f();
                            f=f+2048;
                            ecrire_donne_f(f);
                            printf("Vous recevez 2.2Go du cnx sos! \n");
                            sos=sos+10;
                            ecrire_sos_s(sos);
                        }else{
                            printf("5ales lgdim sa3 \n");
                        }
                    }else if(c==3){
                        sc=lire_sos_s();
                        if(sc==0){
                            f=lire_donne_f();
                            f=f+1024;
                            ecrire_donne_f(f);
                            printf("Vous recevez 1Go du cnx sos! \n");
                            sos=sos+5;
                            ecrire_sos_s(sos);
                        }else{
                            printf("5ales lgdim sa3 \n");
                        }
                    }
                break;
                case 3:
                    sc=lire_sos_s();
                    printf("Vous avez une avance impayee de : %d \n",sc);
                break;
            }
        }while(n!=0);
    break;

}
}while(n!=1000);

}
