/*Parser to parse input big integer value and put commans in between
 * so that they can be stored in an array
 * using
 * input_number.txt : paste your input in this file
 * output_number.txt : get your output from this file , each number separated by a comma
 */
#include<stdio.h>
int main(){
    FILE *fin,*fout;
    int num=0;
    fin=fopen("input_number.txt","r");
    fout=fopen("output_number.txt","w");
    while((num=getc(fin))!=EOF){
	if(num>=48&&num<=57){
	    //printf("\n%d",num-'0');
	    putc(num,fout);
	    putc(',',fout);
	}
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
