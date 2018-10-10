#include<iostream>
#include<string>
using namespace std;
#include<vector>
int main()
{
       vector<string> list; //array of 5 strings
        int numItems = 0;
        string item;
        char input;
        do{
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
              if(list.size()>=1){
                cout<<"\n (D)elete last item";
              }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;


           


                if (input == 'a'|| input =='A'){

                        cout<< "What is the item?"<<endl;
                
                        cin >> item;
                list.push_back(item);
                }
    else if (input == 'd' || input == 'D'){
                
    cout << list[list.size()-1] << " was deleted from the list.\n";
    list.pop_back();
    }
                       
                       
                
        }        while(input != 'q' && input!= 'Q');
        int num=1; 
        int index;
        if (list.size()==0){
                cout<< "No items to buy!"<<endl;
        return 0;}
        cout<<"==ITEMS TO BUY=="<<endl;
        for ( index=0; index <list.size(); index++){
                
                cout << num << " " << list[index] << endl;
                num++;
        }
        return 0;
}
