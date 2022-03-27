#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[100], size, pos, value, i, temp;
cout <<"Enter the size of the array max(100):\n";
cin >>size;

cout <<"Enter the elements in athe array ";

for ( i = 0; i < size; i++)

{
cin >>arr[i];
	/* code */
}



//postion for hte elemnts to bve entered 

cout <<"Neter the postion for the element to be enterd ";
cin >> pos;

//input the value fot the eklement

cout << "Enter the value of the elemnt to be entered";
cin >>value;

//shift the array by one position 
for ( i = size; i < pos; i--){
	arr[i] =arr[i-1];
	/* code */
}

//incerease the size of the array 
size ++;

//insert new vale in the array
arr[pos-1] =value;

//printing the new array
for ( i = 0; i < size; i++)

{
cout <<arr[i]<<" ";



}


	return 0;
}
