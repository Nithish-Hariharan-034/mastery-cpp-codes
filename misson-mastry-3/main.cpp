/*India under the brilliant captaincy of Dhoni, won the 2011 ICC Cricket World Cup defeating Sri Lanka by 6 wickets in the final in Mumbai, thus becoming the first country to win the Cricket World Cup final on home soil. This was the first time in World Cup history that two Asian teams had appeared in the final and also the first time since the 1992 World Cup that the final match did not feature Australia.

Dhoni's performance in the entire Series was commendable. To know the average of Dhoni's scores in the complete series, write a program given scores of Dhoni in "N" matches of the series

Input Format:
First line of the input is an integer "N" that specifies the scores of Dhoni in all "N" matches of the series
If the array size or any of the array elements is negative, print valid input and terminate the program.

Output Format:
Output should display a float value that gives the average of Dhoni's scores in the complete series
If the array size or any of the array elements is negative, print "Invalid Input and terminate the program


Constraints:
Constraints:
The number of matches N must be a non-negative integer (0 ≤ N ≤ 100).

Each score must be a non-negative integer (0 ≤ score ≤ 200).

If any constraint is violated, the program should print "Invalid Input" and terminate immediately.


Example:
Sample Input 1:
5
10
20
30
0
0

Sample Output 1: 
12.0


Explanation:
NA


Public Test Cases:
#	Input	Expected Output
1	
5
10
20
30
0
0
12
2	
-3
Invalid Input
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     int n;
     float b=0;
     cin>>n;
     if(n<0)
     {
       cout<<"Invalid Input";
       return 0;
     }
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        if(a[i]<0)
        {
          cout<<"Invalid Input";
          return 0; 
        }
        b=b+a[i];
     }
     cout<<b/n;
}*/
//-------------------------------------------------------------------------------------------------
/*Dhoni ranks 4 in the Record table of Most Catches in ODIs as Wicket-keeper with 265 catches playing 282 matches. He holds the record for most catches by an Indian player in a Test innings as well. He achieved this feat by taking six catches during the first innings of the third test against New Zealand in Wellington in April 2009.

Given there are "n" matches and an array in which each element contains the number of catches by Dhoni in the "n" matches, write a program to sort the matches based on the number of catches in ascending order. Use Sort method.

Input Format:
First line of the input is an integer "n" that specifies the number of matches that Dhoni has played.
Next "n" lines contain the number of catches in the "n" matches.

Output Format:
Output should display the sorted array based on the number of catches, line after line.
If the array size or any of the array elements is negative, print "Invalid Input" and terminate the program.


Constraints:
Constraints:
The number of matches n must be a non-negative integer (0 ≤ n ≤ 1000).

Each element in the array (number of catches) must be a non-negative integer (0 ≤ catches ≤ 10).

If any constraint is violated, the program should print "Invalid Input" and terminate immediately.


Example:
Sample input 1:
3
0
5
3

Sample Output 1:
0
3
5a


Explanation:
NA


Public Test Cases:
#	Input	Expected Output
1	
3
0
5
3
0
3
5
2	
-3
Invalid Input*/
//____________________________________________________________________
/*Predictably, Dhoni's unbeaten 183 against Sri Lanka at Jaipur stands out from the rest of all his batting performances. He has, over the course of his career, has played some superlative knocks. He has shown his ability to bat up the order, though he has made the No 7 position his own.

Given "N" the number of such an impact knock of Dhoni in his career, in the order of year from the start of his career in 2004 and listed his scores in each of it, reverse the list with his recent top scores in the beginning.

Input Format:
First line of the input contains an integer "N" that specifies the number of Dhoni's top scores
Next "N" lines contains each the top score of Dhoni in the order of year.

Output Format:
Output should display the top scores of Dhoni in the order reversed, line by line.
If the array size or any of the array elements is negative, print "Invalid Input and terminate the program.


Constraints:
Constraints:
The number of top scores N must be a non-negative integer (0 ≤ N ≤ 1000).

Each element in the array (top score) must be a non-negative integer (0 ≤ score ≤ 200).

If any constraint is violated, the program should print "Invalid Input" and terminate immediately.


Example:
Sample Input 1:
3 
150 
200 
100

Sample Output 1: 
100 
200
150


Explanation:
NA


Public Test Cases:
#	Input	Expected Output
1	
3 
150 
200 
100
100
200
150
2	
-5
Invalid Input

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     if(n<0)
     {
         cout<<"Invalid Input";
         return 0;
     }
     int a[n],b[n];
     for(int i=0;i<n;i++)
     {   
          cin>>a[i];
         if(a[i]<0)
         {
         cout<<"Invalid Input";
         return 0;
         }
     }
     for(int i=0;i<n/2;i++)
     {
          int x=a[i];
          a[i]=a[n-1-i];
          a[n-1-i]=x;
     }
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<endl;
     }
     
    
}*/
//____________________________________________________________________________________________________________________
/*A Manhattan is a bar graph showing the number of runs scored in each over of an innings, with wickets plotted as obvious dots on top of the bar in the over in which they occur. This gives an indication of the consistency of scoring throughout the innings, showing any periods of good scoring or particularly slow scoring, and how they relate to the falls of wicket.

An unusual increase in the graph, usually higher than its adjacent points is called a Spike. First and last points can also be the spike points. Given the runs per over of "n" overs as an Array, find the indices of the spike points.

Input Format:

First line of the input is an integer "n" that contains the number of overs.
Next "n" lines contains integers that specifies the runs per over of each of the "n" over.

Output Format:
Output should print the indices of the spike points in seperate lines. 
If the array size or any of the array elements is negative, print "Invalid Input" and terminate the program.


Constraints:
Constraints:
The number of overs n must be a non-negative integer (0 ≤ n ≤ 1000).

Each element in the array (runs per over) must be a non-negative integer (0 ≤ runs ≤ 36).

If any constraint is violated, the program should print "Invalid Input" and terminate immediately.


Example:
Sample Input 1:
5 
19
15 
20
10 
12 

Sample Output 1:
1
3
5

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     if(n<0)
     {
         cout<<"Invalid Input";
         return 0;
     }
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        if(a[i]<0)
        {
         cout<<"Invalid Input";
         return 0;
        }  
          
     }
     for(int i=1;i<n;i++)
     {
          if(a[i-1]>a[i])
          {
              cout<<i<<endl;
          }
     }
     if(n-1 > n-2 && n>2)
     {
         cout<<n;
     }
}*/

//dhoni distinct runs sum //removing duplicates 
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
              if(a[i]>a[j])
              {
                  int x=a[i];
                  a[i]=a[j];
                  a[j]=a[i];
              }
         }
    }
    
    int j=1;    
    for(int i=1;i<n;i++)
    {
         if(a[i-1]!=a[i])
         {
             a[j++]=a[i];
         }
    }
    
    for(int i=0;i<j;i++)
    {
        cout<<a[i]<<" ";
    }
}*/