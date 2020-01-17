#include<iostream>
using namespace std;
int gcd_recursion(int num1,int num2)
{
    if(num2!=0)
    {
        return gcd_recursion(num2,num1%num2);
    }
    else
    return num1;
}
int gcd(int num1,int num2)
{
    while(num2!=0)
    {
        int t=num2;
        num2=num1%num2;
        num1=t;
    }
    return num1;
}
int fact_recursion(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	return num*fact_recursion(num-1);
}
int fact(int num)
{
	int result=1;
	for(int i=num;num>0;num--)
	{
		result*=num;
	}
	return result;
}
int power(int num1,int num2)
{
	int result=1;
	for(int i=1;i<=num2;i++)
	{
		result*=num1;
	}
	return result;
}
int power_recursion(int num1,int num2)
{
	if(num2==0)
	{
		return 1;
	}
	else
	return num1*power_recursion(num1,num2-1);
}
int fibo(int num)
{
	int first=0,i,second=1,next;
	cout<<"\n FIBONACCI SERIES UPTO "<<num<<" TERMS \n";
	for(i=0;i<num;i++)
    {
      if(i<=1)
      next=i;
      else
       {
		next=first+second;
		first=second;
		second=next;
		}
		cout<< next<<"\n";
}
}
int fibo_recursion(int num)
{
	static int first=0,sec=1,next;
	if(num>0)
	{
		next=first+sec;
		first=sec;
		sec=next;
		cout<<next<<"\n";
		fibo_recursion(num-1);
	}
}
int main()
{
	int num1,num2,num;
    int n,m,no,num3;
    cout<<" ENTER TWO POSITIVE NUMBERS \n";
    cin>>num1>>num2;
    if(num1<0||num2<0)
    cout<<" WRONG INPUT!! CAN'T CALCULATE GCD";
    else
    {
    int GCD_r=gcd_recursion(num1,num2);
    cout<<" GCD OF "<<num1<<" AND "<<num2<<" USING RECURSION IS "<<GCD_r;
    int GCD=gcd(num1,num2);
    cout<<"\n GCD OF "<<num1<<" AND "<<num2<<" IS "<<GCD;
    }
    cout<<"\n ENTER A POSITIVE NUMBER FOR COMPUTING FACTORIAL\n ";
    cin>>num;
    if(num<0)
    cout<<" WRONG INPUT!! CAN'T CALCULATE FACTORIAL";
    else
    {
    int FACT_r=fact_recursion(num);
    cout<<" FACTORIAL OF "<<num<<" USING RECURSION IS "<<FACT_r;
    int FACT=fact(num);
    cout<<"\n FACTORIAL OF "<<num<<" IS "<<FACT;
    }
    cout<<"\n ENTER TWO POSITIVE NUMBER\n";
    cin>>n>>m;
    if(n<0||m<0)
    cout<<" WRONG INPUT!! CAN'T CALCULATE POWER";
    else
    {
    int POWER_r=power_recursion(n,m);
    cout<<n<<" RAISED TO POWER "<<m<<" USING RECURSION IS "<<POWER_r;
	int POWER=power(n,m);
	cout<<"\n"<<n<<" RAISED TO POWER "<<m<<" IS "<<POWER;
    }
	cout<<"\n ENTER A POSITIVE NUMBER \n";
	cin>>no;
	if(no<0)
    cout<<" WRONG INPUT!! CAN'T PRINT FIBONACCI SERIES";
    else
    {
	cout<<" FIBONACCI SERIES UPTO "<<no<<" TERMS USING RECURSION IS ";
	if(no==1)
	cout<<"\n0";
	else
	{
		cout<<"\n0"<<"\n"<<"1\n";
		if(no>2)
		{
			fibo_recursion(no-2);
		}
	}
	fibo(no);
    }
    return 0;
}
