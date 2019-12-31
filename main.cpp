/*
 * This is my solution for the classic coding interview FizzBuzz question
 * 
 * "Write a program that prints the numbers from 1 to 100. But for multiples of 
 * three print “Fizz” instead of the number and for the multiples of five print
 * “Buzz”. For numbers which are multiples of both three and five print “FizzBuzz”.
 * 
 * December 30, 2019
 * Programmer and Author: Brett Bernardi
 */
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // will print all integers between 1 - 100 
    for(int i = 1; i <= 100; i++)
    {
        // if the number is a multiple of both 3 and 5
        // logically this should be checked first
        if(i%5 == 0 && i%3 == 0)
        {
            cout << "FizzBuzz" << endl;
            
        }
        // if number is a multiple of 3 only
        else if(i%3 ==0)
        {
            cout << "Fizz" << endl;
        }
        
        // if number of multiple of 5 only
        else if(i%5 == 0)
        {
            cout << "Buzz" << endl;
        }
        
        // if number is not a multiple of either
        else 
            
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
