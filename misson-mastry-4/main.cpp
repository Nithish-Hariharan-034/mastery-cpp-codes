
//question 1/5
/*You are tasked with creating a Matrix Display System that takes a 2D array (matrix) as input and displays its elements in a grid format. The system should handle matrices of any size (M x N) and ensure proper formatting.

Input Format:

The program should accept the following inputs:

The dimensions of the matrix (M x N), where M is the number of rows and N is the number of columns.

The elements of the matrix, row by row.

Output Format:
<element_11> <element_12> ... <element_1N>
<element_21> <element_22> ... <element_2N>
...
<element_M1> <element_M2> ... <element_MN>

 


Constraints:
Constraints:
The matrix dimensions (M and N) must be positive integers.

The matrix elements can be integers or floating-point numbers.

The program should handle matrices of any size (up to a reasonable limit, e.g., 10 x 10).


Example:
Sample Input:

2
2
1 2
3 4

Sample Output:

1 2

3 4
#include<iostream>
using namespace std;
int main()
{
  int r,c;
  cin>>r>>c;
  int a[r][c];
  for(int i=0;i<r;i++)
  {
     for(int j=0;j<c;j++)
     {
       cin>>a[i][j];
     }
  }
  
  for(int i=0;i<r;i++)
  {
     for(int j=0;j<c;j++)
     {
        cout<<a[i][j];
        if(j<c-1){cout<<" ";}
     }
     cout<<endl;
  }
}*/

//___________________________________________________________________________
//question 2/5
/*You are tasked with creating a Matrix Sum Calculator that takes a 2D array (matrix) as input and calculates the sum of all its elements. The system should handle matrices of any size (M x N).

Input and Output Format:
Input:
The program should accept the following inputs:

The dimensions of the matrix (M x N), where M is the number of rows and N is the number of columns.

The elements of the matrix, row by row.

Output:
The program should display the sum of all elements in the matrix.


Constraints:
Constraints:
The matrix dimensions (M and N) must be positive integers.

The matrix elements can be integers or floating-point numbers.

The program should handle matrices of any size (up to a reasonable limit, e.g., 10 x 10).


Example:
Sample Input:

2 2
1 2
3 4

Sample Output:

10
#include<iostream>
using namespace std;
int main()
{
   int r,c,s=0;
   cin>>r>>c;
   int a[r][c];
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
      {
         cin>>a[i][j];
         s=s+a[i][j];
      }
   }
   cout<<s;
}*/

//______________________________________________________________________________________
//question 3/5
/*You are given a square matrix representing the performance metrics of a system. Your task is to calculate the sum of the elements on the primary diagonal (from the top-left to the bottom-right) of the matrix.

Input Format:

The first line contains an integer n, representing the size of the square matrix.

The next n lines contain n integers each, representing the elements of the matrix.

Output Format:

Print a single integer, the sum of the elements on the primary diagonal.


Constraints:
Constraints:

1 ≤ n ≤ 100

-1000 ≤ matrix[i][j] ≤ 1000


Example:
Sample Input:

3
1 2 3
4 5 6
7 8 9

Sample Output:

15
#include<iostream>
using namespace std;
int main()
{
   int r,s=0;
   cin>>r;
   int a[r][r];
   for(int i=0;i<r;i++){
      for(int j=0;j<r;j++){
         cin>>a[i][j];
      }
   }
   for(int i=0;i<r;i++){
      for(int j=0;j<r;j++){
         if(i==j){
           s=s+a[i][j];
         }
      }
   }
   
   cout<<s;
}*/

//______________________________________________________________________________________
//question 4/5
/*You are given a square 2D array representing the energy levels of a grid. Your task is to calculate the zigzag sum, which is the sum of elements in a zigzag pattern. The zigzag pattern starts at the top-left corner, moves right, then diagonally down-left, then down, then diagonally up-right, and so on until the bottom-right corner is reached. The matrix will always have the same number of rows and columns.

Input Format:

The first line contains an integer n, representing the size of the square matrix (rows = columns).

The next n lines contain n integers each, representing the elements of the 2D array.

Output Format:

Print a single integer, the zigzag sum of the 2D array.


Constraints:
Constraints:

1 ≤ n ≤ 100

-1000 ≤ array[i][j] ≤ 1000


#include<iostream>
using namespace std;
int main()
{
  int n,s=0;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
        cin>>a[i][j];
        if(i==0 || i==n-1 || i+j==n-1)
        {
          s=s+a[i][j];
        }
     }
  }
  cout<<s;
}*/

//____________________________________________________________________________________________________
/*Question 5/ 5
Scenario:
You are given a 2D array representing the scores of students in different subjects. Your task is to find the maximum score achieved by each student (i.e., the maximum element in each row of the 2D array).

Input Format:

The first line contains two integers, rows and columns, representing the number of students and subjects, respectively.

The next rows lines contain columns integers each, representing the scores of each student in each subject.

Output Format:

Print rows integers, each representing the maximum score of the corresponding student (row).


Constraints:
Constraints:

1 ≤ rows, columns ≤ 100

0 ≤ score ≤ 100


Example:
Sample Input:

3 4
1 2 3 4
5 6 7 8
9 10 11 12

Sample Output:

4 8 12

#include<iostream>
using namespace std;
int main()
{
  int r,c,b;
  cin>>r>>c;
  int a[r][c];
  for(int i=0;i<r;i++)
  {
     for(int j=0;j<c;j++)
     {
        cin>>a[i][j];
     }
  }
  for(int i=0;i<r;i++)
  {
      b=a[i][0];
      for(int j=0;j<c;j++)
      {
         if(a[i][j]>b)
         {
           b=a[i][j];
         }
      }
      cout<<b<<" ";
  }
}*/