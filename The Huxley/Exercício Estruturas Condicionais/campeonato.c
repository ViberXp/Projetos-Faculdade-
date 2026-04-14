#include <stdio.h>
int main(){

    int Cv ,Ce, Cs, Ct, C, Fv, Fe, Fs, Ft, F;

    scanf("%i %i %i %i %i %i", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
    

    Ct = Cv * 3 + Ce;
    Ft = Fv * 3 + Fe;


    if(Ct == Ft){
        C = Ct + Cs;
        F = Ft + Fs;
        if (Ct > Ft)
        {
            printf("c");
        }else if (Ft > Ct){
            printf("f");
        }else{
            printf("=");
        }
        
    }else if(Ct > Ft){
        printf("c");
    }else{
        printf("f");
    }


    


    

}