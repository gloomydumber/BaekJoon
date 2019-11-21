// https://www.acmicpc.net/problem/1764
// https://bit.ly/2CQVePq
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<string> v;
	vector<string> result;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	int cnt = 0;

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;
		if (binary_search(v.begin(), v.end(), s)) {
			result.push_back(s);
			cnt++;
		}

	}
	cout << cnt << '\n';
	sort(result.begin(), result.end());
	for (string s : result)
		cout << s << '\n';

	return 0;
}

/* 주석제거1(라인제거)
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N,M;
    int cnt=0;
    cin>>N>>M;
    char **dm = new char*[N];
    char **bm = new char*[M];
    char **list = new char*[max(N,M)];
    char *temp[20];

    for(int i=0; i<N; i++)
    {
      dm[i] = new char[20];
      cin>>dm[i];
    }

    for(int i=0; i<M; i++)
    {
      bm[i] = new char[20];
      cin>>bm[i];
    }

    for(int i=0; i<max(N,M); i++)
    {
      list[i] = new char[20]{'\0'};
    }

    /*
    cout<<bool(dm[0]==bm[0])<<endl; // dm[i]는 주소값 반환
    cout<<strcmp(dm[0],bm[0])<<endl; // strcmp 0 이면같다 -1, 1
    */
    /*주석 제거 2 (라인제거)
    for(int i=0; i<N; i++) // 시간초과 의심 O(n^2)
    {
      for(int j=0; j<M; j++)
      {
        if(strcmp(dm[i],bm[j])==0)
        {
          list[i]=dm[i];
          cnt++;
        }
      }
    }

    /*
    for(int i=0; i<max(N,M)-1; i++)
    {
      for(int j)
      if(strcmp(list[i], list[i+1])==-1)
      {
        cout<<"chajata"<<endl;
        *temp=list[i];
        cout<<"chajata2: "<<*temp<<' '<<list[i]<<endl;
        list[i]=list[i+1];
        cout<<"chajata3: "<<list[i]<<' '<<list[i+1]<<endl;
        list[i+1]=*temp;
        cout<<"chajata4: "<<list[i+1]<<endl;
      }
      cout<<"why!!!!!!"<<endl;
    }
    */
/*주석제거 3 (라인제거)
// maybe bubble sort..
    for(int i=0; i<max(N,M)-1; i++)
    {
      for(int j=0; j<max(N,M)-1-i; j++)
      {
        if(strcmp(list[j], list[j+1])>0)
        {
          strcpy(*temp, list[j]);
          strcpy(list[j], list[j+1]);
          strcpy(list[j+1], *temp);
        }
      }
    }
    cout<<cnt<<'\n';

    for(int i=0; i<max(N,M); i++)
    {
      if(*list[i]!='\0')
        cout<<list[i]<<'\n';
    }

    /*
    for(int i=0; i<N; i++)
    {
      cout<<dm[i]<<' ';
    }
    cout<<'\n';
    for(int i=0; i<M; i++)
    {
      cout<<bm[i]<<' ';
    }
    */
/* 주석제거4(라인제거)
    for(int i=0; i<N; i++)
    {
      delete []dm[i];
    }

    for(int i=0; i<M; i++)
    {
      delete []bm[i];
    }

    for(int i=0; i<max(N,M); i++)
    {
      delete []list[i];
    }

    delete []dm;
    delete []bm;
    delete []list;


    return 0;
}
*/ //주석제거5(라인제거)
