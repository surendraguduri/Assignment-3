//1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;//These are pointers

//2)  In the following code what is 'P'?
typedef char *charp;
const charp P;// P is pointer 

//3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}//x is an array pointer with size 3

//4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int);//integer pointer 

//5) What is pf in the below statement?
typedef int (*pf)(int);//pointer to the function

6) What do the following declarations mean?
typedef char *pc;//pointer to char type
typedef pc fpc();//fpc() is function with return type char pointer 
typedef fpc *pfpc;//pointer to the fpc()
typedef pfpc fpfpc();//fpfpc() is function with pointer return type
typedef fpfpc *pfpfpc;//pointer to above function
pfpfpc a[N];//Array of pointers of size N
*/
