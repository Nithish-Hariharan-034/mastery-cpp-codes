/*Write a  program to generate the following pattern.

SAMPLE INPUT:
3

 
SAMPLE OUTPUT:
1
131
13531

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<=i;j++)
          {
              cout<<(j*2)+1;
          }
          for(int k=i;k>0;k--)
          {
              cout<<(k*2)-1;
          }
          cout<<endl;
     }
}*/

//____________________________________________________________________
/*Question 2/ 5
Write a program to generate the following pattern.

SAMPLE INPUT:
3

 
SAMPLE OUTPUT:
*
*1*
*121*
*12321*
*121*
*1*
*


Constraints:
NA


Example:
NA


Explanation:
NA

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     cout<<"*"<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<"*";
          for(int j=0;j<=i;j++)
          {
              cout<<j+1;
          }
          for(int k=i;k>0;k--)
          {
              cout<<k;
          }
          cout<<"*";
          cout<<endl;
     }
     
     for(int i=0;i<n-1;i++)
     {
         
         cout<<"*";
          for(int j=0;j<n-1-i;j++)
          {
               cout<<j+1;
          }
          for(int k=(n-2)-i;k>0;k--)
          {
              cout<<k;
          }
          
          cout<<"*";
          cout<<endl;
     }
     cout<<"*";
     
}*/
//_______________________________________________________________________________________________

/*Problem Statement:
Write a C program to print an hourglass-shaped number pattern where:

The upper half is an increasing sequence of numbers row by row

The lower half mirrors the upper half in decreasing order

Each row contains consecutive integers

Numbers increment continuously across rows (no reset between rows)

Input Format:
A single integer n (1 ≤ n ≤ 8) representing the number of rows in the upper half of the hourglass

Output Format:
Print an hourglass pattern with 2n-1 rows of numbers


Constraints:
1 ≤ n ≤ 8 (to prevent integer overflow and keep output manageable)

Each number must be printed consecutively without spaces between digits

The pattern must be perfectly aligned (each row starts at the first column)

Maximum number in the pattern will be n(n+1)/2 (for n=8, maximum is 36)

Program must handle all edge cases (n=1 and n=8)

No leading/trailing spaces in any row

No extra blank lines in output


Example:
Sample Input:

3

Sample Output:

1
23
456
23
1


Explanation:
NA


Public Test Cases:
#	Input	Expected Output
1	
3
1
23
456
23
1
2	
8
1
23
456
78910
1112131415
161718192021
22232425262728
2930313233343536
22232425262728
161718192021
1112131415
78910
456
23
1    

#include<iostream>
using namespace std;
int main()
{
    int n,a=1,x=0;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        x=0;
         for(int j=0;j<=i;j++)
         {
             cout<<a++;
             x++;
         }
         b[i]=x;
         cout<<endl;
    }
    for(int i=n-1;i>=0;i--)
    {
         a=a-b[i-1]-b[i];
          for(int j=0;j<i;j++)
          {
              cout<<a++;
          }
          cout<<endl;
    }
    
}*/
//_______________________________________________________________________________________________
/*Write a C program to print Pascal's Triangle up to n rows, where each number is the sum of the two numbers directly above it. The triangle should be properly aligned with each row centered.

Input Format:

A single integer n (1 ≤ n ≤ 10), representing the number of rows.

Output Format:

Print Pascal's Triangle with n rows.

Each row should be centered, with numbers separated by a space.

The first and last numbers in each row should always be 1.


Constraints:
The maximum number of rows (n) is 10 to prevent integer overflow.

The triangle must be symmetric and properly formatted.


Example:
Sample Input:

5

Sample Output:

    1  
   1 1  
  1 2 1  
 1 3 3 1  
1 4 6 4 1  

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
         for(int j=0;j<(n-1)-i;j++)
         {
              cout<<" ";
         }
         
         for(int k=0;k<i+1;k++)
         {
            int c;
            if(k==0)
            {
                c=1;
            }
            else
            {
                c=c*(i-k+1)/k;
            }
            cout<<c<<" ";
            
         }
         cout<<endl;
	}     
    
}*/

//________________________________________________________________
/*Write a C program that prints an alphabet 'M' pattern using asterisks (*). The pattern should have the following characteristics:

Input Format:
The program should accept a single integer n representing the number of rows (height) of the pattern.

The input must be an odd integer ≥ 3.

Output Format:
Print the 'M' pattern where:

The width of the pattern is 2n - 1 characters.

The pattern consists of * and spaces.

The two legs of 'M' should be separate at the bottom.


Constraints:
3 ≤ n ≤ 25 (to prevent excessively large patterns)

n must be odd (to maintain symmetry).


Example:
Sample Input:

7

Sample Output:

*           *
**         **
* *       * *
*  *     *  *
*   *   *   *
*    * *    *
*     *     *


#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int w=(2*n)-1;
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<w;j++)
          {
               if(j==0||j==w-1||j==i||j+i==w-1)
               {
                   cout<<"*";
               }
               else
               {
                   cout<<" ";
               }
          }
          cout<<endl;
     }
}*/