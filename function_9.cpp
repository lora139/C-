//Да се обработят елементите на масива по зададен критерий (напр.
//при a[i]>100 се умножават с 2, а при a[i]<=100 се делят на 2.)

#include <iostream>
#include <cstdlib>

using namespace std;

void createLength(int &n){
	cout << "size: ";
	cin >> n;

}

void inputArray(int *arr, int n){

	for(int i =0;i < n;i++ ){
	cout << "element " << i << ": ";
	cin >> arr[i];
	}

}

void arraySum(int *arr, int n){

	int sum =0;
	for(int i=0; i < n ;i++){
		if(arr[i] > 0)
		sum+= arr[i];
		}
	cout << "the sum of the array's elements is " << sum<<endl;
}

int main(){
	int n;
	createLength(n);
	int arr[n];
	inputArray(arr,n);
	arraySum(arr,n);

	return 0;
}
