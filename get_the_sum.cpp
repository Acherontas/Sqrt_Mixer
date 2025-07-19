#include "get_the_sum.h"
#include <string.h>
#include <iostream>
using namespace std;
get_the_sum::get_the_sum()
{
    //ctor
}

get_the_sum::~get_the_sum()
{
    //dtor
}

get_the_sum::get_the_sum(const get_the_sum& other)
{
    //copy ctor
}

get_the_sum& get_the_sum::operator=(const get_the_sum& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


long double get_the_sum::get_da_number(long double nmbi){

     string jk;
     jk.clear();
     jk+=to_string(nmbi);
     //cout<<"using " << jk << " with " << nmbi <<"\n";
     char mk;
     int lk=0;
     long double smbi=0;
     for(int i=0;i<=jk.size()-1;i++){
        mk=jk.at(i);
        if(mk=='.'){
        //cout<<"exiting with " << smbi <<"\n";
         break;}
        lk=stoi(&mk);
        smbi+=lk;
     }
   // cout<<"function returning " << smbi <<"\n";
    return smbi;
}

int get_the_sum::compare_them(long double mnb,long double nmb){
    string ab;
    string ac;

    ab+=to_string(mnb);
    ac+=to_string(nmb);
    //cout<<mnb << " " << nmb <<"\n";
    int axb=0;
    int axc=0;
    char mk;int lk;
    for(int i=0;i<=ab.size()-1;i++){
        mk=ab.at(i);
        if(mk!='.'){axb+=1;}
        if(mk=='.'){break;}
    }
   char kk;int ll;
   for(int i=0;i<=ac.size()-1;i++){
       kk=ac.at(i);
       if(kk!='.'){axc+=1;}
       if(kk=='.'){break;}
   }
   mk=ab.at(0);
   kk=ac.at(0);
   int send_it=0;
   if(axc==axb){
     if(mk==kk){
     send_it=1;
     }
   }
   return send_it;
}
