#include <iostream>

using namespace std;

void TampilArray(char nilai[20], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<nilai[i]<<' ';
    }cout<<endl;
}

int main()
{
    char nilai[20];
    int i,n,j,tmp;

    cout<<" \n ============= Program Bubble Sort ============= "<<endl;
    cout<<" \n Masukkan Banyaknya Elemen Array = "; cin>>n;
    cout<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<" Elemen Array Ke-"<<i<<" : ";cin>>nilai[i];
    }
    cout<<"\n Data Sebelum diurut : ";
    TampilArray(nilai,n);
    for(int i=1; i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
        if (nilai[j] < nilai[j+1])
            {
                tmp=nilai[j];
                nilai[j]= nilai[j+1];
                nilai[j+1] = tmp;
            }
        }
    }
     cout<<" \n\n Data Setelah diurut : ";
     TampilArray(nilai,n);

     cout<<" \n ====== Created By : Kartika Nadim Fatwa ======= "<<endl;
    return 0;

}
