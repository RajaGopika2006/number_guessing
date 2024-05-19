#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
class guess
{
    int target;
    int choice;
    public :
    guess()
    {
        srand ((unsigned int)time(NULL));
        choice=(rand() %10)+1;
        target=0;
    
    do
    {
      cout<<"\nenter your guess : (1:10)";
      cin>>target;
      if(target>choice)
        cout<<"\nyour guess is maximum to the target !";
      if(target<choice)
        cout<<"\nyour guess is minimum to the target !";
      else if(target==choice)
        cout<<"\nawesome ! you have found the target";
      
    } while(target!=choice);
    }

};
int main()
{
    guess g ; 
    return 0;
}
