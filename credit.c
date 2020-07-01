#include<stdio.h>
#include<math.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int arr[20];
    double n;
    long long credit;
    for(;;)
    {
        credit = get_long_long("Number :");

        if (credit)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    n= log10((double)credit)+1;
    int size = floor(n);
    for(int i = size-1;i >= 0;i--,credit /= 10)
    {
        arr[i] = credit % 10;
    }
    int sumodd = 0;
    for (int i = 0; i <size; i += 2)
    {
        int x= arr[i] * 2;
        if (x > 9)
        {
            while(x > 0)
            {
                int j =x % 10;
                sumodd += j;
                x = x/10;
            }
        }
        else
        {
            sumodd += x;
        }
    }
    int sumeven = 0;
    for(int i=1 ; i<size; i += 2)
    {
        int x = arr[i];
        sumeven += x;
    }

    int totalsum = sumodd + sumeven;
    if (totalsum % 10 == 0)
    {
        int firstnum;
        firstnum = arr[0] * 10+ arr[1];
        if (arr[0]==4 && (size==13 || size==16))
        {
            puts("\nVISA\n");
        }
        else if ((firstnum > 50 && firstnum < 56) && size == 16)
        {
            puts("\nMASTERCARD\n");
        }
        else if ((firstnum == 34 || firstnum == 37) && size == 15)
	    {
	 	    puts("\nAMEX");
	    }
	    else
	    {
	 	puts("\nINVALID");
	    }



    }
    else
    {
        puts("\nINVALID");
    }




}
