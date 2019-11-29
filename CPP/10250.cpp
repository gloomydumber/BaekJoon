// https://www.acmicpc.net/problem/10250
// 동적할당 확실히..
// 더 깔끔하게 할 수 없는가
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int nofcase;
  cin>>nofcase;
  int height; // number of hotel floor
  int width; // number of hotel room for same floor
  int guest;
  int temp;
  int t1, t2;

  for(int i = 0; i<nofcase; i++)
  {
    cin>>height>>width>>guest;
    int **hotel = new int*[height];

    for(int i=0; i<height; i++)
    {
      hotel[i] = new int[width];
    }

    for(int i=0; i<height; i++)
    {
      for(int j=0; j<width; j++)
        {
          hotel[i][j]=(i+1)*100+(j+1);
          //cout<<hotel[i][j]<<'\n';
        }
    }


/*
    for(int i=0; i<height; i++)
    {
      for(int j=0; j<width; j++)
        {
          cout<<hotel[i][j]<<' ';
        }
        cout<<'\n';
    }
*/
    //cout<<i<<' '<<nofcase<<endl;

    //cout<<guest-((guest/height)*height)<<' '<<guest/height<<'\n';
    if(guest%height==0)
      temp=guest/height-1;
      else
        temp=guest/height;
    t1=guest-(temp*height)-1;
    t2=temp;

    cout<<hotel[t1][t2]<<'\n';

    for(int i=0; i<height; i++)
    {
      delete []hotel[i];
    }

    delete []hotel;

//    if(i==nofcase)
  //    break;
  }


  //cout<<"whydontr"<<endl;

  return 0;
}
