
#include <iostream>
#include <string>
using namespace std;
void insert_array(int arr[], int size){
    for(int i=0;i<size;i++)
        cin>>arr[i];
}
void print_array(int arr[], int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
}
string return_name_of_number(int number){
    string numername;
  switch(number) {
      case 0:
         numername="zero"; 
         break;
      case 1:
         numername="one"; 
         break;
      case 2 :
         numername="tow"; 
         break;
      case 3 :
         numername="three"; 
         break;
       case 4:
         numername="four"; 
         break; 
         case 5:
         numername="fife"; 
         break;
         case 6:
         numername="six"; 
         break;
         case 7:
         numername="seven"; 
         break;
         case 8:
         numername="eight"; 
         break;
         case 9:
         numername="nine"; 
         case 10:
         numername="ten"; 
         break;
         break;
      default :
         numername="not_found"; 
        
   }   
   return numername;
}
void convert(int arr1[],string arr[], int size){
  
    for(int i=0;i<size;i++)
    {
      arr[i]=return_name_of_number(arr1[i]);
    }
    
}

int main()
{
    int size;
    cout<<"Plz insert size of arrays"<<"\t";
    cin>>size;
    int a1[size];string arr[size];
    cout<<"enter the element to array "<<"\n";
  insert_array(a1,size);
   cout<<"\n print the element in array"<<"\n";
  print_array(a1,size);
   convert(a1,arr,size);
   cout<<"\n print the element in array after conver to string"<<"\n";
 for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
  
}

