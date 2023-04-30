#include<iostream>
#include<fstream>
using namespace std;
void dup_array(int arr[],int size);
int main()
{

int siz;
ifstream inp;
inp.open("input.txt");
inp>>siz;
int arr[siz];
for(int i=0;i<siz;i++)
{
inp>>arr[i];
}
inp.close();
dup_array(arr,siz);

	return 0;
}
void dup_array(int arr[],int size)
{
	int array[size];
	int countFilled =0;
	
	
	for(int i=0;i<size;i++)	{
		bool isDuplicate=false;
	
		for(int j=0;j<countFilled;j++){
			if(arr[i]==array[j]){
				isDuplicate=true;
				break;	
			}
		}

		if(isDuplicate == false){
			array[countFilled]=arr[i];
			countFilled++;
		}
	}
	
	for(int i=0;i<countFilled;i++){
		cout<<array[i]<<" ";
	}
	cout << endl;
	cout<<"size of the deduplicated array is:"<< countFilled<<endl;
	ofstream out;
	out.open("output.txt");
	for(int i=0;i<countFilled;i++)
	out<<array[i]<<" ";
	out<<endl;
	out<<"size of the deduplicated array is:"<< countFilled<<endl;
	out.close();
}
