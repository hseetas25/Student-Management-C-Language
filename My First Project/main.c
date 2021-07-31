#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>
struct student{
    char *name;
    int id;
    float attendence;
    int marks;
    float average;
    float percentage;
};
    int main()
    {
     int i,num=60,n,count=0,r,p,s,t,d;
     struct student st[num];
     st[0].name="ADDI SATHVIKA";
     st[0].id=501;
     st[0].attendence=89;
     st[0].marks=109;
     st[0].average=27.25;
     st[0].percentage=90.83;

     st[1].name="AMETI SADHANA";
     st[1].id=502;
     st[1].attendence=91.42;
     st[1].marks=107.5;
     st[1].average=26.875;
     st[1].percentage=89.58;

     st[2].name="ANNAM NAVYA SREE";
     st[2].id=503;
     st[2].attendence=91.63;
     st[2].marks=96;
     st[2].average=24;
     st[2].percentage=80;

     st[3].name="KADALI ANUSHA";
     st[3].id=504;
     st[3].attendence=87.12;
     st[3].marks=102;
     st[3].average=25.5;
     st[3].percentage=85;

     st[4].name="BALAGA SATEESH";
     st[4].id=505;
     st[4].attendence=94.12;
     st[4].marks=112;
     st[4].average=28;
     st[4].percentage=93.34;

     st[5].name="BANDI APOORVA";
     st[5].id=506;
     st[5].attendence=80.12;
     st[5].marks=102;
     st[5].average=25.5;
     st[5].percentage=85;

     st[6].name="BAYAGANI SRI SATYA";
     st[6].id=507;
     st[6].attendence=86;
     st[6].marks=82;
     st[6].average=20.5;
     st[6].percentage=68.33;

     st[7].name="BELAPURE ASHISH";
     st[7].id=508;
     st[7].attendence=87.97;
     st[7].marks=78;
     st[7].average=19.5;
     st[7].percentage=65;

     st[8].name="BONDALA ROSHAN KUMAR";
     st[8].id=509;
     st[8].attendence=93.13;
     st[8].marks=104.5;
     st[8].average=26.125;
     st[8].percentage=87.083;

     st[9].name="CHINTAMANENI MAHA LAKSHMI";
     st[9].id=510;
     st[9].attendence=95;
     st[9].marks=110;
     st[9].average=27.5;
     st[9].percentage=91.67;

     st[10].name="CHUNDRU HARSHITHA";
     st[10].id=511;
     st[10].attendence=96.14;
     st[10].marks=115.5;
     st[10].average=28.875;
     st[10].percentage=96.25;

     st[11].name="CILARAPU PRITHVI RAJ";
     st[11].id=512;
     st[11].attendence=69.64;
     st[11].marks=74;
     st[11].average=18.5;
     st[11].percentage=61.67;

     st[12].name="DAMERA SRUTHI";
     st[12].id=513;
     st[12].attendence=87.77;
     st[12].marks=75;
     st[12].average=18.75;
     st[12].percentage=62.5;

     st[13].name="DUGGASANI YASHWANTH REDDY";
     st[13].id=514;
     st[13].attendence=92.40;
     st[13].marks=111;
     st[13].average=27.75;
     st[13].percentage=92.5;

     st[14].name="GANGULA ARVIND REDDY";
     st[14].id=515;
     st[14].attendence=80;
     st[14].marks=70;
     st[14].average=17.5;
     st[14].percentage=58.33;

     st[15].name="GOGINENI GOPI KRISHNA";
     st[15].id=516;
     st[15].attendence=92;
     st[15].marks=114;
     st[15].average=28.5;
     st[15].percentage=95;

     st[16].name="GUNDARAM ANUSHKA";
     st[16].id=517;
     st[16].attendence=92;
     st[16].marks=90;
     st[16].average=22.5;
     st[16].percentage=75;

     st[17].name="KALAKATA YAGNA REDDY";
     st[17].id=518;
     st[17].attendence=95;
     st[17].marks=120;
     st[17].average=30;
     st[17].percentage=100;

     st[18].name="KALLEDI SHREE SHRUTHA";
     st[18].id=519;
     st[18].attendence=85;
     st[18].marks=60;
     st[18].average=15;
     st[18].percentage=50;

     st[19].name="KAMALA PRIYA VEGE";
     st[19].id=520;
     st[19].attendence=94;
     st[19].marks=112.5;
     st[19].average=28.125;
     st[19].percentage=93.75;

     st[20].name="KAMMARI SAI ADITYA CHARY";
     st[20].id=521;
     st[20].attendence=78.54;
     st[20].marks=94;
     st[20].average=23.5;
     st[20].percentage=78.3;

     st[21].name="KANAGALA RAMU";
     st[21].id=522;
     st[21].attendence=90;
     st[21].marks=95;
     st[21].average=22.5;
     st[21].percentage=79.16;

     st[22].name="KANKANALA SRIJA";
     st[22].id=523;
     st[22].attendence=92;
     st[22].marks=106;
     st[22].average=26.5;
     st[22].percentage=93.36;

     st[23].name="KANNEGUNDLA L N SRI RAM";
     st[23].id=524;
     st[23].attendence=95.6;
     st[23].marks=111;
     st[23].average=27.75;
     st[23].percentage=92.5;

     st[24].name="KARUMANCHI LEELA VARA PRASAD";
     st[24].id=525;
     st[24].attendence=92;
     st[24].marks=105;
     st[24].average=26.25;
     st[24].percentage=57.5;

     st[25].name="KESARI HRUDAY VIKAS REDDY";
     st[25].id=526;
     st[25].attendence=98;
     st[25].marks=93;
     st[25].average=23.25;
     st[25].percentage=77.5;

     st[26].name="KETHAVATH SHANKAR";
     st[26].id=527;
     st[26].attendence=75.38;
     st[26].marks=72;
     st[26].average=18;
     st[26].percentage=60;

     st[27].name="KODIGANTI RAVI KUMAR";
     st[27].id=528;
     st[27].attendence=77;
     st[27].marks=96;
     st[27].average=24;
     st[27].percentage=80;

     st[28].name="KONDUTI YESHWANTH";
     st[28].id=529;
     st[28].attendence=80;
     st[28].marks=70;
     st[28].average=17.5;
     st[28].percentage=58.33;

     st[29].name="KONERU LAKSHMI VINEELA";
     st[29].id=530;
     st[29].attendence=89.2;
     st[29].marks=81;
     st[29].average=20.25;
     st[29].percentage=67.5;

     st[30].name="KOORA SUNAYANA";
     st[30].id=531;
     st[30].attendence=91;
     st[30].marks=105;
     st[30].average=26.25;
     st[30].percentage=87.5;

     st[31].name="KUNA SNEHA";
     st[31].id=532;
     st[31].attendence=90;
     st[31].marks=110;
     st[31].average=27.5;
     st[31].percentage=91.67;

     st[32].name="KUNTALA SAHITHI";
     st[32].id=533;
     st[32].attendence=90;
     st[32].marks=100;
     st[32].average=25;
     st[32].percentage=83.33;

     st[33].name="LAMABAVAI KUMMERA SRINIVAS KARTHIK";
     st[33].id=534;
     st[33].attendence=98.67;
     st[33].marks=113;
     st[33].average=28.25;
     st[33].percentage=94.16;

     st[34].name="MAVURI KIRANVINI";
     st[34].id=535;
     st[34].attendence=93;
     st[34].marks=106;
     st[34].average=26.5;
     st[34].percentage=88.33;

     st[35].name="MUNNANGI PRANATHI";
     st[35].id=536;
     st[35].attendence=85;
     st[35].marks=80;
     st[35].average=20;
     st[35].percentage=66.67;

     st[36].name="NALLANI CHAKRAVARTHULA VEDITH";
     st[36].id=537;
     st[36].attendence=91;
     st[36].marks=95;
     st[36].average=23.75;
     st[36].percentage=79.16;

     st[37].name="NANNEPAGA SOWMYA SREE";
     st[37].id=538;
     st[37].attendence=82.10;
     st[37].marks=89.5;
     st[37].average=22.35;
     st[37].percentage=74.5;

     st[38].name="NEELIMA REDDY KODEDHALA";
     st[38].id=539;
     st[38].attendence=85;
     st[38].marks=80;
     st[38].average=20;
     st[38].percentage=66.67;

     st[39].name="NEERADI JAHNAVI";
     st[39].id=540;
     st[39].attendence=90;
     st[39].marks=80;
     st[39].average=20;
     st[39].percentage=66.67;

     st[40].name="NUNEMUNTALA VARDHAN GOUD";
     st[40].id=541;
     st[40].attendence=92;
     st[40].marks=97;
     st[40].average=24.25;
     st[40].percentage=80.83;

     st[41].name="PALTHIYA SURESH";
     st[41].id=542;
     st[41].attendence=85;
     st[41].marks=95;
     st[41].average=23.75;
     st[41].percentage=79.16;

     st[42].name="PARSI NIHARIKA";
     st[42].id=543;
     st[42].attendence=92;
     st[42].marks=110;
     st[42].average=27.5;
     st[42].percentage=91.67;

     st[43].name="PATTAMSETTI SAI ROHAN";
     st[43].id=544;
     st[43].attendence=93.29;
     st[43].marks=90;
     st[43].average=22.5;
     st[43].percentage=75;

     st[44].name="POTLAPELLI SAI KOUSHIK";
     st[44].id=545;
     st[44].attendence=91;
     st[44].marks=113.5;
     st[44].average=28.375;
     st[44].percentage=91;

     st[45].name="RAPARTHI SAI PRIYA";
     st[45].id=546;
     st[45].attendence=91;
     st[45].marks=92;
     st[45].average=23;
     st[45].percentage=76.67;

     st[46].name="RAPOLE RAMSAI";
     st[46].id=547;
     st[46].attendence=85;
     st[46].marks=90;
     st[46].average=22.5;
     st[46].percentage=75;

     st[47].name="RAYAPURTHI VIJAYA";
     st[47].id=548;
     st[47].attendence=90.04;
     st[47].marks=94;
     st[47].average=23.5;
     st[47].percentage=78.33;

     st[48].name="REGATTE SAI KISHORE REDDY";
     st[48].id=549;
     st[48].attendence=92.42;
     st[48].marks=102;
     st[48].average=25.5;
     st[48].percentage=85;

     st[49].name="REGULAPATI VENKAT GOUTHAM";
     st[49].id=550;
     st[49].attendence=86;
     st[49].marks=94;
     st[49].average=23.5;
     st[49].percentage=78.33;

     st[50].name="RUDROJU SAITEJA";
     st[50].id=551;
     st[50].attendence=82;
     st[50].marks=94.5;
     st[50].average=23.625;
     st[50].percentage=78.75;

     st[51].name="SABBITHI YAHWANTH";
     st[51].id=552;
     st[51].attendence=90;
     st[51].marks=80;
     st[51].average=20;
     st[51].percentage=66.67;

     st[52].name="SIVVALA VINAY";
     st[52].id=553;
     st[52].attendence=90;
     st[52].marks=100;
     st[52].average=25;
     st[52].percentage=83.33;

     st[53].name="SRIJA TULASI";
     st[53].id=554;
     st[53].attendence=91.9;
     st[53].marks=115.5;
     st[53].average=28.875;
     st[53].percentage=96.25;

     st[54].name="SRUNGARAPU SAHITHI";
     st[54].id=555;
     st[54].attendence=80.74;
     st[54].marks=75;
     st[54].average=18.75;
     st[54].percentage=62.50;

     st[55].name="SUNKARA VAISHNAVI LAKSHMI";
     st[55].id=556;
     st[55].attendence=90.26;
     st[55].marks=80;
     st[55].average=20;
     st[55].percentage=66.67;

     st[56].name="TANUJA MALOTJ";
     st[56].id=557;
     st[56].attendence=88.50;
     st[56].marks=85;
     st[56].average=21.25;
     st[56].percentage=70.83;

     st[57].name="TEEGALA LAXMI NANADAN RAO";
     st[57].id=558;
     st[57].attendence=85.92;
     st[57].marks=65;
     st[57].average=16.25;
     st[57].percentage=54.16;

     st[58].name="THELUKUNTLA SAI CHANDRA";
     st[58].id=559;
     st[58].attendence=93.5;
     st[58].marks=115;
     st[58].average=28.75;
     st[58].percentage=95.83;

     st[59].name="VARKALA PRAMILA";
     st[59].id=560;
     st[5].attendence=93;
     st[59].marks=97;
     st[59].average=24.25;
     st[59].percentage=80.80;

     printf("\t\t\t\tVNR VIGNANA JYOTHI INSTITUTE OF ENGINNERING AND TECHNOLOGY");
     printf("\n\t\t\t\t\t\t   HYDERABAD,TELANGANA");
     printf("\n\t\t\t\t\t\t\tEstd.1995");
     printf("\n\t\t\t\t     DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING-(CSE)");
     printf("\n\t\t\t\t\t   WELCOME TO THE STUDENT MANAGEMENT SYSTEM");
     printf("\nCLASS\t\t:CSE-A");
     printf("\nCLASS STRENGTH\t:60");
     printf("\n1.\tSTUDENT ACCOUNT LOGIN");
     printf("\n2.\tCLASS STUDENT DETAILS");
     printf("\n3.\tCLASS TEACHING STAFF");
     printf("\n4.\tCLASS CRICKET TEAM");
     printf("\n5.\tCOURSES REGISTERED FOR SEMESTER-I(2019-2020)");
     printf("\n6.\tCLASS TIME TABLE AND TIMINGS");
     printf("\n7.\tLABS\n\n");
     printf("ENTER YOUR CHOICE:");
     scanf("%d",&n);
            if(n==1)
            {
                login:
                printf("\nSTUDENT ID\t:");
                scanf("%d",&i);
                printf("\nPASSWORD\t:");
                scanf("%d",&p);
                if(i>500&&i<561)
                {
                    count++;
                    if(p==i)
                    {
                    r=p%10;
                    p=p/10;
                    s=p%10;
                    t=s*10+r;
                    t=t-1;
                    printf("\t\t\t\t\t\tWELCOME 19071A0%d",i);
                    printf("\n\t\t\tNAME:%s",st[t].name);
                    printf("\n\t\t\tHALL TICKET NUMBER:19071A0%d",st[t].id);
                    printf("\n\t\t\tCONSOLIDATED ATTENDENCE:%.2f",st[t].attendence);
                    printf("\n\t\t\tMID-I MARRKS=%d",st[t].marks);
                    printf("\n\t\t\tAverage:%.2f",st[t].average);
                    printf("\n\t\t\tPercentage:%.2f",st[t].percentage);
                    printf("\n\t\t\t\t\t\tCOURSES REGISTERED FOR THE 1ST SEMESTER)");
                    printf("\n\t\t\tSUBJECT CODE\t\t\tNAME OF SUBJECT\t\t\tNAME OF FACULTY");
                    printf("\n\t\t\t19BS1BT01\t\t\tCALCULUS\t\t\tDr.VPN SRIKANTH");
                    printf("\n\t\t\t19BS1PH02\t\t\tPHYSICS\t\t\t\tDr.P.ASHOK");
                    printf("\n\t\t\t19ES1CS01\t\t\tPROGRAMMING\t\t\tS.SWAPNA");
                    printf("\n\t\t\t19ES1EE01\t\t\tELECTRONICS\t\t\tA.GIRI PRASAD");
                    printf("\n\t\t\t19ES3ME02\t\t\tDRAWING\t\t\t\tS.SAI HARI");
                    printf("\n\t\t\t19PW4CS01\t\t\tD S\t\t\t\tA.NAGARAJ");
                    }
                else if(count==3)
                    {
                    printf("Please contact Administrator to unlock your account");
                    exit(0);
                    }
                else
                    {
                    printf("Your Entered User ID or Password is incorrect.");
                    printf("You have %d more attempts",3-count);
                    goto login;
                    }
            }
            else{
                printf("Your Entered User ID does not match with our records.");
                goto login;
            }

            }
            else if(n==2){
            printf("\n*\tHALL TICKET NUMBER\t\t\tSTUDENT NAME\t\t\t*");
    printf("\n*\t19071A0501\t\t\t\tADDI SATHVIKA\t\t\t*");
    printf("\n*\t19071A0502\t\t\t\tAMETI SADHANA\t\t\t*");
    printf("\n*\t19071A0503\t\t\t\tANNAM NAVYA SREE\t\t*");
    printf("\n*\t19071A0504\t\t\t\tKADALI ANUSHA\t\t\t*");
    printf("\n*\t19071A0505\t\t\t\tBALAGA SATEESH\t\t\t*");
    printf("\n*\t19071A0506\t\t\t\tBANDI APOORVA\t\t\t*");
    printf("\n*\t19071A0507\t\t\t\tBAYAGANI SRI SATYA\t\t*");
    printf("\n*\t19071A0508\t\t\t\tBELAPURE ASHISH\t\t\t*");
    printf("\n*\t19071A0509\t\t\t\tBONADALA ROSHAN KUMAR\t\t*");
    printf("\n*\t19071A0510\t\t\t\tCHINTAMANENI MAHA LAKSHMI\t*");
    printf("\n*\t19071A0511\t\t\t\tCHUNDRU HARSHITHA\t\t*");
    printf("\n*\t19071A0512\t\t\t\tCILARAPU PRITHVI RAJ\t\t*");
    printf("\n*\t19071A0513\t\t\t\tDAMERA SRUTHI\t\t\t*");
    printf("\n*\t19071A0514\t\t\t\tDUGGASANI YASHWANTH REDDY\t*");
    printf("\n*\t19071A0515\t\t\t\tGANGULA ARAVIND REDDY\t\t*");
    printf("\n*\t19071A0516\t\t\t\tGOGINENI GOPI KRISHNA\t\t*");
    printf("\n*\t19071A0517\t\t\t\tGUNDARAM ANUSHKA\t\t*");
    printf("\n*\t19071A0518\t\t\t\tKALAKATA YAGNA REDDY\t\t*");
    printf("\n*\t19071A0519\t\t\t\tKALLEDI SHREE SHRUTHA\t\t*");
    printf("\n*\t19071A0520\t\t\t\tKAMALA PRIYA VEGE\t\t*");
    printf("\n*\t19071A0521\t\t\t\tKAMMARI SAI ADITYA CHARY\t*");
    printf("\n*\t19071A0522\t\t\t\tKANAGALA RAMU\t\t\t*");
    printf("\n*\t19071A0523\t\t\t\tKANKANALA SRIJA\t\t\t*");
    printf("\n*\t19071A0524\t\t\t\tKANNEGUNDLA L N SRI RAM\t\t*");
    printf("\n*\t19071A0525\t\t\t\tKARUMANCHI LEELA VARA PRASAD\t*");
    printf("\n*\t19071A0526\t\t\t\tKESARI HRUDAY VIKAS REDDY\t*");
    printf("\n*\t19071A0527\t\t\t\tKETHAVATH SHANKAR\t\t*");
    printf("\n*\t19071A0528\t\t\t\tKODIGANTI RAVI KUMAR\t\t*");
    printf("\n*\t19071A0529\t\t\t\tKONDUTI YESHWANTH\t\t*");
    printf("\n*\t19071A0530\t\t\t\tKONERU LAKSHMI VINEELA\t\t*");
    printf("\n*\t19071A0531\t\t\t\tKOORA SUNAYANA\t\t\t*");
    printf("\n*\t19071A0532\t\t\t\tKUNA SNEHA\t\t\t*");
    printf("\n*\t19071A0533\t\t\t\tKUNTALA SAHITHI\t\t\t*");
    printf("\n*\t19071A0534\t\t\t\tL K SRINIVAS KARTHIK\t\t*");
    printf("\n*\t19071A0535\t\t\t\tMAVURI KIRANVINI\t\t*");
    printf("\n*\t19071A0536\t\t\t\tMUNNANGI PRANATHI\t\t*");
    printf("\n*\t19071A0537\t\t\t\tNALLANI CHAKRVARTHULA VEDITH\t*");
    printf("\n*\t19071A0538\t\t\t\tNANNEPAGA SOWMYA SREE\t\t*");
    printf("\n*\t19071A0539\t\t\t\tNEELIMA REDDY KODEDHALA\t\t*");
    printf("\n*\t19071A0540\t\t\t\tNEERADI JAHNAVI\t\t\t*");
    printf("\n*\t19071A0541\t\t\t\tNUNEMUNTALA VARDHAN GOUD\t*");
    printf("\n*\t19071A0542\t\t\t\tPALTHIYA SURESH\t\t\t*");
    printf("\n*\t19071A0543\t\t\t\tPARSI NIHARIKA\t\t\t*");
    printf("\n*\t19071A0544\t\t\t\tPATTAMSETTI SAI ROHAN\t\t*");
    printf("\n*\t19071A0545\t\t\t\tPOTLAPELLI SAI KOUSHIK\t\t*");
    printf("\n*\t19071A0546\t\t\t\tRAPARTHI SAI PRIYA\t\t*");
    printf("\n*\t19071A0547\t\t\t\tRAPOLE RAMSAI\t\t\t*");
    printf("\n*\t19071A0548\t\t\t\tRAYAPURTHI VIJAYA\t\t*");
    printf("\n*\t19071A0549\t\t\t\tREGATTE SAI KISHORE REDDY\t*");
    printf("\n*\t19071A0550\t\t\t\tREGULAPATI VENKAT GOUTHAM\t*");
    printf("\n*\t19071A0551\t\t\t\tRUDROJU SAI TEJA\t\t*");
    printf("\n*\t19071A0552\t\t\t\tSABBITHI YAHWANTH\t\t*");
    printf("\n*\t19071A0553\t\t\t\tSIVVALA VINAY\t\t\t*");
    printf("\n*\t19071A0554\t\t\t\tSRIJA TULASI\t\t\t*");
    printf("\n*\t19071A0555\t\t\t\tSRUNGARAPU SAHITHI\t\t*");
    printf("\n*\t19071A0556\t\t\t\tSUNKARA VAISHNAVI LAKSHMI\t*");
    printf("\n*\t19071A0557\t\t\t\tTANUJA MALOTJ\t\t\t*");
    printf("\n*\t19071A0558\t\t\t\tTEEGALA LAKSHMI NANADAN RAO\t*");
    printf("\n*\t19071A0559\t\t\t\tTHELUKUNTLA SAI CHANDRA\t\t*");
    printf("\n*\t19071A0560\t\t\t\tVARKALA PRAMILA\t\t\t*");
    printf("\n*********************************************************************************");
    }
                else if(n==3)
                {
                    printf("\n\t\t\t\t\t\tTEACHING STAFF");
                    printf("\n\t\t\tSTAFF CODE\t\t\tNAME OF SUBJECT\t\t\tNAME OF FACULTY");
                    printf("\n\t\t\t16HSS038\t\t\tCALCULUS\t\t\tDr.VPN SRIKANTH");
                    printf("\n\t\t\t10HSS028\t\t\tPHYSICS\t\t\t\tDr.P.ASHOK");
                    printf("\n\t\t\t16CSE133\t\t\tPROGRAMMING\t\t\tS.SWAPNA");
                    printf("\n\t\t\t17EEE015\t\t\tELECTRONICS\t\t\tA.GIRI PRASAD");
                    printf("\n\t\t\t16MED051\t\t\tDRAWING\t\t\t\tS.SAI HARI");
                    printf("\n\t\t\t18AED001\t\t\tD S\t\t\t\tA.NAGARAJ");
                }
                else if(n==4)
                {
                printf("\n\t\t\t\t\t\tCRICKET TEAM");
                printf("\n\t\t\tBALAGA SATEESH");
                printf("\n\t\t\tVARDHAN");
                printf("\n\t\t\tGOUTHAM");
                printf("\n\t\t\tKARTHIK");
                printf("\n\t\t\tADITYA");
                printf("\n\t\t\tSURESH");
                printf("\n\t\t\tPRITHVI");
                printf("\n\t\t\tRAMSAI");
                printf("\n\t\t\tSRI RAM");
                printf("\n\t\t\tL V PRASAD");
                printf("\n\t\t\tNANDAN RAO");
                }
                else if(n==5)
                {
                    printf("\n\t\t\t\t\t\tCOURSES REGISTERED FOR ACADEMIC YEAR(2019-2020)");
                    printf("\n\t\t\tSUBJECT CODE\t\t\tNAME OF SUBJECT\t\t\tNAME OF FACULTY");
                    printf("\n\t\t\t19BS1BT01\t\t\tCALCULUS\t\t\tDr.VPN SRIKANTH");
                    printf("\n\t\t\t19BS1PH02\t\t\tPHYSICS\t\t\t\tDr.P.ASHOK");
                    printf("\n\t\t\t19ES1CS01\t\t\tPROGRAMMING\t\t\tS.SWAPNA");
                    printf("\n\t\t\t19ES1EE01\t\t\tELECTRONICS\t\t\tA.GIRI PRASAD");
                    printf("\n\t\t\t19ES3ME02\t\t\tDRAWING\t\t\t\tS.SAI HARI");
                    printf("\n\t\t\t19PW4CS01\t\t\tD S\t\t\t\tA.NAGARAJ");
                }
                else if(n==6)
                {
                m:
                printf("Enter the day to display time timetable:");
                scanf("%d",&d);
                 switch(d)
            {
            case 1:
                printf("\n\t\t\tMONDAY");
                printf("\n\t\tBEEE LAB(9.00AM TO 12.00PM)");
                printf("\n\t\tBEEE CLASS WORK(12.40PM TO 1.40PM ");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tCALCULUS CLASS WORK(1.40PM TO 2.40PM)");
                printf("\n\t\t360 DEGREE COGNITIVE SKILLS(2.40PM TO 4.40PM)");
                break;
            case 2:
                printf("\n\t\t\tTUESDAY");
                printf("\n\t\tPROGRAMMING CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tPHYSICS CLASS WORK(10.00AM TO 11.00AM)");
                printf("\n\t\tBEEE CLASS WORK(11.00AM TO 12.00PM )");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tDESIGN SENSITIZATION(12.40PM TO 2.40PM)");
                printf("\n\t\tPROGRAMMING CLASS WORK(2.40PM TO 3.40PM)");
                printf("\n\t\tCALCULUS CLASS WORK(3.40PM TO 4.40PM)");
                break;
             case 3:
                printf("\n\t\t\tWEDNESDAY");
                printf("\n\t\tCALCULUS CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tPROGRAMMING CLASS WORK(10.00AM TO 11.00AM)");
                printf("\n\t\tPHYSICS CLASS WORK(11.00AM TO 12.00PM )");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tENGINEER DRAWING LAB(12.40PM TO 4.40PM)");
                break;
             case 4:
                printf("\n\t\t\tTHURSDAY");
                printf("\n\t\tBEEE CLASS WORK(9.00AM TO 10.00AM)");
                printf("\n\t\tCALCULUS CLASS WORK(10.00AM TO 11.00AM)");
                printf("\n\t\tPHYSICS CLASS WORK(11.00AM TO 12.00PM )");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tPROGRAMMING LAB(12.40PM TO 4.40PM)");
                break;
             case 5:
                printf("\n\t\t\tFRIDAY");
                printf("\n\t\tPHYSICS LAB(9.00AM TO 12.00PM)");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tCALCULUS CLASS WORK(12.40PM TO 1.40PM)");
                printf("\n\t\tPHYSICS CLASS WORK(1.40PM TO 2.40PM)");
                printf("\n\t\tPROGRAMMING CLASS WORK(2.40PM TO 3.40PM)");
                printf("\n\t\tBEEE CLASS WORK(3.40PM TO 4.40PM)");
                break;
             case 6:
                printf("\n\t\t\tSATURDAY");
                printf("\n\t\tENGINEER DRAWING LAB(9.00AM TO 12.00PM)");
                printf("\n\t\tLUNCH BREAK(12.0PM TO 12.40PM)");
                printf("\n\t\tPHYSICS CLASS WORK(12.40PM TO 1.40PM)");
                printf("\n\t\tBEEE CLASS WORK(1.40PM TO 3.40PM)");
                printf("\n\t\tPROGRAMMING CLASS WORK(3.40PM TO 4.40PM)");
                break;
             case 7:
                printf("\n COLLEGE REMAINS HOLIDAY ON SUNDAY");
                break;
             default:
                printf("INVALID ENTRY");
                goto m;
            }
                }
            else if(n==7)
            {
            printf("\n\t\t\t\tLABS");
            printf("\n\t\t\tPROGRAMMING THROUGH C");
            printf("\n\t\t\tENGINEERING PHYSICS");
            printf("\n\t\t\tBASIC ELECTRICAL ENGINEERING LAB");
            printf("\n\t\t\tENGINEER DRAWING LAB");
            }
            else
            {
                printf("CHOOSE A VALID OPTION");
            }
    double time_spent = 0.0;
	clock_t begin = clock();
	Sleep(3);
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\nTime elapsed to run your project is %f seconds", time_spent);
     return 0;
    }
