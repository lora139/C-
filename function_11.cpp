//Да се сортира масива по метода на „Мехурчето“

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

void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}

void sortArray(int *arr, int n){

	//5 4 2 1 3
	for(int i=0; i < n;i++){
		for(int j= 0; j < n-1;j++){
			if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
		}
	}

}

void printArray(int *arr, int n){
	cout << "array: ";
	for(int i=0; i < n;i++){
	 if(i % 5 == 0) cout << endl;
	 cout << arr[i] << " ";
	}
	cout << endl;

}

int main(){
	int n;
	createLength(n);
	int arr[n];
	inputArray(arr,n);
	printArray(arr,n);
	sortArray(arr,n);
	printArray(arr,n);

	return 0;
}
