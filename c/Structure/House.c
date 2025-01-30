#include<stdio.h>
#include<string.h>
struct house
{
    int houseNo;
    int block;
    char city[20];
    char state[30];

};
int main()
{
   struct house rk[5];
   rk[0].houseNo = 192;
   rk[0].block = 302022; 
   strcpy( rk[0].city,"Jaipur");
   strcpy( rk[0].state,"Rajasthan");
   printf("House details are :->\n");
   printf(" House no is  :-> %d\n",rk[0].houseNo);
   printf(" Block no is  :-> %d\n",rk[0].block);
   printf(" city is  :-> %s\n",rk[0].city);
   printf(" State is  :-> %s\n\n",rk[0].state);
   rk[1].houseNo = 193;
   rk[1].block = 302022; 
   strcpy( rk[1].city,"Jaipur");
   strcpy( rk[1].state,"Rajasthan");

   printf(" House no is  :-> %d\n",rk[1].houseNo);
   printf(" Block no is  :-> %d\n",rk[1].block);
   printf(" city is  :-> %s\n",rk[1].city);
   printf(" State is  :-> %s\n\n",rk[1].state);


   rk[2].houseNo = 194;
   rk[2].block = 302022; 
   strcpy( rk[2].city,"Jaipur");
   strcpy( rk[2].state,"Rajasthan");

   printf(" House no is  :-> %d\n",rk[2].houseNo);
   printf(" Block no is  :-> %d\n",rk[2].block);
   printf(" city is  :-> %s\n",rk[2].city);
   printf(" State is  :-> %s\n\n",rk[2].state);

   rk[3].houseNo = 195;
   rk[3].block = 302022; 
   strcpy( rk[3].city,"Jaipur");
   strcpy( rk[3].state,"Rajasthan");
   
   printf(" House no is  :-> %d\n",rk[3].houseNo);
   printf(" Block no is  :-> %d\n",rk[3].block);
   printf(" city is  :-> %s\n",rk[3].city);
   printf(" State is  :-> %s\n\n",rk[3].state);

   rk[4].houseNo = 196;
   rk[4].block = 302022; 
   strcpy( rk[4].city,"Jaipur");
   strcpy( rk[4].state,"Rajasthan");
   
   printf(" House no is  :-> %d\n",rk[4].houseNo);
   printf(" Block no is  :-> %d\n",rk[4].block);
   printf(" city is  :-> %s\n",rk[4].city);
   printf(" State is  :-> %s\n\n",rk[4].state);
   return 0;

}