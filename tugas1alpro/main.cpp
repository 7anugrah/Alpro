/*  nama   :anugrah dias dwi k
    nim    :a11.2022.14923
    k.kelas:a11.4207
*/

#include <iostream>

using namespace std;

int tambah(int a, int b){
    return a+b;
}
int kurang(int a, int b){
    return a-b;
}
int kali(int a, int b){
    return a*b;
}
int result(int arr[], int x){
    int jumlah = 0;
    for(int i=0; i<x; i++){
        jumlah+=arr[i];
    }
    return jumlah;
}
float average(int arr[], int x){
    float jumlah = 0;
    for(int i=0; i<x; i++){
        jumlah+=arr[i];
    }
    return jumlah/=x;
}


int main()
{
    int a, b, x;
    cout<<"penjumlahan, pengurangan, perkalian"<<endl;
    cout<<"masukkan nilai pertama = ";
    cin>>a;
    cout<<"masukkan nilai kedua = ";
    cin>>b;
    cout<<"hasil penjumlahan = "<<a<<" + "<<b<<" = "<<tambah(a,b)<<endl;
    cout<<"hasil pengurangan = "<<a<<" - "<<b<<" = "<<kurang(a,b)<<endl;
    cout<<"hasil perkalian = "<<a<<" * "<<b<<" = "<<kali(a,b)<<endl;
    cout<<endl;
    cout<<"program total dan rata-rata"<<endl;
    cout<<"masukkan jumlah inputan array = ";
    cin>>x;
    int ar[x];
    for(int i=0; i<x; i++){
        cout<<"masukkan array index ke-"<<i<<" =";
        cin>>ar[i];
    }
    cout<<"Total Inputan Array = "<< result(ar,x)<<endl;
    cout<<"Rata-Rata Inputan Array = "<< average(ar,x)<<endl<<endl;
    return 0;
}
