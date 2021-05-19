#include<stdio.h>
#include<stdlib.h>
int main()
{
    // shearing strength of bolts
int i;
float grade_of_bolt, Fy,Fub,Fu,Nn,Nbn,Ns,Blj,Blg,Bpk,Anb,Ans,An,B,n,Dh,t,d,Tdn,Vnsb,Vdsb,Asb,Lj,Lg,Tpk,Vnpb,e,p,Vdpb,Eff,Sp,Rmo,Ag;
float Kb =10.0;
float a,c,x,Tb,V,safe,Num,Bf,chota;

//printf("Fub = ultimate shear strength of bolt\n");
//printf("Nn = No of shear planes with threads intercepting the shear plane\n");
//printf("Ns= No of shear planes without threads intercepting the shear plane\n");
//printf("Blj= A reduction factor to allow foor the overloading of end bolts that occur in big connection\n");
//printf("Blg= A reduction factor to allow foor the effect of large grip length\n");
//printf("Bpk= A reduction factor to account foor packing plates in excess of 6 mm\n");
//printf("Anb= Net shear area of the bolt at threads may be taken\n");
//printf("Ans= Nominal plain shank area of the bolt\n");

printf("Enter the value of Fu_ultimate_strength\n");
scanf("%f",&Fu);

printf("Enter the value of Fub_ultimate_shear_strength of bolt\n");
scanf("%f",&Fub);

printf("Enter the value of Fy\n");
scanf("%f",&Fy);

printf("Enter the value of d_nominal_dia\n");
scanf("%f",&d);

printf("Enter the value of Nn_No_of_shear_planes\n");
scanf("%f",&Nn);

printf("Enter the value of Ns_shear_plan_without_threads\n");
scanf("%f",&Ns);

printf("Enter the value of Nbn_total_bolts\n");
scanf("%f",&Nbn);

printf("Enter the value of B_width\n");
scanf("%f",&B);

printf("Enter the value of n_no_of_bolts_in_a_side\n");
scanf("%f",&n);

printf("Enter the value of t_thickness\n");
scanf("%f",&t);
                                              //plate strength in joint
                                             // Net Area 

printf("design strength of plate in joint is(Tdn):\n");
 Dh = d + 2.0;
An = (B - n*Dh)*t ;
printf("Value of An is %f\n",An);

                                              //Design strength of plates in joint

printf("Tdn = 0.9An(Fu/1.25)\n");
Tdn = (0.9)*An*(Fu/1.25);
printf("Value of Tdn is %f\n",Tdn);

                                             //designing strength in shear;
Anb = Nbn*Nn*(0.78)*(3.14)*(d)*(d)/4;
Blj = 1.075 - (Lj)/(200*d);
Blg = (8*d)/(3*d + Lg) ;
Bpk = 1 - 0.0125*Tpk ;
Asb = Nbn*Nn*(3.14)*(d)*(d)/4;
Vnsb = Fub*(Nn*Anb + Ns*Asb)/(1.73) ;
printf("Value of Vnsb is %f\n",Vnsb);

                                               // strength of bolt
Vdsb = Vnsb/(1.25) ;
printf("strength of bolt,Vdsb_design_strength_in_shear is: %f\n",Vdsb);

                                              // bearing strength of bolt
printf("normal bearing strength of bolt:\n");
printf("Vnpb = 2.5Kb*d*t*Fu \n");

                                                // function for Kb:
printf("Enter the value of e_End_distance_of fastener\n");
scanf("%f",&e);

printf("Enter the value of p_pitch_distance_of fastener\n");
scanf("%f",&p);

   
    a = e/(3 * Dh);
    c = (p/(3 * Dh))-0.25;
    x =  Fub/Fu ;
    printf("value of  a = e/(3 * Dh) is %f\n",a);
    printf("value of  c = (p/(3 * Dh))-0.25 is %f\n",c);
    printf("value of x =  Fub/Fu  is %f\n",x);

    float kab[] = {a,c,x,1.0};
    
   for(i=0;i<4;i++){
   if(Kb >= kab[i]){
    Kb = kab[i];
    }
    }
    printf("Kb is %f\n",Kb);


Vnpb = (2.5)*Kb*d*t*Fu;
printf("value of nominal Bearing ,Vnpb_nominal_strength_bolt is:%f \n", Vnpb);
                         
                          // Design bearing strength of bolt
Vdpb = Nbn*Vnpb/(1.25) ;
printf("Value of Vdpb = Nbn*Vnpb/(1.25) is : %f \n",Vdpb);

                         // Efficiency of joint
    Ag = B*t;
    Rmo = 1.10;
    Sp = Fy * Ag/Rmo ;
    Eff = Vdsb*100.0/ Sp;
    printf("Efficiency, Eff = Tdn*100.0/ Sp  is :%f\n ",Eff);

                     // combined shear and tension safety check
    printf("Enter the value of Tb\n");
    scanf("%f",&Tb);
    printf("Enter the value of V\n");
    scanf("%f",&V);
    if (Tdn > Tb){
        printf("All set!\n");
    }
    else{
        printf("Something is wrong here!\n");
    }

    Safe = (V/Vdsb)*(V/Vdsb) + (Tb/Tdn)*(Tb/Tdn)
    if (safe <= 1.0){
        printf("You're on the safe side\n");
    }
    else {
        printf("Opps! this system is not safe\n");
    }
    printf("Enter the value of Bf_bearing_force\n");
    scanf("%f",&Bf);

    float arr[] = {Vdpb , Vdsb};
  if(Vdpb > Vdsb){
      chota = Vdsb;
  }
  else{
      chota = Vdpb;
  }


    Num = Bf/chota;
    printf("No. of bolts required is %f\n",Num);
return 0;
}
