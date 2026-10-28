#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("data.txt","w");
fprintf(fp,"For me, I have already learnt c.\nSo learning it second time make me feel more confident in c.\nBut I still have a difficulty in array concept.\nFinally I think I have completed a mother language.");
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"In my opinion,sir takes class continuously and din't give us a time to relax.\nHe takes more theory classes than lab sessions.\nHe tell more real life examples.\nOne funny opinion,he is like shouting and dancing in DACE while taking class.");
fclose(fp);
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}