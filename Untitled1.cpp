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
void distribute(int arr1[],int arr2[],int array[], int size){
    int j=0;
    for(int i=0;i<size;i++)
    {
        array[j]=arr1[i];
        j++;
        array[j]=arr2[i];
        j++;
    }
    
}
int main()
{
    int size;
    cout<<"Plz insert size of arrays"<<"\t";
    cin>>size;
    int a1[size]; int a2[size];int a3[size+size];
    cout<<"enter the element to array 1"<<"\n";
  insert_array(a1,size);
   cout<<"enter the element to array 2"<<"\n";
  insert_array(a2,size);
   cout<<"print the element in array 1"<<"\n";
  print_array(a1,size);
  cout<<"\n print the element in array 2"<<"\n";
   print_array(a2,size);
   distribute(a1,a2,a3,size);
   cout<<"\n print the element in array 3"<<"\n";
   print_array(a3,size+size);
  
}

