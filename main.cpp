#include <iostream>
#include <math.h>
#include <iomanip>
#include "get_the_sum.h"
using namespace std;

int main(int argc,char** argv)
{
    cout<<"enter main number : ";
    long double main_number;
    main_number=stold(argv[1]);
    cout<<main_number <<"\n";
    cout<<"enter precision : ";
    int preci;
    cin>>preci;
    cout<<preci <<"\n";
    get_the_sum *gt =new get_the_sum();
    long double ard[1000];int ardx=0;
    ard[ardx]=gt->get_da_number(main_number);
    int tarx=0;
    tarx=ardx;
    cout<<"generating all cds of main number \n";
    while(ard[ardx]>9){
        //cout<<"using " << ard[ardx] <<" with " << ardx <<"\n";
        ardx+=1;
        ard[ardx]=gt->get_da_number(ard[tarx]);
        if(ard[ardx]<=9){
                           // cout<<"breaking " << ard[ardx] <<" with " << ardx <<"\n";
                            break;
                        }
        tarx=ardx;
    }
    long double xsqrt[1000];int xsqr=0;
    cout<<" -----> reporting cd of " <<std::setprecision(preci) << main_number <<" with " << ardx <<"\n";
    for(int i=0;i<=ardx;i++){
       cout<<"   -----> "<<std::setprecision(preci) << ard[i] <<" ";
       xsqrt[xsqr]=sqrt(ard[i]);
       cout<<"with square of " << xsqrt[xsqr] <<"\n";
       xsqr+=1;
       xsqrt[xsqr]=sqrt(ard[i])*10;
       xsqr+=1;
    }
    long double ctp[1000];int tpc=0;
    cout<<"enter number and press enter. Enter -1 to exit the loop\n";
    long double xti=0;
    long double tmp_vtone;
    for(;;){
        cout<<"enter a number : \n";
        cin>>xti;
        if(xti==-1){break;}
        ctp[tpc]=xti;
        tmp_vtone=xti;
        tpc+=1;
        ctp[tpc]=tmp_vtone/2;
        tpc+=1;
        ctp[tpc]=tmp_vtone*2;
        tpc+=1;
        ctp[tpc]=tmp_vtone*10;
        tpc+=1;
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<=tpc;i++){cout<<ctp[i]<<  " " ;}
    cout<<"\n";
    long double ptc[1000];int cpt=0;long double itx=0;long double tmp_vtwo;
    cout<<"enter number and press enter. Enter -1 to exit the loop\n";
        for(;;){
            cout<<"enter a number : \n";
            cin>>itx;
            if(itx==-1){break;}
            ptc[cpt]=itx;
            tmp_vtwo=itx;
            cpt+=1;
            ptc[cpt]=tmp_vtwo/2;
            cpt+=1;
            ptc[cpt]=tmp_vtwo*2;
            cpt+=1;
            ptc[cpt]=tmp_vtwo*10;
            cpt+=1;
            cout<<"\n";
        }
    cout<<"\n";
    for(int i=0;i<=cpt;i++){cout<<ptc[i]<<  " " ;}
    cout<<"\n";
    cout<<"generating sequence of calculations \n";
    long double xlt[1000];int xtl=0;long double tmpv;long double xlti;
    int mip=0;
    if(tpc>cpt){mip=tpc;}
    if(cpt>tpc){mip=cpt;}
    if(tpc==cpt){mip=tpc ?: mip=cpt;}
    for(int i=0;i<=tpc;i++){
       for(int j=0;j<=cpt;j++){

           xlti=(long double)ctp[i]/(long double)ptc[j];
           if(xlti>0 && ctp[i]>0 && ptc[j]>0){
           //cout<<ctp[i] << " / " << ptc[j] <<"\n";
           xlt[xtl]=xlti;
           tmpv=xlt[xtl];
           xtl+=1;
           xlt[xtl]=tmpv*2;
           xtl+=1;
           xlt[xtl]=tmpv/2;
           xtl+=1;}

           xlti=(long double)ptc[j]/(long double)ctp[i];
           if(xlti>0 && ptc[j]>0 && ctp[i]>0){
           //cout<<ptc[j] << " / " << ctp[i] <<"\n";
           xlt[xtl]=xlti;
           tmpv=xlt[xtl];
           xtl+=1;
           xlt[xtl]=tmpv*2;
           xtl+=1;
           xlt[xtl]=tmpv/2;
           xtl+=1;}

           xlti=(long double)ctp[i]-(long double)ptc[j];
           if(xlti>0 && ctp[i]>0 && ptc[i]>0){
           //cout<<ctp[i] << " - " << ptc[j] <<"\n";
           xlt[xtl]=xlti;
           tmpv=xlt[xtl];
           xtl+=1;
           xlt[xtl]=tmpv*2;
           xtl+=1;
           xlt[xtl]=tmpv/2;
           xtl+=1;}

           xlti=(long double)ptc[j]-(long double)ctp[i];
           if(xlti>0 && ptc[j]>0 && ctp[i]>0){
           //cout<<ptc[j] << " - " << ctp[i] <<"\n";
           xlt[xtl]=xlti;
           tmpv=xlt[xtl];
           xtl+=1;
           xlt[xtl]=tmpv*2;
           xtl+=1;
           xlt[xtl]=tmpv/2;
           xtl+=1;}
       }
    }

    cout<<"\n";

   // for(int i=0;i<=xtl;i++){cout<<std::setprecision(preci) <<xlt[i] <<"\n";}
   // cout<<"squares \n";
   // for(int i=0;i<=xsqr;i++){cout<<i << " " <<std::setprecision(preci) << xsqrt[i] <<"\n";}

    long double fn[1000];int fl=0;long double rfn;
    long double fractpart,intpart;
    long double xfractpart,xintpart;
    long double yfractpart,yintpart;
    long double zfractpart,zintpart;
    for(int i=0;i<=xsqr-1;i+=4){
      //cout<<xsqrt[i] << " " << xsqrt[i+2] <<"\n";
      rfn=xsqrt[i]*xsqrt[i+2];
      fn[fl]=rfn;
      fl+=1;
      fractpart=modf(xsqrt[i],&intpart);
      xfractpart=modf(xsqrt[i+2],&xintpart);
      rfn=intpart*xintpart;
      fn[fl]=rfn;
      fl+=1;
     // cout<<xsqrt[i+1] << " " << xsqrt[i+3] <<"\n";
      rfn=xsqrt[i+1]*xsqrt[i+3];
      fn[fl]=rfn;
      fl+=1;
      yfractpart=modf(xsqrt[i+1],&yintpart);
      zfractpart=modf(xsqrt[i+3],&zintpart);
      rfn=yintpart*zintpart;
      fn[fl]=rfn;
      fl+=1;
    }
    cout<<"of squares \n";
    for(int i=0;i<=fl-1;i++){cout<<std::setprecision(preci) <<fn[i] <<"\n";}
    cout<<"\n";
    long double da_rst;da_rst=sqrt(main_number);
    cout<<"of results " <<std::setprecision(preci) <<  da_rst <<" the result of square \n";
    long double xn;long double xni;long double xnp;long double tst;long double tsi;long double tsy;long double dia,diaf,di,df;
    int st=0;
    int sti=0,sty=0,stp=0,sdia=0,sdai=0;
    for(int i=0;i<=xtl;i++){
      for(int j=0;j<=fl;j++){
        if(fn[j]>0 && xlt[i]>0){
         xn=xlt[i]*fn[j];
         xni=xn*2;
         xnp=xn/2;
         dia=xlt[i]/fn[j];
         diaf=fn[j]/xlt[i];
         tst=xn*xn;
         tsi=xni*xni;
         tsy=xnp*xnp;
         di=dia*dia;
         df=diaf*diaf;
            if(tst<main_number || tsi<main_number || tsy<main_number || di<main_number || df<main_number){
                sti=gt->compare_them(main_number,tst);
                sty=gt->compare_them(main_number,tsi);
                stp=gt->compare_them(main_number,tsy);
                sdia=gt->compare_them(main_number,di);
                sdai=gt->compare_them(main_number,df);
                if(sti==1 || sty==1 || stp==1 || sdia==1 || sdai==1 ){
         cout<<std::setprecision(preci) <<xlt[i] << " * " <<std::setprecision(preci) << fn[j] <<  " ::== " << std::setprecision(preci) <<xn <<" || of *2 " <<std::setprecision(preci) << xni << " ||  of /2 "<<std::setprecision(preci) << xnp <<" || / " <<
         std::setprecision(preci)<<di << " or " << std::setprecision(preci) <<df<<"\n";
         cout<<" -------> " << std::setprecision(preci)<<tst << " " << std::setprecision(preci) << tsi << " " << std::setprecision(preci)<<tsy <<" " << std::setprecision(preci)<<sdia << " " << std::setprecision(preci) <<sdai <<"\n";
        }
       }
      }
     }
    }



    cout<<"want to show the results of array one ? \n";
    cout<<"press 1 to show the first array on 0 to continue \n";
    int xpress=-1;
    cin>>xpress;
    if(xpress==1){
    cout<<"\n";
    cout<<" of tpc \n";

   for(int i=0;i<=fl-1;i++){
      for(int j=0;j<=tpc;j++){
        if(fn[i]>0 && ctp[j]>0){
         xn=ctp[j]*fn[i];
         xni=xn*2;
         xnp=xn/2;
         dia=ctp[j]/fn[i];
         diaf=fn[i]/ctp[j];
         tst=xn*xn;
         tsi=xni*xni;
         tsy=xnp*xnp;
         di=dia*dia;
         df=diaf*diaf;
         cout<<std::setprecision(preci) <<ctp[j] << " * " <<std::setprecision(preci) << fn[i] <<  " ::== " << std::setprecision(preci) <<xn <<" || of *2 " <<std::setprecision(preci) << xni << " ||  of /2 "<<std::setprecision(preci) << xnp <<" || / " <<
         std::setprecision(preci)<<di << " or " << std::setprecision(preci) <<df<<"\n";
         cout<<" -------> " << std::setprecision(preci)<<tst << " " << std::setprecision(preci) << tsi << " " << std::setprecision(preci)<<tsy <<" " << std::setprecision(preci)<<di << " " << std::setprecision(preci) <<df <<"\n";
      }
      }
   }
}


 cout<<"want to show the results of array one ? \n";
    cout<<"press 2 to show the first array on 0 to continue \n";
    cin>>xpress;
    if(xpress==2){
    cout<<"\n";
    cout<<" of cpt \n";
     for(int i=0;i<=fl-1;i++){
      for(int j=0;j<=cpt;j++){
        if(fn[i]>0 && ptc[j]>0){
         xn=ptc[j]*fn[i];
         xni=xn*2;
         xnp=xn/2;
         dia=ptc[j]/fn[i];
         diaf=fn[i]/ptc[j];
         tst=xn*xn;
         tsi=xni*xni;
         tsy=xnp*xnp;
         di=dia*dia;
         df=diaf*diaf;
         cout<<std::setprecision(preci) <<ptc[j] << " * " <<std::setprecision(preci) << fn[i] <<  " ::== " << std::setprecision(preci) <<xn <<" || of *2 " <<std::setprecision(preci) << xni << " ||  of /2 "<<std::setprecision(preci) << xnp <<" || / " <<
         std::setprecision(preci)<<di << " or " << std::setprecision(preci) <<df<<"\n";
         cout<<" -------> " << std::setprecision(preci)<<tst << " " << std::setprecision(preci) << tsi << " " << std::setprecision(preci)<<tsy <<" " << std::setprecision(preci)<<di << " " << std::setprecision(preci) <<df <<"\n";
      }
      }
   }
   }
   if(xpress==0){return 0;}



    return 0;
}
