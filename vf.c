# include <stdio.h>

int main()
{
     int arr[11]={1,1,2,2,3,3,4,5,5,6,6};
     int freq[11];
     int i,j,ch;
     for(i=0;i<11;i++)
     freq[i]=1;
     for(i=0;i<11;i++) //0 1 2
     {
        ch=arr[i];


        for(j=i+1;j<11;j++)//1 2 3
        {
               if(ch==arr[j])
               {
                      freq[ch]++;

               }


        }


     }
     for(i=0;i<11;i++)
     {

      if(freq[i]==1)
      {
            printf("\n %d is not repeated twice",i);
      }

     }


}
