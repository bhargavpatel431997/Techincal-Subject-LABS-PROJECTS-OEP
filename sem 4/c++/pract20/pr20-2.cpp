#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    float num[2]={12.555,30.65};
    ofstream fout("TEST");
    fout.write((char*)&num,sizeof(num));
    fout.close();
    for(int i=0;i<2;i++)
        num[i]=0.0;
    ifstream fin("TEST");
    fin.read((char*)&num,sizeof(num));
    for(int i=0;i<2;i++)
    {
        cout<<num[i]<<endl;
    }
    fin.close();
    return 0;
}
