#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

/*
 * main()
 * 
 * main driver function, code starts running here. takes input and 
 *  calls sortDescending function then prints final output
 * 
 * @return 0 at the end of main to indicate a successful run
 */
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/**
 * sortDescending(int&, int&, int&)
 *
 * compares all three numbers and determines if they need to be swapped
 *  if they do, it calls the swap() function
 * 
 * @param &first  is first number in sequence
 * @param &second is second number in sequence
 * @param &third  is third number in sequence
 */
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

/**
 * swap(int&, int&)
 * 
 * swaps two numbers by making the first one equal to the second and the 
 *  second equal to the first
 * 
 * @param &first  First number to swap
 * @param &second Second number to swap
 */
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
