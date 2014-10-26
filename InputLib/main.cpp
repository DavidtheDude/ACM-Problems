/* 
 * File:   main.cpp
 * Author: David
 *
 * Created on October 25, 2014, 10:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int charcount(string ,int );
/*
 * counts for how long input is taken in relative
 *  to current position in the input
 */


/*
 * 
 */
int main(int argc, char** argv) {
    string sn, temp;            //temporary strings
    vector <string> input;      //vector magic
    int a=0, b=0, masterIndex=0;//stuff
    getline(cin,sn);            //take it all in
        b=sn.length();          //length of string
        for(int i=0; i<b; i++){ //now we know how many times to do the for loop
            if(isdigit(sn.c_str()[i])==true){   //is it a digit
               a=i;
               i=charcount(sn,i); //read function description
               temp.assign(sn,a,i);
               input.push_back(temp);
               masterIndex++;//keep track of vector size
            }
            //if it isn't do nothing
        }
        
    return 0;
}
int charcount(string sn,int i){
    
    int c=i;
    do{
        c++;
    }while(isalnum(sn.c_str()[c])==true);
     //if it's a letter or a number, consider it input and add to the counter
    return c;
}

