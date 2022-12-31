//code for node creation
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    struct node*next;
};
//struct: ‘struct’ keyword is used to create a structure.we can use this data type to store dates of different attributes of different data types
struct address
{
   char landmark[50];
   char locality[50];
   char city[30];
   char state[20];
   int pin;
};
//struct pointer:A structure Pointer is defined as the pointer which points to the address of the memory block that stores a structure.
struct node{
    int data;
    struct node*link;
};
