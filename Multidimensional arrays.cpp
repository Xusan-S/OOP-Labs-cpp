//U2310233
//Samatov Xusan
#include<iostream>
using namespace std;
const int n = 15;
const int m = 15;

int main(){
	int input;
	int menu_1;
	int mat1[m][n], mat2[m][n], mat3[m][n];
	int rows1, cols1, rows2, cols2, res_rows, res_cols, total_sel, total_product; 
	do
	{
		cout<<"Input 1 for program 1 "<<endl;
		cout<<"Input 2 for program 2 "<<endl;
		cout<<"Input 0 to exit "<<endl;
		cin>>input;
		switch(input){
		case 1:
			cout<<"Input 1 for program which reads and displays matrix "<<endl;
			cout<<"Input 2 for program which finds the sum of two m x n matrices "<<endl;
			cout<<"Input 3 for program which creates transposed matrix"<<endl;
			cout<<"Input 4 for program which multiply matrices "<<endl;
			cin >> menu_1; 
			switch(menu_1){
			case 1:
				cout<<"Input number of rows of the matrix ";cin >> rows1;
				cout<<"Input numer of columns of the matrix "; cin >> cols1;
				cout<<"Input the elements of the matrix: "<<endl;
				for (int i = 0; i < rows1 ; i++)
				{
					for (int j = 0; j < cols1; j++)
					{
						cin>>mat1[i][j];
					}
				}
				cout<<"Your matrix: "<<endl;
				for (int i = 0; i < rows1; i++ )
				{
					for (int j = 0; j < cols1; j++)
					{
						cout<<mat1[i][j]<<'\t';
					}
					cout<<endl;
				}
				break;
			case 2:
				cout<<"Input number of rows of the first matrix ";cin >> rows1;
				cout<<"Input number of columns of the first matrix "; cin >> cols1;
				cout<<"Input elements of the first matrix: "<<endl;
				for (int i = 0; i < rows1 ; i++)
				{
					for (int j = 0; j < cols1; j++)
					{
						cin>>mat1[i][j];
					}
				}
				cout<<"Input number of rows of the second matrix ";cin >> rows2;
				cout<<"Input numer of columns of the second matrix "; cin >> cols2;
				cout<<"Input elements of the second matrix: "<<endl;
				for (int i = 0; i < rows2; i++)
				{
					for (int j = 0; j < cols2; j++)
					{
						cin>>mat2[i][j];
					}
				}
				if (rows1 != rows2 || cols1 != cols2)
				{
					cout<<"number of rows and columns of the first matrix must be equal to number of rows and columns of the second matrix ";
					exit(1);
				}
				else{
					for (int i = 0; i < rows1; i++)
					{
						for (int j = 0; j < cols1; j++)
						{
							mat3[i][j] = (mat1[i][j] + mat2[i][j]);
						}
					}
					for (int i = 0; i < rows1; i++)
					{	
						for (int j = 0; j < cols1 ; j++)
						{
							cout<<mat3[i][j]<<'\t';
						}
						cout<<endl;
					}
				}
				break;
			case 3:
				cout<<"Input number of rows of the matrix ";cin >> rows1;
				cout<<"Input numer of columns of the matrix "; cin >> cols1;
				cout<<"Input the elements of the matrix: "<<endl;
				for (int i = 0; i < rows1 ; i++)
				{
					for (int j = 0; j < cols1; j++)
					{
						cin>>mat1[i][j];
					}
				}
				cout<<"Your matrix: "<<endl;
				for (int i = 0; i < rows1; i++ )
				{
					for (int j = 0; j < cols1; j++)
					{
						cout<<mat1[i][j]<<'\t';
					}
					cout<<endl;
				}
				cout<<"Transposed matrix: "<<endl;
				for(int i = 0; i < cols1; i++){
	    			for(int j = 0; j < rows1;j++){
	        			cout<<mat1[j][i]<<'\t';
	    			}	
	    			cout<<endl;
				}
				break;
			case 4:
				cout<<"Input number of rows of the first matrix ";cin >> rows1;
				cout<<"Input number of columns of the first matrix "; cin >> cols1;
				cout<<"Input number of rows of the second matrix ";cin >> rows2;
				cout<<"Input numer of columns of the second matrix "; cin >> cols2;
				if (cols1 != rows2 && cols2 != rows1)
				{
					cout<<"The numer of column in one matrix must be equal to number of rows in other "<<endl;
					exit(1);
				}
				else if(cols1 == rows2){
					res_rows = rows1;
					res_cols = cols2;
					cout<<"Input elements of the first matrix: "<<endl;
					for (int i = 0; i < rows1 ; i++)
					{
						for (int j = 0; j < cols1; j++)
						{
						cin>>mat1[i][j];
						}
					}
					cout<<"Input elements of the second matrix: "<<endl;
					for (int i = 0; i < rows2; i++)
					{
						for (int j = 0; j < cols2; j++)
						{
							cin>>mat2[i][j];
						}
					}
					for (int i = 0; i < res_rows; i++)
					{
						for (int j = 0; j < res_cols; j++)
						{
								mat3[i][j] = 0;
								for (int k = 0; k < rows2; k++)
								{
									mat3[i][j] += mat1[i][k] * mat2[k][j];
								}
						}
					}
				}
				else if(cols2 = rows1){
					res_rows = rows2;
					res_cols = cols1;
					cout<<"Input elements of the first matrix: "<<endl;
					for (int i = 0; i < rows1 ; i++)
					{
						for (int j = 0; j < cols1; j++)
						{
						cin>>mat1[i][j];
						}
					}
					cout<<"Input elements of the second matrix: "<<endl;
					for (int i = 0; i < rows2; i++)
					{
						for (int j = 0; j < cols2; j++)
						{
							cin>>mat2[i][j];
						}
					}
					for (int i = 0; i < res_rows; i++)
					{
						for (int j = 0; j < res_cols; j++)
						{
								mat3[i][j] = 0;
								for (int k = 0; k < rows2; k++)
								{
									mat3[i][j] += mat2[i][k] * mat1[k][j];
								}
						}
					}
				}
				cout<<"Product of these matrices is: "<<endl;
				for (int i = 0; i < res_rows; i++)
				{
					for (int j = 0; j < res_cols; j++)
					{
						cout<<mat3[i][j]<<'\t';
					}
					cout<<endl;
				}
			}
			break;
		case 2:
			for (int i = 1; i <= 5 ; i++)
			{
	    		cout<<"Input sales of the "<<i<<" salesman ";
				for (int j = 1; j <= 3; j++)
				{
					cin>>mat1[i][j];
				}
			}
			cout<<"You get this matrix: number of rows = number of salesmen, number of columns = number of products "<<endl;
			for (int i = 1; i <= 5; i++ )
			{
				for (int j = 1; j <= 3; j++)
				{
					cout<<mat1[i][j]<<'\t';
				}
				cout<<endl;
			}
			cout<<"Here is statistics: "<<endl;
			cout<<"**********************************************************"<<endl;
			for(int i = 1; i<=5; i++)
			{
	    		total_sel = 0;
	    		for(int j = 1; j<=3; j++){
	        		total_sel += mat1[i][j];
	    		}
	    		cout<<i<<" Salesman sold in total "<<total_sel<<endl;
			}
			cout<<"**********************************************************"<<endl;
			for(int i = 1; i <= 3; i++){
	    	total_product = 0;
	    	for(int j = 1; j <= 5; j++){
	        	total_product += mat1[j][i];
	    	}
	    	cout<<"Product number "<<i<<" is sold in a quantity of "<<total_product<<" units"<<endl;
	}

		}
	} while (input != 0);
	return 0;
}
