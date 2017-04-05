#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{  int i,data,num,sum=0;
   vector<int> a;
   ifstream infile("file.in",ios::in);
   infile>>num;
   while(infile>>data)
   { a.push_back(data);} 
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
   for(i=0;i<5;++i)
   {sum=sum+a.at(i);}
   cout<<sum<<endl;
   return 0;
}

