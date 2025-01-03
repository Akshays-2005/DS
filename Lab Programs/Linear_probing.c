//Linear Probing
//Code:
#include<stdio.h>
int hashtable[100];
int hashindex,probeindex,m,n,key,data;
void insert_into_hashtable();
void display_hashtable();
int search_in_hashtable();
void main(){
    printf("\nEnter number of memory locations in hash table:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        hashtable[i]=-1;
    }
    printf("\nEnter number of keys in hashtable to be placed:");
    scanf("%d",&n);
    insert_into_hashtable();
    display_hashtable();
    printf("\nEnter key to be searched:");
    scanf("%d",&key);
    int res=search_in_hashtable();
    if(res!=-1){
        printf("\nKey %d is found at index %d",key,res);
    }
    else{
        printf("\nKey %d is not found  in hashtable",key);
    }
}
void insert_into_hashtable(){
    for(int i=0;i<n;i++){
        printf("Enter key to be added to hashtable:");
        scanf("%d",&data);
        hashindex=data % m;
        if(hashtable[hashindex]==-1){
            hashtable[hashindex]=data;
        }
        else{
            while(hashtable[hashindex]!=-1){
                hashindex=(hashindex+1)%m;
            }
            hashtable[hashindex]=data;
        }
    }
}
void display_hashtable(){
    printf("\nHash table:\n");
    for(int i=0;i<m;i++){
        if(hashtable[i]!=-1){
            printf("\nIndex %d --> Key %d",i,hashtable[i]);
        }
        else{
            printf("\nIndex %d --> Empty");
        }
    }
}
int search_in_hashtable(){
    hashindex=key%m;
    if(hashtable[hashindex]==key){
        return(hashindex);
    }
    else{
        for(int i=0;i<m;i++){
            probeindex=(hashindex+1)%m;
            if(hashtable[probeindex]==key){
                return(probeindex);
            }
            if(hashtable[probeindex]==-1){
                return(-1);
            }
        }
    }
}
/* Output:
    case-1:
Enter number of memory locations in hash table:7

Enter number of keys in hashtable to be placed:4
Enter key to be added to hashtable:25
Enter key to be added to hashtable:35
Enter key to be added to hashtable:53
Enter key to be added to hashtable:21

Hash table:

Index 0 --> Key 35
Index 1 --> Key 21
Index 2 --> Empty
Index 3 --> Empty
Index 4 --> Key 25
Index 5 --> Key 53
Index 6 --> Empty
Enter key to be searched:35

Key 35 is found at index 0
 case-2:
Enter number of memory locations in hash table:7

Enter number of keys in hashtable to be placed:4
Enter key to be added to hashtable:25
Enter key to be added to hashtable:35
Enter key to be added to hashtable:53
Enter key to be added to hashtable:21

Hash table:

Index 0 --> Key 35
Index 1 --> Key 21
Index 2 --> Empty
Index 3 --> Empty
Index 4 --> Key 25
Index 5 --> Key 53
Index 6 --> Empty
Enter key to be searched:22

Key 22 is not found in hashtable  */


