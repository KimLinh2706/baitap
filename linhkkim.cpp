
   /* BÀi 1*/
/*#include<iostream>    
using namespace std;
int main()
{
   int n;
 do   
   
  {
     cout<<"nhap mot thu trong 1 tuan :";
   cin>>n;	
   	
   }
   while(n<2 ||n>7);
   if(n==2)
   {
   	cout<<" Thu 2"<<endl;
   }
   else if(n==3)
   {
   	cout<<n<<" la Thu 3"<<endl;
   }
   else if(n==4)
   {
   	cout<<n<<" la Thu 4"<<endl;
   }
   else if(n==5)
   {
                cout<<n<<" la Thu 5"<<endl;
   }
   else if(n==6)
   {
   	cout<<n<<"la Thu 6"<<endl;
   }
   else if(n==7)
   {
   	cout<<n<< "la Thu 7"<<endl;
   }
   else if(n==8)
   {
   	cout<<n<< "la Chu Nhat"<<endl;
   }
  return 0; 
}*/
    /*Bài 2*/
    
 /*   #include<iostream>
    using namespace std;
    int main()
    
    {
      int km;
      do
      {
      cout<<" Nhap so KM Dien Tieu Thu:";
      cin>>km; 
      }
      while(km<=0);
	      if(km>0 && km<=100)
	      {
	         cout<<"so tien dien la :"<<km*2000<<" vnd"<<endl;
	      }
	      else if(km>101 && km<=200)
	      {
	         	cout<<"so tien dien la :"<<km*2500<<" vnd"<<endl;      	
	      }
	      else if(km>201 && km<=300)
	      {
	         	cout<<"so tien dien la :"<<km*3000<<" vnd"<<endl;      	
	      }
	      else if(km>300)
	      {
	         	cout<<"so tien dien la :"<<km*5000<<" vnd"<<endl;      	
	      }	
    return 0;	
    }*/
    
    /*Bài 3*/
    
/*#include<iostream>
using namespace std;
int main()
{
  int p=1;
  int n;
  cout<<"Nhap so n :";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    p*=i*2;	
  	
  }	
   cout<<" tich P la "<<p<<endl;	
}*/

    /*BÀi 4*/
    
#include<iostream>
using namespace std;
int main()
{
	int n;
  cout<<" VE TAM GIAc"<<endl;
   cout<<" Nhap Chieu Cao Cho Tam Giac :";
   cin>>n;
    for(int j=1;j<=n;j++)
    {
    for(int i=n;i>=j;i--)
  cout<<"*";
    	
     cout<<endl;
     		
    }
  
 n--;	
}