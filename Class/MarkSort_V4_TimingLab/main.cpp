/*
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on May 23th, 2016, 10:19 AM
 * Purpose:  Timing study
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <iomanip> //Format
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void mrkSrtDB(int [],int [],int);//Sort the whole array
void mrkSrt3(int [],int);//Sort the whole array
void mrkSrt1(int [],int);//Sort the whole array
void smlNLst(int [],int, int);//Find smallest in list from a position
void swap(int &,int &);//Swap elements
void prntAry(int [],int, int);//Print the array with columns
void fillAry(int [],int [],int);//Fill array with 2 digit random numbers
void copy(int [],int [],int);//Copy the data

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100000;
    int index[SIZE];
    int array1[SIZE];
    int array2[SIZE];
    int array3[SIZE];
    
    //Fill the array
    fillAry(array1,index,SIZE);
    copy(array1,array2,SIZE);
    copy(array1,array3,SIZE);
    

    
    //Time the different sorting routines
    int beg=time(0);
    mrkSrt3(array1,SIZE);
    int end=time(0);
    cout<<"Total time for 3 function sort = "<<end-beg<<" sec"<<endl;
    
    beg=time(0);
    mrkSrt1(array2,SIZE);
    end=time(0);
    cout<<"Total time for 1 function sort = "<<end-beg<<" sec"<<endl;
    
    beg=time(0);
    mrkSrtDB(array3,index,SIZE);
    end=time(0);
    cout<<"Total time for DB function sort = "<<end-beg<<" sec"<<endl;
    
  
    //Exit Stage Right!
    return 0;
}
void mrkSrtDB(int a[],int indx[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[indx[i]]>a[indx[j]]){
                indx[i]=indx[i]^indx[j];
                indx[j]=indx[i]^indx[j];
                indx[i]=indx[i]^indx[j];
            }
        }
    }
}

void copy(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void mrkSrt1(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void mrkSrt3(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlNLst(a,n,i);
    }
}

void smlNLst(int c[],int l,int pos){
    for(int i=pos+1;i<l;i++){
        if(c[pos]>c[i])swap(c[pos],c[i]);
    }
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void prntAry(int b[],int m, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

void fillAry(int a[],int index[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand();
        index[i]=i;
    }
}