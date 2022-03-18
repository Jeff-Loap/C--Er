#include <iostream>
using namespace std;
 
int main()
{
    int **p;   // 星号的个数代表维数 
    int i,j;   //p[4][8] 
    //开始分配4行8列的二维数据   
    p = new int *[4];    //行 
    for(i=0;i<4;i++){
        p[i]=new int [8];//列 
    }
 
    for(i=0; i<4; i++){  //分配数值 
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //打印数据   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0) cout<<endl; 
            cout<<p[i][j]<<"\t";   
        }
    }   
    //开始释放申请的堆   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    
    delete [] p;   
    
    return 0;
}
/*     格式
 int **array
// 假定数组第一维长度为 m， 第二维长度为 n
// 动态分配空间
array = new int *[m];
for( int i=0; i<m; i++ )
{
    array[i] = new int [n]  ;
}
//释放
for( int i=0; i<m; i++ )
{
    delete [] array[i];
}
delete [] array;
*/
 
