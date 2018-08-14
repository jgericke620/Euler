#include <stdio.h>

int get_ones(int ones);
int get_tens(int tens);
int get_hundreds(int hundreds);

void main(void)
{
    int hundred = 7;
    int thousand = 8;

    int one = 3;
    int two = 3;
    int three = 5;
    int four = 4;
    int five = 4;
    int six = 3;
    int seven = 5;
    int eight = 5;
    int nine = 4;

    int ten = 3;
    int eleven = 6;
    int twelve = 6;
    int thirteen = 8;
    int fourteen = 8;
    int fifteen = 7;
    int sixteen = 7;
    int seventeen = 9;
    int eighteen = 8;
    int nineteen = 8;
    int twenty = 6;
    int thirty = 6;
    int fourty = 6;
    int fifty = 5;
    int sixty = 5;
    int seventy = 7;
    int eighty = 6;
    int ninety = 6;

    long total = 0;

    int o;
    int t;
    int h;
    int th;

    for(int i = 1; i<1001; i++ )
    {
        o = i%10;
        t = ((i%100) - o)/10;
        h = ((i%1000) - o - t)/100;
        th = i/1000;

        //printf("%d%d%d%d\n", th,h,t,o);

        if (th == 1){
            printf("one thousand ");
            total += 11;}

        if (h != 0)
        {
            total += get_hundreds(h);
        }

        if ( (h != 0) && ( (t != 0) || (o != 0) ) )
        {
            total += 3;
            printf(" and ");
        }

        if (t != 0)
        {
            if (t == 1 )
            {
                if (o == 0) {
                    printf(" ten ");
                    total += ten;}
                if (o == 1) {
                    printf(" eleven ");
                    total += eleven;}
                if (o == 2) {
                    printf(" twelve ");
                    total += twelve;}
                if (o == 3) {
                    printf(" thirteen ");
                    total += thirteen;}
                if (o == 4) {
                    printf(" fourteen ");
                    total += fourteen;}
                if (o == 5) {
                    printf(" fifteen ");
                    total += fifteen;}
                if (o == 6) {
                    printf(" sixteen ");
                    total += sixteen;}
                if (o == 7) {
                    printf(" seventeen ");
                    total += seventeen;}
                if (o == 8) {
                    printf(" eighteen ");
                    total += eighteen;}
                if (o == 9) {
                    printf(" nineteen ");
                    total += nineteen;}
            }
            else
            {
                total = total + get_tens(t);
            }
            
        }
        if (o != 0 && t != 1)
        {
            total = total + get_ones(o);
        }


        printf("\n");
        //printf("Total ; %ld\n", total);
    }
    printf("\n%ld\n", total);

}

int get_ones(int ones)
{
    if(ones==1){ 
        printf(" one ");
        return 3;}
    if(ones==2){ 
        printf(" two ");
        return 3;}
    if(ones==3){ 
        printf(" three ");
        return 5;}
    if(ones==4){ 
        printf(" four ");
        return 4;}
    if(ones==5){ 
        printf(" five ");
        return 4;}
    if(ones==6){ 
        printf(" six ");
        return 3;}
    if(ones==7){ 
        printf(" seven ");
        return 5;}
    if(ones==8){ 
        printf(" eight ");
        return 5;}
    if(ones==9){ 
        printf(" nine ");
        return 4;}
    return 0;

}
int get_tens(int tens)
{
    if(tens==2){ 
        printf(" twenty ");
        return 6;}
    if(tens==3){ 
        printf(" thirty ");
        return 6;}
    if(tens==4){ 
        printf(" forty ");
        return 5;}
    if(tens==5){ 
        printf(" fifty ");
        return 5;}
    if(tens==6){ 
        printf(" sixty ");
        return 5;}
    if(tens==7){ 
        printf(" seventy ");
        return 7;}
    if(tens==8){ 
        printf(" eighty ");
        return 6;}
    if(tens==9){ 
        printf(" ninety ");
        return 6;}
    return 0;
}
int get_hundreds(int hundreds)
{
    if(hundreds==1){ 
        printf(" one hundred ");
        return 10;}
    if(hundreds==2){ 
        printf(" two hundred ");
        return 10;}
    if(hundreds==3){ 
        printf(" three hundred ");
        return 12;}
    if(hundreds==4){ 
        printf(" four hundred ");
        return 11;}
    if(hundreds==5){ 
        printf(" five hundred ");
        return 11;}
    if(hundreds==6){ 
        printf(" six hundred ");
        return 10;}
    if(hundreds==7){ 
        printf(" seven hundred ");
        return 12;}
    if(hundreds==8){ 
        printf(" eight hundred ");
        return 12;}
    if(hundreds==9){ 
        printf(" nine hundred ");
        return 11;}
    return 0;

}
