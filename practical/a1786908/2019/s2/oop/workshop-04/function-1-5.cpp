#include<iostream>
using namespace std;
int size_of_arrary()
{
    int *arr = new int[3];
    int size=0;
    for(int i=0;i<3;i++)
    {
        size+=(sizeof(arr[i]));
    }

    return size;
}
int main(){
    int arr[3]={1,2,3};
    cout<<size_of_variable_star_arr()<<endl;
    return 0;
}
