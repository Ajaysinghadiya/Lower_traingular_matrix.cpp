#include <iostream>
using namespace std;

class Lower_Triangular_Matrix//Declaring a class for the lower triangular matrix
{
    public://All parameters and functions are declared as public


    int * aaray;

    int diamention;

    void set_element(int i,int j,int element);//For setting that element at the given location

    int get_element(int i,int j);

    void display();

};

void Lower_Triangular_Matrix::set_element(int i,int j,int element)//This member function will set the element at the given location in the array 
{
    if(i>=j)//Condition for the Lower Triangular Matrix
    {
        aaray[i*(i-1)/2+ (j-1)]=element;
    }
}

int Lower_Triangular_Matrix::get_element(int i,int j)
{
    if(i>=j)
    {
        return aaray[i*(i-1)/2+(j-1)]; //Element at the index in the array location
    }
    else 
    return 0;
}

void Lower_Triangular_Matrix::display()//Dsplay the complete matrix
{
    for(int i=1;i<=diamention;i++)
    {
        for(int j=1;j<=diamention;j++)
        {
            if(i>=j)
            {
                cout<<aaray[i*(i-1)/2+(j-1)]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}


int main ()
{
    Lower_Triangular_Matrix ltm;
    cout<<"Enter the diamention of the Lower Triangular Matrix"<<endl;
    cin>>ltm.diamention;
    ltm.aaray=new int[ltm.diamention*(ltm.diamention+1)/2];

    int element;
    cout<<"Enter the all elements "<<endl;
    for(int i=1;i<=ltm.diamention;i++)
    {
        for(int j=1;j<=ltm.diamention;j++)
        {
            cin>>element;
            ltm.set_element(i,j,element);
        }
    }

    ltm.display();

    return 0;
}
