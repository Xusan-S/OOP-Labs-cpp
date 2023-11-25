//U2310233 
//Samatov Xusan
#include <iostream>
#include<cmath>

using namespace std;

int main(){
int input;
int a[20];
float b[20];
char c[20];
int n, position;
do
{
	cout<<"Input 1 for program 1 " << endl;
	cout<<"Input 2 for program 2 " << endl;
	cout<<"Input 3 for program 3 " << endl;
	cout<<"Input 4 for program 4 " << endl;
	cout<<"Input 0 to exit"<<endl;
	cin >> input;
	switch(input){
		case 1://Program 1
			int dataType;
			cout<<"input 1 for integers " <<endl;
			cout<<"input 2 for float numbers " << endl;
			cout<<"input 3 for characters " << endl;
			cin >> dataType;
			switch(dataType){
			case 1:
				cout<<"input size of the array "; cin>>n;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<"input value for one particular element "; cin>>a[i];
				}
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<a[i]<<'\t';
					if (i == (n-1))
					{
						cout<<endl;
					}
				}
				break;
			case 2:
				cout<<"input size of the array ";cin >> n;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<"input value for one particular element "; cin>>b[i];
				}
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<b[i]<<'\t';
					if (i == (n-1))
					{
						cout<<endl;
					}
				}
				break;
			case 3:
				cout<<"Input size the array ";cin >> n;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<"input value for one particular element "; cin>>c[i];
				}
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<c[i]<<'\t';
					if (i == (n-1))
					{
						cout<<endl;
					}
				}
			}
			break;
		case 2://Program 2
			cout<<"input 1 for integers " <<endl;
			cout<<"input 2 for float numbers " << endl;
			cin >> dataType;
			switch(dataType){
			case 1:
					int sum;
					sum = 0;
					cout<<"input size of array "; cin >> n;
					for (int i = 0; i <= (n-1); i++)
					{
						cout<<"input value for one particular element "; cin >> a[i];
						sum += a[i];

					}
					cout<<"Avarage value is " << (sum/n) << endl;
					break;
			case 2:
					float floatsum;
					floatsum = 0;
					cout<<"Input size of array "; cin >> n;
					for (int i = 0; i <= (n-1); i++)
					{
						cout<<"input value for one particular element "; cin >> b[i];
						floatsum += b[i];
					}
					cout<<"Avarage value is "<< (floatsum/n) << endl;
			}
			break;
		case 3://Program 3
			cout<<"input 1 for integers " <<endl;
			cout<<"input 2 for float numbers " << endl;
			cout<<"input 3 for characters " << endl;
			cin >> dataType;
			switch(dataType){
			case 1:
				int integer;
				cout<<"Input size of array "; cin >> n;
				for (int i = 0; i <= (n-1); i++)
				{
					cout<<"input value for one particular element "; cin >> a[i];
				}
				cout<<"Array before insertion "<<endl;
				for (int i = 0; i <= (n-1); i++)
				{
					cout<<a[i]<<'\t';
				}
				cout<<endl;
				cout<<"Input integer you want to insert "; cin >> integer;
				cout<< "Input position "; cin >> position;
				for (int i = n; i >= position; i--)
				{
					a[i] = a[i-1];
				}
				a[position-1] = integer;
				cout<<"Array after insertion "<< endl;

				for (int i = 0; i <= n ; i++)
				{
					cout<<a[i]<<'\t';
				}
				cout<<endl;
				break;
			case 2:
				float floatnum;
				cout<<"Input size of array ";cin>>n;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<"input value for one particular element "; cin >> b[i];
				}
				cout<<"Array before insertion "<<endl;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<b[i]<<'\t';
				}
				cout<<endl;
				cout<<"Input float number you want to insert "; cin >> floatnum;
				cout<<"Input position "; cin >> position;
				for (int i = n; i>= position; i--)
				{
					b[i] = b[i-1];
				}
				b[position - 1] = floatnum;
				cout<<"Aray after insertion "<<endl;
				for (int i = 0; i <=n; i++)
				{
					cout<<b[i]<<'\t';
				}
				cout<<endl;
				break;
			case 3:
				char insertedchar;
				cout<<"Input size of array ";cin>>n;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<"input value for one particular element "; cin >> c[i];
				}
				cout<<"Array before insertion "<<endl;
				for (int i = 0; i <=(n-1); i++)
				{
					cout<<c[i]<<'\t';
				}
				cout<<endl;
				cout<<"Input character you want to insert "; cin >> insertedchar;
				cout<<"Input position "; cin >> position;
				for (int i = n; i>= position; i--)
				{
					c[i] = c[i-1];
				}
				c[position - 1] = insertedchar;
				cout<<"Aray after insertion "<<endl;
				for (int i = 0; i <=n; i++)
				{
					cout<<c[i]<<'\t';
				}
				cout<<endl;
				break;
			}
			break;
		case 4://Program 4
			cout<<"input 1 for integers " <<endl;
			cout<<"input 2 for float numbers " << endl;
			cout<<"input 3 for characters " << endl;
			cin >> dataType;
			switch(dataType){
			case 1:
				cout<<"Input size of array "; cin >> n;
    			for(int i = 0; i <= (n-1); i++){
        			cout<<"input value for one particular element "; cin >> a[i];
    			}
    			cout<<"Array before deletion "<<endl;
    			for(int i = 0; i <= (n-1); i++){
        			cout<<a[i]<<'\t';
    			}
    			cout<<endl;
    			cout<<"Input position of element you want to delete "; cin >> position;
    			for(int i = (position - 1); i<=(n-1); i++) {
        			a[i]  = a[i+1];    
    			}
    			cout<<"Array after deletion "<<endl;
    			for(int i = 0; i <= (n-2); i++){
        			cout<<a[i]<<'\t';
    			}
    			cout<<endl;
    			break;
    		case 2:
    			cout<<"Input size of array "; cin >> n;
    			for(int i = 0; i <= (n-1); i++){
        			cout<<"input value for one particular element "; cin >> b[i];
    			}
    			cout<<"Array before deletion "<<endl;
    			for(int i = 0; i <= (n-1); i++){
        			cout<<b[i]<<'\t';
    			}
    			cout<<endl;
    			cout<<"Input position of element you want to delete "; cin >> position;
    			for(int i = (position - 1); i<=(n-1); i++) {
        			b[i]  = b[i+1];    
    			}
    			cout<<"Array after deletion "<<endl;
    			for(int i = 0; i <= (n-2); i++){
        			cout<<b[i]<<'\t';
    			}
    			cout<<endl;
    			break;
    		case 3:
    			cout<<"Input size of array "; cin >> n;
    			for(int i = 0; i <= (n-1); i++){
        			cout<<"input value for one particular element "; cin >> c[i];
    			}
    			cout<<"Array before deletion "<<endl;
    			for(int i = 0; i <= (n-1); i++){
        			cout<<c[i]<<'\t';
    			}
    			cout<<endl;
    			cout<<"Input position of element you want to delete "; cin >> position;
    			for(int i = (position - 1); i<=(n-1); i++) {
        			c[i]  = c[i+1];    
    			}
    			cout<<"Array after deletion "<<endl;
    			for(int i = 0; i <= (n-2); i++){
        			cout<<c[i]<<'\t';
    			}
    			cout<<endl;
    			break;

			}
		}

} while (input != 0);



	return 0;
}