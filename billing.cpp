#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string name="JAGAT";
int pass=6370144;
cout<<"Enter username:";
string name2;
cin>>name2;
cout<<"Enter password:";
int pass2;
cin>>pass2;
if ( name2==name && pass2==pass)
{
		
    string itemn,custn2,custn,mail;
	int  b,casht,cashr,carryb;
	int  items,totalqua;
	float itemq,itempr;
	float  total=0,gst,igst;
	long long custnu;
	
	
	cout<<"                                                                          WELCOME "<<"JAGAT"<<"                    "<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	
	{
	//customer details input
	cout<<"                  Enter Customer First Name = ";
	cin>>custn;
	cout<<endl;
	cout<<"                  Enter Customer Last Name = ";
	cin>>custn2;
	cout<<endl;
	cout<<"                  Enter Customer 10 digit Mobile Number = ";
	cin>>custnu;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
}
//billing starts
cout<<"                                                               **********CENTURION UNIVERSITY************"<<endl;
 cout<<"                                                             ********CUSTOMER  BILLING  SYSTEM***********"<<endl;
 
 
 
	cout<<"                  Customer Name    = "<<custn<<" "<<custn2<<endl;
	cout<<"                  Customer Number  = "<<custnu<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;

	cout<<"                  Enter The Number Of Items = ";
	cin>>b;
	cout<<endl;
	
	
	
//items details input
 for(int i =0;i<b;i++)
 {
 	cout<<"                  Enter Item Name "<<i+1<<" = ";
 	cin>>itemn;
 	cout<<endl;
 	cout<<"                  Enter Item Quantity = ";
 	cin>>itemq;
 	cout<<endl;
 	cout<<"                  Enter Item Price = ";
 	cin>>itempr;
 	
    cout<<endl;
    cout<<endl;
    cout<<endl;
    totalqua=totalqua+itemq;
    total =total+itemq*itempr;
    cout<<"___________________________________________________________________________________________________________________________________________________________________________________________________________________"<<endl;
 	cout<<"                  Total Price Of Item = "<<total<<"/-"<<endl;
 	cout<<"___________________________________________________________________________________________________________________________________________________________________________________________________________________";
  	cout<<endl;
  	cout<<endl;
  	cout<<endl;
  	cout<<endl;
}


cout<<"                      Need Carry Bag "<<endl;
cout<<endl;
cout<<"                      (Carry bag charges extra 10/-)"<<endl;
cout<<"                      Press 1 To Confirm Carry Bag or 0 To Skip = ";
cin>>carryb;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
//billing calculation including GST
if(carryb==1)
{
	gst=total*18/100;
  igst=total+gst+10;
  cout<<"                                                               Total Amount(Excluding GST)   "<<endl;
  cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout<<endl;
  cout<<"                       Amount       = "<<total<<"/-";
  cout<<endl;
  cout<<"                                                                      GST Included 18%        "<<endl;
  cout<<"                       GST Amount   = "<<gst<<"/-";
  cout<<endl;
  cout<<"                                                             Total Bill(Including GST & Carry Bag)   "<<endl;
  cout<<"                       Total Amount = "<<igst<<"/-";
  cout<<endl;
}
  else
  {
   	
  gst=total*18/100;
  igst=total+gst;
  cout<<"                                                                    Total Amount(Excluding GST)   "<<endl;
  cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
  cout<<"                                                    Amount       = "<<total<<"/-";
  cout<<endl;
  cout<<"                                                                        GST Included 18%      "<<endl;
  cout<<"                                                    GST Amount   = "<<gst<<"/-";
  cout<<endl;
  cout<<"                                                                     Total Bill(Including GST)   "<<endl;
  cout<<"                                                    Total Amount = "<<igst<<"/-";
  cout<<endl;  
}
  //cash details
  cout<<"                                                    Enter cash given  "<<endl;
  cout<<"                                                    Amount = ";
  cin>>casht;
  cout<<endl;
  
  cashr=casht-igst;
  //cash details
  cout<<"                                                                 --------- Receipt----------       "<<endl;
  
  
  if(casht>=total)
  {
  cout<<"                                                           "<<custn<<" "<<custn2<<endl;
  cout<<"                                                            Total items   = "<<totalqua<<endl;
  cout<<"                                                            Total Amount  = "<<igst<<"/-"<<endl;
  cout<<"                                                            Cash Given    = "<<casht<<"/-"<<endl;
  cout<<"                                                            Cash Returned = "<<cashr<<"/-"<<endl;
  cout<<endl;
}
  if(casht<total)
  {
  	cout<<"                                               Sorry! Cash given is less than the total amount"<<endl;
  }

  else
  {
  
  cout<<"                                                               ******PAYMENT SUCCESSFUL****** "<<endl;
  cout<<endl;
  cout<<"                                                                        THANK YOU "<<endl;
  cout<<"                                                                   PLEASE VISIT AGAIN "<<endl;
}}
  else
  {
  	cout<<"Invalid Password ";
  }
	return 0;
 }
