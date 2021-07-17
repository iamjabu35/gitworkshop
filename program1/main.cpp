#include <iostream> 
using namespace std; 
int main() 
{ 
    int items,i,temp1,temp2,temp3,j,count=1;
    double total,benefit=0;
    cout<<"Enter the total weight: "; cin>>total;
    cout<<"Enter the number of items: "; cin>>items;
    double profit[items],weight[items],ratio[items];
    cout<<"\nEnter the profit elements:\n";
    for (i=0;i<items;i++){
        cin>>profit[i];
    }
    cout<<"\nEnter the weight elements:\n";
    for(i=0;i<items;i++){
        cin>>weight[i];
    }
    for(i=0;i<items;i++){
        ratio[i]=profit[i]/weight[i];
        
    }
   
     for(i=0;i<items;i++)
    {   
        for(j=i+1;j<items;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp1=ratio[i];temp2=profit[i];temp3=weight[i];
                ratio[i]=ratio[j];profit[i]=profit[j];weight[i]=weight[j];
                ratio[j]=temp1;profit[j]=temp2;weight[j]=temp3;
            }
        } 
    }
    
    cout<<"\nProfit:";
    for (i=0;i<items;i++){
        cout<<"\t"<<profit[i];
    }
    cout<<"\nWeight:";
    for (i=0;i<items;i++){
        cout<<"\t"<<weight[i];
    }
    cout<<"\nRatio:";
    for (i=0;i<items;i++){
        cout<<"\t"<<ratio[i];
    }
    
    


    for (i=0;i<items;i++){
        total=total-weight[i];
        if(total>=0){
            benefit=benefit+profit[i];
            ++count;
        }
        else{
            total=total+weight[i];
           
                benefit=benefit+((total/count)*profit[i]);
                break;
            }
        }
    
    
    cout<<"\n\nThe Total benefit = "<<benefit;
    
    
    
    
    cout<<"\n\n\n\n";
} 