# include <iostream>
using namespace std:

int main(){

int arr[100];

cout<<"size of each element:" << sizeof(arr[0]) << "bytes"<<endl;

cout << "address of array:" << arr << endl;
cout << "Address of first element:" <<&arr[0] << endl;

return 0;
