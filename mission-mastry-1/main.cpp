//mission mastetry 1


/*Raj's teacher Anu uses chalk to write on the board. When the chalk reduces to 1/squarerootNo of its original size, she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and makes another chalk of the same size and uses it. If she uses one chalk each day, in how many days will she use the given n number of chalks?

 INPUT & OUTPUT FORMAT:

Input consists of 1 integer which corresponds to the number of chalks given.
Output corresponds to the number of days in which the given number of chalks will be used.
 

Constraints:
NA


Example:
SAMPLE INPUT:

16
SAMPLE OUTPUT:

21*/


/*#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int n,tc,rc,total;
     cin>>n;
     tc=n*(1/sqrt(n));
     total =n+tc;
     while(tc>=1)
     {
          tc=tc*(1/sqrt(n));
          total=tc+total;
         
     }
     cout<<total;
}*/

//_____________________________________________________________________________________________________

/*Write a  program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is divisible by the sum of its digits.

 

 INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".

Constraints:
NA


Example:
SAMPLE INPUT:

1729
SAMPLE OUTPUT:

Harshad Number

#include<iostream>
using namespace std;
int main()
{
    int a,ans=0,r,c;
    cin>>a;
   c=a;
   
   while(c>0)
   {
     r=c%10;
     ans=ans+r;
     c=c/10;
   }
   cout<<ans<<endl;
   if( a%ans==0 )
   {
     cout<<"Harshard Number";
   }
   else
   {
     cout<<"Not Harshard Number";
   }
}*/
//______________________________________________________________________________________________________

/*Question 3/ 5
Write a program to find whether the given number is an Abundant number or not.

Note: An abundant number is a number for which the sum of its proper divisors is greater than the number itself. For example, integer 12 is an abundant number. The divisors of 12 are 1, 2, 3, 4 and 6. The sum of divisors of 12 is 16. As 12 < 16, it is an abundant number.

 

 INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If it is an Abundant number display “Abundant Number” or display “Not Abundant Number”.

Constraints:
NA


Example:
SAMPLE INPUT:

6
SAMPLE OUTPUT:

Not Abundant Number


#include<iostream>
using namespace std;
int main()
{
     int a,sum=0;
     cin>>a;
     for(int i=1;i<=a/2;i++)
     {
          if(a%i==0)
          {
              sum=sum+i;
          }
     }
     if(sum>a)
     {
         cout<<"Abundant Number";
     }
     else
     {
         cout<<"Not Abundant Number";
     }
}*/
//____________________________________________________________________________________________________

/*Write a program to find whether the given numbers are Friendly Pair or not.

Friendly pair is two or more numbers with a common abundancy index i.e the ratio between the sum of divisors of a number and the number itself. For example, 6 and 28 are a Friendly pair as (Sum of divisors of 6)/6 = (Sum of divisors of 28)/28

Note: Don't use unnecessary sentences in input or output. 

 

 INPUT & OUTPUT FORMAT:

Input consists of 2 integers.
The first integer corresponds to number 1 and the second integer corresponds to number 2.
If they are a Friendly pair, display “Friendly Pair” or display “Not Friendly Pair”.

Constraints:
NA


Example:
SAMPLE INPUT:

6
28
SAMPLE OUTPUT:

Friendly Pair 


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    double as=0,bs=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if( a%i==0)
        {
            as=as+i;
        }
    }
    
    
    for(int i=1;i<=b;i++)
    {
        if( b%i==0)
        {
            bs=bs+i;
        }
    }
  
    if(as/a == bs/b)
    {
        cout<<"yes";
    }
    else
    {
         cout<<"No";
    }
}*/

//______________________________________________________________________________

/*Write a program to find whether the given number is an Amstrong number or not. For example, 371 is an Armstrong number since 3^3+ 7^3 + 1^3 = 371.

 

INPUT & OUTPUT FORMAT:

Input consists of 1 integer.
If it is an Amstrong number, display “Armstrong Number” or display “Not Armstrong Number”.

Constraints:
NA


Example:
SAMPLE INPUT:

153
SAMPLE OUTPUT:

Armstrong Number*/

/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int a,r,c,ans=0,cc=0;
  cin>>a;
  c=a;
  while(c>0)
  {
     cc++;
     c=c/10;
  }
  c=a;
  while(c>0)
  {
    r=c%10;
    ans=ans+pow(r,cc);
    c=c/10;
  }
  if(ans==a)
  {
     cout<<"Armstrong Number";
  }
  else
  {
    cout<<"Not Armstrong Number";
  }
}*/